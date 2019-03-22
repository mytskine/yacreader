#ifndef COMICDOWNLOADINFOCONTROLLER_V2_H
#define COMICDOWNLOADINFOCONTROLLER_V2_H

#include "httprequest.h"
#include "httprequesthandler.h"
#include "httpresponse.h"

class ComicDownloadInfoControllerV2 : public HttpRequestHandler {
    Q_OBJECT
    Q_DISABLE_COPY(ComicDownloadInfoControllerV2)
public:
    /** Constructor **/
    ComicDownloadInfoControllerV2();

    /** Generates the response */
    void service(HttpRequest& request, HttpResponse& response);
};

#endif // COMICDOWNLOADINFOCONTROLLER_H
