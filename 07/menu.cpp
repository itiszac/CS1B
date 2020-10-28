#include "hw07f.h"

void menu(List *lst, bool &bShowOnce)
{
  /*
   * Displays a menu that the user interacts with
   *
   * Args:
   *  bShowOnce (bool): used to display the initial welcome message once
   * Returns:
   *  None
   */
  if (bShowOnce)
  {
    std::cout
        << "------------------------------------------------------------------------------\n"
        << "|                                                                            |\n"
        << "|                       Welcome to the Football Database                     |\n"
        << "|                                                                            |\n"
        << "------------------------------------------------------------------------------";

    bShowOnce = false;
  }

  std::cout
      << "\n\n------------------------------------------------------------------------------\n"
      << "|                                Menu Options                                |\n"
      << "------------------------------------------------------------------------------\n"
      << "1.) Display all players\n"
      << "2.) Search a player\n"
      << "3.) Add a player\n"
      << "4.) Update a player\n"
      << "5.) Delete a player\n\n";

  while (true)
  {
    int choice;
    std::cout << "Choose an option: ";
    std::cin >> choice;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (!std::cin.fail())
    {
      if (choice == 1)
      {
        return showRecs(lst);
      }
      else if (choice == 2)
      {
        return showRec(lst);
      }
      else if (choice == 3)
      {
        return addRec(lst);
      }
      else if (choice == 4)
      {
        std::cout << "Need to code this.." << std::endl;
        return;
      }
      else if (choice == 5)
      {
        return delRec(lst);
      }
    }
  }
}