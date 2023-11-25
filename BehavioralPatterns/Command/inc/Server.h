#ifndef SERVER_H
#define SERVER_H

#include "Image.h"

// RECEIVER CLASS
class Server {
  std::vector<Image> images;

 public:
  Server() = default;

  std::vector<Image> fetchAllImages()
  {
    return images;
  }

  void saveImage(Image image)
  {
    images.push_back(image);
  }

  int getNumOfImages()
  {
    return images.size();
  }
};

#endif  // SERVER_H