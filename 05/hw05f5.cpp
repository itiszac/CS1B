#include "hw05f.h"

void searchList(Player player[], int &index, std::string szName)
{
  /*
   * Search the array for player by name and ask user if they
   * want to display results
   *
   * Args:
   *  player[] (Player): The football player array
   *  index (int&): The index of array we will be searching
   *  szName (string): The player's name we will be searching
   * Returns:
   *  None
   */
  char choice = 'n';
  for (int i = 0; i < LEN; i++)
  {
    if (player[i].szName == szName)
    {
      index = i;
      std::cout << "Found the player " << szName << " would you like to display stats? (y/n): ";
      if (std::cin >> choice)
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (tolower(choice) == 'y')
        {
          std::cout << std::endl;
          outputInfo(player, index);
        }
      }
      return;
    }
  }
  std::cout << "Invalid search, player was not found..\n\n";
}