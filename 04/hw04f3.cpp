#include "hw04f.h"

void getDep(char depNam[][LEN], char depRel[][LEN], int dsiz)
{
  /*
   * Gets the inputs related to dependencies from the user
   *
   * Args:
   *  depNam[][] (char): A 2D array holding the dependency names
   *  depRel[][] (char): A 2D array holding the dependency relationships
   *  dsiz (int): The total number dependencies a user has
   * Returns:
   *  None
   */

  for (int i = 0; i < dsiz; i++)
  {
    std::cout << "Dependency Name: ";
    std::cin.getline(depNam[i], LEN);

    std::cout << "What is your relationship to " << depNam[i] << "? ";
    std::cin.getline(depRel[i], LEN);
  }
}
