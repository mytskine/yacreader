#ifndef COMICDOWNLOADINFOCONTROLLER_H
#define COMICDOWNLOADINFOCONTROLLER_H

#include "httprequest.h"
#include "httprequesthandler.h"
#include "httpresponse.h"

class ComicDownloadInfoController : public HttpRequestHandler {
    Q_OBJECT
    Q_DISABLE_COPY(ComicDownloadInfoController);

public:
    /** Constructor **/
    ComicDownloadInfoController();

    /** Generates the response */
    void service(HttpRequest& request, HttpResponse& response);
};

#endif // COMICDOWNLOADINFOCONTROLLER_H
