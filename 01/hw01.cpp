#include "hw01.h"

const float gravity = 6.67e-8f;

int main()
{
  float mass1 = 0.0f;
  float mass2 = 0.0f;
  float dist = 0.0f;
  float force = 0.0f;

  mass1 = GetFloat("Mass 1");
  mass2 = GetFloat("Mass 2");
  dist = GetFloat("Distance");

  force = gravity * ((mass1*mass2) / pow(dist, 2.0));

  std::cout << "Force: " << std::fixed << force << std::endl;
  return 0;
}

float GetFloat(std::string output)
{
  while (true)
  {
    float val{};
    std::cout << output << ": ";
    std::cin >> val;

    if (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
      std::cout << "Entered an incorrect value. Please try again.\n";
    }
    else
    {
      return val;
    }
  }
}
