#ifndef PAGECONTROLLER_H
#define PAGECONTROLLER_H

#include "httprequest.h"
#include "httprequesthandler.h"
#include "httpresponse.h"

class PageController : public HttpRequestHandler {
    Q_OBJECT
    Q_DISABLE_COPY(PageController);

public:
    /** Constructor */
    PageController();

    /** Generates the response */
    void service(HttpRequest& request, HttpResponse& response);
};

#endif // PAGECONTROLLER_H
