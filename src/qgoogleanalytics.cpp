#include "qgoogleanalyticsconstructor.h"
#include "qgoogleanalytics_parameters.h"
#include "qgoogleanalytics.h"
#include "QMutex"
#include <QNetworkAccessManager>

/**
 * @brief m_instance
 */
QGoogleAnalytics *m_instance = nullptr;



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
    d_ptr->m_trackingID = trackingID;
    d_ptr->m_nam = new QNetworkAccessManager();
}
