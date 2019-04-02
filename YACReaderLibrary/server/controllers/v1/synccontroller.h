#ifndef SYNCCONTROLLER_H
#define SYNCCONTROLLER_H

#include <QObject>

#include "httprequest.h"
#include "httprequesthandler.h"
#include "httpresponse.h"

class SyncController : public HttpRequestHandler {
    Q_OBJECT
    Q_DISABLE_COPY(SyncController)
public:
    /** Constructor */
    SyncController();

    /** Generates the response */
    void service(HttpRequest& request, HttpResponse& response);
};

#endif // SYNCCONTROLLER_H
