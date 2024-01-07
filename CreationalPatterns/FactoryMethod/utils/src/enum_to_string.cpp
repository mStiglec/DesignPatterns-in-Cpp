#include "../inc/enum_to_string.h"

namespace utils
{

std::string getDressing(enum Dressing dressing)
{
  switch (dressing)
  {
    case MAYONNAISE:
      return "Mayonnaise";
    case KETCHUP:
      return "Ketchup";
    case TOBACCO:
      return "Tobacco";
    case SOY:
      return "Soy";
    case TARTAR:
      return "Tartar";
    case BBQ:
      return "BBQ";
    default:
      return "";
  }
}

std::string getSalad(enum Salad salad)
{
  switch (salad)
  {
    case GREEK:
      return "Greek";
    case LETTUCE:
      return "Lettuce";
    case BROCCOLI:
      return "Broccoli";
    case BEAN:
      return "Bean";
    case PAPRIC:
      return "Papric";
    case GREEN:
      return "Green";
    default:
      return "";
  }
}

std::string getSize(enum Size size)
{
  switch (size)
  {
    case MINI:
      return "Mini";
    case SMALL:
      return "Small";
    case NORMAL:
      return "Normal";
    case JUMBO:
      return "Jumbo";
    case GIGANT:
      return "Gigant";
    default:
      return "";
  }
}

}  // namespace utils