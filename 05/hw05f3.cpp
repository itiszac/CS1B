#include "hw05f.h"

void intputInfo(Player player[], int index)
{
  /*
   * Add a player to the array by taking user input
   *
   * Args:
   *  player[] (Player): The football player array
   *  index (int): The index of array we will be adding/updating
   * Returns:
   *  None
   */
  std::cout << "Enter player name: ";
  std::getline(std::cin, player[index].szName);

  std::cout << "Enter player position: ";
  std::getline(std::cin, player[index].szPos);

  std::cout << "Enter player's score: ";
  std::cin >> player[index].nScore;

  std::cout << "Enter player's catches: ";
  std::cin >> player[index].nCatches;

  std::cout << "Enter player's passing yards: ";
  std::cin >> player[index].nPassingYds;

  std::cout << "Enter player's receiving yards: ";
  std::cin >> player[index].nRecvYds;

  std::cout << "Enter player's rushing yards: ";
  std::cin >> player[index].nRushYds;
}