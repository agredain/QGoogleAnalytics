#ifndef QGOOGLEANALYTICS_H
#define QGOOGLEANALYTICS_H

#include "qgoogleanalytics_global.h"


class QGoogleAnalyticsPrivate;

class QGOOGLEANALYTICSSHARED_EXPORT QGoogleAnalytics
{
public:
    friend class QGoogleAnalyticsConstructor;


private:
    QGoogleAnalytics(const QString& trackingID );

    QGoogleAnalyticsPrivate *d_ptr;
};

#endif // QGOOGLEANALYTICS_H
