#include "hw10.h"

std::vector<Card> createDeck()
{
  std::vector<Card> deck;
  std::string szSuit[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
  std::string szFace[] = {"Ace",
                          "Two",
                          "Three",
                          "Four",
                          "Five",
                          "Six",
                          "Seven",
                          "Eight",
                          "Nine",
                          "Ten",
                          "Jack",
                          "Queen",
                          "King"};

  for (int s = 0; s < 4; s++)
  {
    for (int f = 0; f < 13; f++)
    {
      Card card;
      card.szFace = szFace[f]; //FACES(f);
      card.szSuit = szSuit[s]; //SUITS(s);
      deck.push_back(card);
    }
  }
  return deck;
}
