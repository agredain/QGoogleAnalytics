#include "qgoogleanalyticsconstructor.h"
#include "qgoogleanalytics.h"
#include "QMutex"
#include <QNetworkAccessManager>


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


/**
 * @brief m_instance
 */
QGoogleAnalytics m_instance = nullptr;



/**
 * @brief mutex
 */
QMutex mutex;



/**
 * @brief The QGoogleAnalyticsPrivate class
 */
class QGoogleAnalyticsPrivate {
public:
    QString                 m_trackingID;
    QString                 m_googleAnalyticsVersion = __GOOGLE_ANALYTICS_VERSION__;
    QNetworkAccessManager   *m_nam;
};



// ------------------------------------------------------------------------------------ //
QGoogleAnalyticsConstructor::QGoogleAnalyticsConstructor(const QString& trackingID)
{
    mutex.lock();
    if(m_instance == nullptr) {
        m_instance = new QGoogleAnalytics(trackingID);
    }

}



// ------------------------------------------------------------------------------------ //
QGoogleAnalytics::QGoogleAnalytics(const QString& trackingID ):
    d_ptr(new QGoogleAnalyticsPrivate)
{
    d_ptr->trackingID = trackingID;
    d_ptr->m_nam = new QNetworkAccessManager();
}
