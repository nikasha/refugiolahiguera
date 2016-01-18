api = 2
core = 7.x

; Default subdirectory for projects:
; defaults[projects][subdir] = "contrib"

; Default commons contrib modules
projects[captcha][version] = "1.3"
projects[captcha][subdir] = "contrib"
projects[pathauto][version] = "1.3"
projects[pathauto][subdir] = "contrib"
projects[transliteration][version] = "3.2"
projects[transliteration][subdir] = "contrib"
projects[coffee][version] = "2.2"
projects[coffee][subdir] = "contrib"
projects[ctools][version] = "1.9"
projects[ctools][subdir] = "contrib"
projects[jquery_update][version] = "2.7"
projects[jquery_update][subdir] = "contrib"
projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"
projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"
projects[entity][version] = "1.6"
projects[entity][subdir] = "contrib"
projects[date][version] = "2.9"
projects[date][subdir] = "patched"
projects[date][patch][] = "http://drupal.org/files/issues/date-exposed_grouped_fileters-1876168-50.patch"
projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "patched"
projects[entityreference][patch][] = "http://drupal.org/files/view-argument-as-token-1699378-46.patch"
projects[link][version] = "1.3"
projects[link][subdir] = "contrib"
projects[views][version] = "3.13"
projects[views][subdir] = "contrib"
projects[panels][version] = "3.5"
projects[panels][subdir] = "contrib"
projects[features][version] = "2.7"
projects[features][subdir] = "contrib"
projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"
projects[elysia_cron][version] = "2.1"
projects[elysia_cron][subdir] = "contrib"
projects[rules][version] = "2.9"
projects[rules][subdir] = "contrib"
projects[ckeditor][version] = "1.16"
projects[ckeditor][subdir] = "contrib"
projects[token][version] = "1.6"
projects[token][subdir] = "contrib"
projects[smtp][version] = "1.3"
projects[smtp][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.3"
projects[views_bulk_operations][subdir] = "contrib"
projects[path_breadcrumbs][version] = "3.3"
projects[path_breadcrumbs][subdir] = "contrib"
projects[site_map][version] = "1.3"
projects[site_map][subdir] = "contrib"

; Drupal Origins Security Extension:
projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"
projects[login_security][version] = "1.9"
projects[login_security][subdir] = "contrib"
projects[password_policy][version] = "1.12"
projects[password_policy][subdir] = "contrib"
projects[autologout][version] = "4.4"
projects[autologout][subdir] = "contrib"
projects[securepages][version] = "1.0-beta2"
projects[securepages][subdir] = "contrib"
projects[lopd][version] = "1.1"
projects[lopd][subdir] = "contrib"
projects[eu_cookie_compliance][version] = "1.14"
projects[eu_cookie_compliance][subdir] = "contrib"
projects[security_review][version] = "1.2"
projects[security_review][subdir] = "contrib"

; Drupal Origins Internationalization Extension:
projects[l10n_update][version] = "1.1"
projects[l10n_update][subdir] = "contrib"
projects[i18n][version] = "1.13"
projects[i18n][subdir] = "contrib"
projects[entity_translation][version] = "1.0-beta4"
projects[entity_translation][subdir] = "contrib"
projects[title][version] = "1.0-alpha7"
projects[title][subdir] = "contrib"
projects[variable][version] = "2.5"
projects[variable][subdir] = "contrib"

; Drupal Origins Developer Extension:
projects[devel][version] = "1.5"
projects[devel][subdir] = "contrib"
projects[maillog][version] = "1.0-alpha1"
projects[maillog][subdir] = "contrib"

; Drupal Origins SEO & Social Extension:
projects[metatag][version] = "1.7"
projects[metatag][subdir] = "contrib"
projects[globalredirect][version] = "1.5"
projects[globalredirect][subdir] = "contrib"
projects[service_links][version] = "2.3"
projects[service_links][subdir] = "contrib"
projects[xmlsitemap][version] = "2.2"
projects[xmlsitemap][subdir] = "contrib"

; Drupal Origins Search extension:
projects[search_api][version] = "1.16"
projects[search_api][subdir] = "contrib"
projects[search_api_db][version] = "1.5"
projects[search_api_db][subdir] = "contrib"
projects[facetapi][version] = "1.5"
projects[facetapi][subdir] = "contrib"

; Drupal Origins Extra extension:
projects[flexslider][version] = "2.0-rc1"
projects[flexslider][subdir] = "contrib"
projects[jcarousel][version] = "2.7"
projects[jcarousel][subdir] = "contrib"
projects[colorbox][version] = "2.10"
projects[colorbox][subdir] = "contrib"
projects[chosen][version] = "2.0-beta4"
projects[chosen][subdir] = "contrib"

; Add Flexslider library, needed to use Flexslider module:
libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/zipball/master"
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"

; Add Chosen library, needed to use Chosen module:
libraries[chosen][download][type] = "file"
libraries[chosen][download][url] = "https://github.com/harvesthq/chosen/archive/master.zip"
libraries[chosen][directory_name] = "chosen"
libraries[chosen][type] = "library"

; Themes
projects[da_vinci][type] = "theme"
projects[da_vinci][version] = "2.3"