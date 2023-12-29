#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <iostream>
#include <string>

class Subscriber {
  private:
    int id;

  public:
    Subscriber(int id)
    {
      this->id = id;
    };

    // Different subscribers can inherit this class and override this method
    virtual void update(std::string abbr, float value)
    {
      std::cout << "Update received - Subscriber ID:" << this->id << std::endl;
      std::cout << abbr << " new value: " << value << std::endl;
    }

    int getSubscriberId()
    {
      return id;
    }
};

#endif  // SUBSCRIBER_H