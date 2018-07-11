core = 7.x
api = 2

; Drupal Core
; ------------------------------------------------------------------------------

projects[drupal][type] = core
projects[drupal][version] = 7.57

; Drupal Core Patches
; ------------------------------------------------------------------------------

; Allows us to control favicons with the Favicon module
projects[drupal][patch][] = http://cgit.drupalcode.org/favicon/plain/core.htaccess.patch?id=032dd96f9fbdc78635cb571f415311a2bef6c9a9
