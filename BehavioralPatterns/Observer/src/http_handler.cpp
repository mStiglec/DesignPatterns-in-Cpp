#include "../inc/http_handler.h"

#include <curl/curl.h>
#include <iostream>

std::string HttpHandler::sendGetRequest(std::string URL)
{
  curl_global_init(CURL_GLOBAL_DEFAULT);
  CURL* curl = curl_easy_init();

  if (curl)
  {
    std::string response_string;

    curl_easy_setopt(curl, CURLOPT_URL, URL.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, curlWriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);

    curl_easy_perform(curl);

    curl_easy_cleanup(curl);
    curl_global_cleanup();

    return response_string;
  }

  return "Error";
}

size_t HttpHandler::curlWriteCallback(void* ptr, size_t size, size_t nmemb, std::string* data)
{
  data->append((char*)ptr, size * nmemb);
  return size * nmemb;
}