#include "inctax.h"

double getInc(double incItem[], char incDesc[][40], int isiz)
{
  /*
   * Gets the inputs related to income from the user
   *
   * Args:
   *  incItem[] (double): An array holding the income amount
   *  incDesc[][] (char): A 2D array holding the income description
   *  isiz (int): The amount of income sources a user has
   * Returns:
   *  incTot (double): The sum of a users income
   */

  double incTot = 0.0;

  for (int i = 0; i < isiz; i++)
  {
    std::cout << "Income description: ";
    std::cin.getline(incDesc[i], 40);

    std::cout << "Income amount: ";
    std::cin >> incItem[i];

    std::cin.clear();
    std::cin.ignore(100000,'\n');

    incTot += incItem[i];
  }

  return incTot;
}

void prInc(double incItem[], char incDesc[][40], int isiz)
{
  /*
   * Prints out an income summary
   *
   * Args:
   *  incItem[] (double): An array holding the income amount
   *  incDesc[][] (char): A 2D array holding the income description
   *  isiz (int): The amount of income sources a user has
   * Returns:
   *  None
   */

  std::cout << "\n\n-- Yearly Income --\n";
  for (int i = 0; i < isiz; i++)
  {
    std::cout << "Income [" << i + 1 << "]: " << incDesc[i] << ", $" << incItem[i] << std::endl;
  }
}

double getExp(double expItem[], char expDesc[][40], int esiz)
{
  /*
   * Gets the inputs related to users expenses
   *
   * Args:
   *  expItem[] (double): An array holding the expense amount
   *  expDesc[][] (char): A 2D array holding the expense description
   *  esiz (int): The total number expenses a user has
   * Returns:
   *  expTot (double): The sum of a users expenses
   */

  double expTot = 0.0;

  for (int i = 0; i < esiz; i++)
  {
    std::cout << "Expense description: ";
    std::cin.getline(expDesc[i], 40);

    std::cout << "Expense cost: ";
    std::cin >> expItem[i];

    std::cin.clear();
    std::cin.ignore(100000,'\n');

    expTot += expItem[i];
  }

  return expTot;
}

void prExp(double expItem[], char expDesc[][40], int esiz)
{
  /*
   * Prints out a summary of a users yearly expenses
   *
   * Args:
   *  expItem[] (double): An array holding the expense amount
   *  expDesc[][] (char): A 2D array holding the expense description
   *  esiz (int): The total number expenses a user has
   * Returns:
   *  None
   */

  std::cout << "\n\n-- Yearly Expenses --\n";
  for (int i = 0; i < esiz; i++)
  {
    std::cout << "Expense [" << i + 1 << "]: " << expDesc[i] << ", $" << expItem[i] << std::endl;
  }
}
  
void getDep(char depNam[][40], char depRel[][40], int dsiz)
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
    std::cin.getline(depNam[i], 40);
 
    std::cout << "What is your relationship to " << depNam[i] << "? ";
    std::cin.getline(depRel[i], 40);
  }
}
  
void prDep(char depNam[][40], char depRel[][40], int dsiz)
{
  /*
   * Prints out a summary of the users dependencies
   *
   * Args:
   *  depNam[][] (char): A 2D array holding the dependency names
   *  depRel[][] (char): A 2D array holding the dependency relationships
   *  dsiz (int): The total number dependencies a user has
   * Returns:
   *  None
   */

  std::cout << "\n\n-- Dependencies --\n";

  if (dsiz <= 0)
  {
    std::cout << "None\n";
    return;
  }

  for (int i = 0; i < dsiz; i++)
  {
    std::cout << "Dependency [" << i + 1 << "]: " << depNam[i] << ", " << depRel[i] << std::endl;
  }
}
  
void prSumm(double incTot, double expTot, double depTot)
{
  /*
   * Prints out a yearly tax summary based on the users income, expenses, and dependencies
   *
   * Args:
   *  incTot (double): The income yearly total
   *  expTot (double): The expense yearly total
   *  depTot (double): The total number of dependencies
   * Returns:
   *  None
   */

  double tax = 0.0;
  
  tax = ((incTot - expTot - (depTot * 3000.00)) * 0.18);
  
  std::cout << "\n\n-- Yearly Summary --\n"
    << "Total income: $" << incTot
    << "\nTotal expenses: $" << expTot
    << "\nDependencies: " << depTot
    << "\nTotal taxes due: $" << tax << std::endl;
}

