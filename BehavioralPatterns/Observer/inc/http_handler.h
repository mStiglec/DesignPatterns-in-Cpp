#ifndef HTTP_HANDLER
#define HTTP_HANDLER

#include <string>

class HttpHandler {
  public:
    std::string sendGetRequest(std::string URL);

    // used as callback for curl_easy_perform to write response in
    // string variable (by default response is printed to console)
    static size_t curlWriteCallback(void* ptr, size_t size, size_t nmemb, std::string* data);
};

#endif