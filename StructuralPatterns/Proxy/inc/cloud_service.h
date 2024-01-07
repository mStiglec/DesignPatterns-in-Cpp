#ifndef CLOUD_SERVICE_H
#define CLOUD_SERVICE_H

#include <string>
#include <unordered_map>

class CloudService {
  public:
    virtual void registerUser(std::string UID) = 0;
    virtual void deregisterUser(std::string UID) = 0;
    virtual void attach(std::string UID) = 0;
    virtual void downloadData() = 0;
    virtual void uploadData() = 0;
    virtual void dettach(std::string UID) = 0;
};

#endif  // CLOUD_SERVICE_H
