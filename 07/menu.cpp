#include "hw07f.h"

void menu(List *lst, bool &bDisplay)
{
  /*
   * Displays a menu that the user interacts with
   *
   * Args:
   *  lst (List): The pointer that holds the nodes of linkedlist
   * Returns:
   *  None
   */
  if (bDisplay)
  {
    std::cout
        << "------------------------------------------------------------------------------\n"
        << "|                                                                            |\n"
        << "|                       Welcome to the Football Database                     |\n"
        << "|                                                                            |\n"
        << "------------------------------------------------------------------------------\n\n";
    bDisplay = false;
  }
  std::cout
      << "------------------------------------------------------------------------------\n"
      << "|                                Menu Options                                |\n"
      << "------------------------------------------------------------------------------\n"
      << "1.) Display all players\n"
      << "2.) Search a player\n"
      << "3.) Add a player\n"
      << "4.) Update a player\n"
      << "5.) Delete a player\n\n";
  while (true)
  {
    int option = -1;
    std::cout << "Enter an option: ";
    std::cin >> option;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (!std::cin.fail())
    {
      if (option == 1)
      {
        return showRecs(lst);
      }
      else if (option == 2)
      {
        return showRec(lst);
      }
      else if (option == 3)
      {
        return addRec(lst);
      }
      else if (option == 4)
      {
        return updateRec(lst);
      }
      else if (option == 5)
      {
        return delRec(lst);
      }
    }
  }
}