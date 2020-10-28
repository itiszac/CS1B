#include "hw07.h"
#include "hw07f.h"

int main()
{
  char choice = 'y';
  bool bOnce = true;
  List *lst = new List;
  lst->pFirst = nullptr;
  lst->pLast = nullptr;
  lst->nLen = 0;

  popList(lst, "hw07db.txt");

  while (choice == 'y')
  {
    menu(lst, bOnce);
    std::cout << "Would you like to continue? (y/n): ";
    std::cin >> choice;
    if (std::tolower(choice) != 'y')
    {
      saveExit(lst, "hw07db.txt");
      break;
    }
  }

  for (Node *node = lst->pFirst->pNext; node; node = node->pNext)
  {
    delete node->pPrev->pUnit;
    delete node->pPrev;
  }
  delete lst->pLast->pUnit;
  delete lst->pLast;
  delete lst;

  return 0;
}