#include "hw02.h"

int main()
{
  POINT pt1 = getPoint();
  POINT pt2 = getPoint();
  float m = 0.0f;
  float yInt = 0.0f;

  if (pt1.x == pt2.x && pt1.y == pt2.y)
  {
    std::cout << "(" << pt1.x << ", " << pt1.y << "), (" << pt2.x << ", " << pt2.y << ") is not a line.\n";
  }
  else if (checkLine(pt1.x, pt2.x))
  {
    std::cout << "Line is vertical\n" << "x = " << pt1.x << std::endl;
    return 0;
  }
  else if (checkLine(pt1.y, pt2.y))
  {
    std::cout << "Line is horizontal\n" << "y = " << pt1.y << std::endl;
    return 0;
  }
  else
  {
    m = (pt2.y - pt1.y) / (pt2.x - pt1.x);
    yInt = pt1.y + (m * (0 - pt1.x));

    if (m > 0)
      std::cout << "Line is increasing\n";
    else
      std::cout << "Line is decreasing\n"; // Line should never be constant at this point

    char sign = '+';

    if (yInt < 0)
    {
      sign = '-';
      yInt *= -1;
    }

    std::cout << std::setprecision(2) << "y = " << m << "x " << sign << " " << yInt << std::endl;
  }
  return 0;
}

POINT getPoint()
{
  POINT pt;

  std::cout << "Enter X: ";
  std::cin >> pt.x;

  std::cout << "Enter Y: ";
  std::cin >> pt.y;

 return pt; 
}

bool checkLine(float x1, float x2)
{
  if (x1 == x2)
    return true;

  return false;
}
