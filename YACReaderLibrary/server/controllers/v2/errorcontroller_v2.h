#ifndef ERRORCONTROLLER_V2_H
#define ERRORCONTROLLER_V2_H

#include "httprequest.h"
#include "httprequesthandler.h"
#include "httpresponse.h"

class ErrorControllerV2 : public HttpRequestHandler {
    Q_OBJECT
    Q_DISABLE_COPY(ErrorControllerV2)
public:
    /** Constructor */
    ErrorControllerV2(int errorCode);

    /** Generates the response */
    void service(HttpRequest& request, HttpResponse& response);

private:
    int error;
};

#endif // ERRORCONTROLLER_H
