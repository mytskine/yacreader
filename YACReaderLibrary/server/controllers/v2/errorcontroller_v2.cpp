#include "errorcontroller_v2.h"

#include "../static.h"
#include "template.h"

ErrorControllerV2::ErrorControllerV2(int errorCode)
    : error(errorCode)
{
}

void ErrorControllerV2::service(HttpRequest& request, HttpResponse& response)
{
    Q_UNUSED(request)
    switch (error) {
    case 300:
        response.setStatus(300, "redirect");
        response.write("<html> <head> <meta http-equiv=\"refresh\" content=\"0; URL=/\"> </head> <body> </body> </html>", true);
        break;
    case 404:
        response.setStatus(404, "not found");
        response.write("404 not found", true);
        break;
    }
}
