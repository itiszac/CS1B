#include "hw10.h"

void guessFace(Card card)
{
  std::string guess = "";
  std::string face = card.szFace;

  std::cout << "Enter the face: ";

  std::cin.ignore(10000000, '\n');
  std::cin.clear();
  std::getline(std::cin, guess);

  std::transform(guess.begin(), guess.end(), guess.begin(), [](unsigned char c) { return std::tolower(c); });
  std::transform(face.begin(), face.end(), face.begin(), [](unsigned char c) { return std::tolower(c); });

  if (guess == face)
  {
    std::cout << "You win,";
  }
  else
  {
    std::cout << "You lose,";
  }
  std::cout << " the card was " << card.szFace << " of " << card.szSuit << std::endl;
}