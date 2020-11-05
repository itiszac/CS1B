#include "hw07f.h"

void delRec(List *lst)
{
  /*
  * Search the array for player by name and ask user if they
  * want to display results
  *
  * Args:
  *  lst (List): The pointer that holds the nodes of linkedlist
  * Returns:
  *  None
  */
  if (lst)
  {
    std::string szName = "";
    std::cout << "\nEnter Player to delete: ";
    std::getline(std::cin, szName);
    for (Node *pTmp = lst->pFirst; pTmp; pTmp = pTmp->pNext)
    {
      if (pTmp->pUnit->szName == szName)
      {
        if (pTmp->pPrev)
          pTmp->pPrev->pNext = pTmp->pNext;

        if (pTmp->pNext)
          pTmp->pNext->pPrev = pTmp->pPrev;

        if (pTmp == lst->pFirst)
          lst->pFirst = pTmp->pNext;

        if (pTmp == lst->pLast)
          lst->pLast = pTmp->pPrev;

        delete pTmp->pUnit;
        delete pTmp;
        --lst->nLen;

        return;
      }
    }
    std::cout << "\nInvalid search, player was not found..\n\n";
  }
}