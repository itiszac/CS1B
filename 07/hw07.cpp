#include "hw07.h"
#include "hw07f.h"

int main()
{
  bool bDisplay = true;
  char choice = 'y';
  List *lst = new List;
  lst->pFirst = nullptr;
  lst->pLast = nullptr;
  lst->nLen = 0;
  popList(lst, FILENAME);
  while (tolower(choice) == 'y')
  {
    menu(lst, bDisplay);
    std::cout << "Would you like to continue? (y/n): ";
    std::cin >> choice;
  }
  saveExit(lst, FILENAME);
  return 0;
}