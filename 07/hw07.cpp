#include "hw07.h"
#include "hw07f.h"

int main()
{
  List *lst = new List;
  lst->pFirst = nullptr;
  lst->pLast = nullptr;
  lst->nLen = 0;

  popList(lst, "hw07db.txt");

  addRec(lst);

  delRec(lst);

  showRec(lst);

  showRecs(lst);

  saveExit(lst, "hw07db.txt");

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