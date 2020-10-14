#include "hw05f.h"

void outputInfo(Player player[], int index)
{
  /*
   * Display the player data from array
   *
   * Args:
   *  player[] (Player): The football player array
   *  index (int): The index of array we will be displaying
   * Returns:
   *  None
   */
  if (player[index].szName.length() > 0)
  {
    std::cout << "Player name: " << player[index].szName << std::endl;
    std::cout << "Player position: " << player[index].szPos << std::endl;
    std::cout << "Player's score: " << player[index].nScore << std::endl;
    std::cout << "Player's catches: " << player[index].nCatches << std::endl;
    std::cout << "Player's passing yards: " << player[index].nPassingYds << std::endl;
    std::cout << "Player's receiving yards: " << player[index].nRecvYds << std::endl;
    std::cout << "Player's rushing yards: " << player[index].nRushYds << "\n\n";
  }
}