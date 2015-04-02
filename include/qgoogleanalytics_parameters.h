#ifndef QGOOGLEANALYTICS_PARAMETERS
#define QGOOGLEANALYTICS_PARAMETERS

// GENERAL
#define __GOOGLE_ANALYTICS_VERSION__    "1"
#define __ANONYMIZATION_OF_IP__         "aip"
#define __QUEUE_TIME__                  "qt"
// Prevención de almacenamiento en memoria caché   z
// USERS
#define __CLIENT_ID__                   "cid"
#define __USER_ID__                     "uid"
// SESSION
#define __SESSION_CONTROL__             "sc"
#define __SESSION_CONTROL_START__       "start"
#define __SESSION_CONTROL_END__         "end"
#define __UNABLE_OF_IP__                "uip"
#define __UNABLE_OF_USER_AGENT__        "ua"
// TRAFFIC SOURCES
#define __URL_DOCUMENT_REFERENCE__      "dr"
#define __CAMPAING_NAME__               "cn"
#define __CAMPAING_MEDIUM__             "cm"
#define __CAMPAING_KEYWORD__            "ck"
#define __CAMPAING_CONTENT__            "cc"
#define __CAMPAING_ID__                 "ci"
#define __GOOGLEADWORDS_ID__            "gcli"
#define __GOOGLEDISPLAYADS_ID__         "dcli"
// SYSTEM DATA
#define __SCREEN_RESOLUTION__           "sr"
#define __GRAPHICS_WINDOW_SIZE__        "vp"
#define __DOCUMENT_ENCODING_            "de"
#define __SCREEN_COLOR__                "sd"
#define __USER_LANGUAGE__               "ul"
#define __JAVA_ENABLE__                 "je"
#define __FLASH_VERSION__               "fl"
// VISIT
#define __VISIT_TYPE__                  "t"
#define __VISIT_WITHOUT_INTERACTION__   "ni"
// CONTENT DATA
#define __DOCUMENT_URL__                "dl"
#define __DOCUMENT_HOST__               "dh"
#define __DOCUMENT_PATH__               "dp"
#define __DOCUMENT_TITLE__              "dt"
#define __DISPLAY_NAME__                "cd"
#define __LINK_ID__                     "linkid"
// APPLICATIONS MONITORING
#define __APPLICATION_NAME__            "an"
#define __APPLICATION_ID__              "aid"
#define __APPLICATION_VERSION__         "av"
#define __APPLICATION_INSTALATION_ID__  "aiid"
// EVENTS MONITORING
#define __EVENT_CATEGORY__              "ec"
#define __EVENT_ACTION__                "ea"
#define __EVENT_LABEL__                 "el"
#define __EVENT_VALUE__                 "ev"
// ECOMMERCE
#define __TRANSACTION_ID__              "ti"
#define __TRANSACTION_AFFILIATION__     "ta"
#define __TRANSACTION_INCOME__          "tr"
#define __TRANSACTION_SHIPPING__        "ts"
#define __TRANSACTION_TAXES__           "tt"
#define __ITEM_NAME__                   "in"
#define __ITEM_PRICE__                  "ip"
#define __ITEM_QUANTITY__               "iq"
#define __ITEM_CODE__                   "ic"
#define __ITEM_CATEGORY__               "iv"
#define __CURRENCY__                    "cu"
// ECOMMERCE IMPROVMENT
#define __PRODUCT_SKU__                 "pr[\d+]id"
#define __PRODUCT_NAME__                "pr[\d+]nm"
#define __PRODUCT_BRAND__               "pr[\d+]br"
#define __PRODUCT_CATEGORY__            "pr[\d+]ca"
#define __PRODUCT_VARIANT__             "pr[\d+]va"
#define __PROCUCT_PRICE__               "pr[\d+]pr"
#define __PROCUCT_QUANTITY__            "pr[\d+]qt"
#define __PRODUCT_COUPON_CODE__         "pr[\d+]cc"
#define __PRODUCT_POSITION__            "pr[\d+]ps"
#define __PRODUCT_CUSTOM_DIMENSION__    "pr[\d+]cd[index]"
// Add more
// SOCIAL INTERACTIONS
#define __SOCIAL_NETWORK__              "sn"
#define __SOCIAL_ACTION__               "sa"
#define __SOCIAL_ACTION_TARGET__        "st"
// TIMES
#define __USER_TIMES_CATEGORY__         "utc"
#define __USER_TIMES_VALUE_NAME__       "utv"
#define __USER_TIMES_DURATION__         "utt"
#define __USER_TIMES_LABEL__            "utl"
#define __PAGE_LOAD_TIME__              "plt"
#define __DNS_TIME__                    "dns"
#define __PAGE_DOWNLOAD_TIME__          "pdt"
#define __REDIRECT_RESPONSE_TIME__      "rrt"
#define __TCP_CONNECTION_TIME__         "tcp"
#define __SERVER_RESPONSE_TIME__        "srt"
// EXCEPTIONS
#define __EXCEPTION__DESCRIPTION__      "exd"
#define __SERIOUS_EXCEPTION__           "exf"
// CUSTOM DIMENSIONS AND METRICS
#define __CUSTOM_DIMENSION__            "cd[1-9][0-9]*"
#define __CUSTOM_METRIC__               "cm[1-9][0-9]*"
// CONTENT EXPERIMENTS
#define __EXPERIMENT_ID__               "xid"
#define __EXPERIMENT_VARIATION__        "xvar"


#endif // QGOOGLEANALYTICS_PARAMETERS
