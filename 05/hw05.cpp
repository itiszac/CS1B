#include "hw05.h"
#include "hw05f.h"

int main()
{
  int choice = 0;
  int index = -1;
  int entries = 0;
  char again = 'y';
  Player player[LEN];

  popList(player, szFileName, entries);

  menu(choice, true);

  while (again == 'y')
  {
    switch (choice)
    {
    case 1:
    {
      std::cout << "\n\nDisplaying Players...\n\n";
      for (int i = 0; i < LEN; i++)
      {
        outputInfo(player, i);
      }
      break;
    }
    case 2:
    {
      std::string szTmp = "";
      std::cout << "\n\nEnter player you're searching for: ";
      std::getline(std::cin, szTmp);
      std::cout << "\nSearching for the player " << szTmp << std::endl;
      searchList(player, index, szTmp);
      break;
    }
    case 3:
      if (entries < 10)
      {
        intputInfo(player, entries);
        entries += 1;
        std::cout << "\n\nAdding player...\n\n";
      }
      else
      {
        std::cout << "\n\nSorry you already have 10 players in the database...\n\n";
      }
      break;
    case 4:
    {
      std::string szTmp = "";
      std::cout << "\n\nEnter player you're updating: ";
      std::getline(std::cin, szTmp);
      updateList(player, szTmp);
      std::cout << "\nUpdating player..\n\n";
      break;
    }
    }

    std::cout << "Would you like to continue? (y/n): ";
    std::cin >> again;
    if (tolower(again) != 'y')
    {
      break;
    }
    menu(choice, false);
  }

  saveList(player, szFileName);
  return 0;
}