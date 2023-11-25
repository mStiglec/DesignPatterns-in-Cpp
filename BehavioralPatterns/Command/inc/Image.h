#ifndef IMAGE_H
#define IMAGE_H

#include <string>

class Image {
 private:
  unsigned int id;
  std::string name;

  friend std::ostream& operator<<(std::ostream& out, const Image& image)
  {
    return out << "image id: " << image.id << " image name: " << image.name;
  }

 public:
  Image() = default;
  Image(unsigned int id, std::string imageName)
  {
    this->id = id;
    this->name = imageName;
  }
};

#endif  // IMAGE_H