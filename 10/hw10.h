#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <vector>

struct Card
{
  std::string szFace;
  std::string szSuit;
};

std::vector<Card> createDeck();
void menu();
void guessFace(Card card);
void guessSuit(std::vector<Card> deck);
void guessBoth(std::vector<Card> deck);