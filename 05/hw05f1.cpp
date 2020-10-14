#include "hw05f.h"

void menu(int &choice, bool bPrintHeading)
{
  /*
   * Displays a menu that the user interacts with
   *
   * Args:
   *  choice (int&): input by user to select menu option
   *  bPrintHeading (bool): used to display the initial welcome message once
   * Returns:
   *  None
   */
  if (bPrintHeading)
  {
    std::cout
        << "------------------------------------------------------------------------------\n"
        << "|                                                                            |\n"
        << "|                       Welcome to the Football Database                     |\n"
        << "|                                                                            |\n"
        << "------------------------------------------------------------------------------";
  }

  while (true)
  {
    std::cout
        << "\n\n------------------------------------------------------------------------------\n"
        << "|                                Menu Options                                |\n"
        << "------------------------------------------------------------------------------\n"
        << "1.) Display Players\n"
        << "2.) Search a Player\n"
        << "3.) Add a Player\n"
        << "4.) Update a Player\n\n"
        << "Choose an option: ";

    if (std::cin >> choice)
    {
      if (choice <= 4 && choice >= 1)
      {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        break;
      }
    }
    std::cout << "\n\nPlease enter a valid integer.\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
}