#!/bin/bash

# USAGE
# Run this script as given.
#
# $ bash build-dev.sh [ /fullpath/to/project.make ] [ /fullpath/to/build/project ]

# Bail if non-zero exit code
set -e

# Set from args
BUILD_FILE="$1"
BUILD_DEST="$2"
PROJECT="awesome_site"

# Drush make the site structure
drush make --force-complete ${BUILD_FILE} ${BUILD_DEST} \
  --working-copy \
  --prepare-install \
  --yes \
  --no-gitinfofile

# Copy default.settings.php and append snippets again.
chmod u+w ${BUILD_DEST}/sites/default

cp ${BUILD_DEST}/sites/default/default.settings.php ${BUILD_DEST}/sites/default/settings.php
chmod 666 ${BUILD_DEST}/sites/default/settings.php

echo "Copy files into docroot..."
if [ -d tmp/copy_to_docroot ]; then
  # Copy files into docroot
  cp -r tmp/copy_to_docroot/. ${BUILD_DEST}/
fi

echo "Copy files into sites/default..."
if [ -d tmp/copy_to_sites_default ]; then
  # Copy files into sites/default
  cp -r tmp/copy_to_sites_default/. ${BUILD_DEST}/sites/default/
fi

# Seal settings.php
chmod 444 ${BUILD_DEST}/sites/default/settings.php