; Custom make file for domino based projects.
;
; Place additional work in this file to extend Domino core.
; The modules located in domino core will be available to this profile, please
; utilize them prior to including new work.
; --------------------------------------------------------------------------------

api = 2
core = 7.x

defaults[projects][subdir] = contrib


; Dependencies
; --------------------------------------------------------------------------------
; projects[][subdir] = contrib
; projects[][version] =
; ; This is the issue title: http://drupal.org/node/xxxxxxx#comment-xxxxxxx
; projects[][patch][] =

; Contrib Modules
; ------------------------------------------------------------------------------


projects[ctools][version] = 1.14
projects[ctools][subdir] = contrib

projects[features][version] = 2.10
projects[features][subdir] = contrib

projects[features][version] = 2.10
projects[features][subdir] = contrib

projects[views][version] = 1.0-alpha2
projects[views][subdir] = contrib

projects[views_datasource][version] = 1.0-alpha2
projects[views_datasource][subdir] = contrib
; Views Multiple Field Settings: https://www.drupal.org/node/1881670#comment-10473816
projects[views_datasource][patch][] = https://www.drupal.org/files/issues/views_datasource-1881670-16-multiple-fields-render.patch

