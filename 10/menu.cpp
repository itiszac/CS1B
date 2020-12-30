#include "hw10.h"

void menu()
{
  int choice = 0;
  std::vector<Card> deck = createDeck();

  while (choice != 4)
  {
    std::cout << "Want to play?\n"
              << "1. Guess the face of the card\n"
              << "2. Guess the suit of the card\n"
              << "3. Guess both the face and suit\n"
              << "4. Played enough\n"
              << "Enter your choice:\n";
    std::cin >> choice;
    std::random_shuffle(deck.begin(), deck.end());

    if (choice < 5 && choice > 0)
    {
      switch (choice)
      {
      case 1:
        guessFace(deck[0]);
        break;
      case 2:
        guessSuit(deck);
        break;
      case 3:
        guessBoth(deck);
        break;
      case 4:
        return;
      }
    }
  }
}