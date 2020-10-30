#include "hw07f.h"

void saveExit(List *lst, std::string szFileName)
{
  if (lst)
  {
    std::ofstream fs(szFileName, std::fstream::out | std::fstream::trunc);
    if (fs.is_open())
    {
      for (Node *pNode = lst->pFirst; pNode; pNode = pNode->pNext)
      {
        if (pNode)
        {
          fs << pNode->pUnit->szName << ", " << pNode->pUnit->szPos << ", " << pNode->pUnit->nScore << ", " << pNode->pUnit->nCatch << ", " << pNode->pUnit->nPassYds << ", " << pNode->pUnit->nRecvYds << ", " << pNode->pUnit->nRushYds << "\n";
        }
      }
    }
    fs.close();
    for (Node *node = lst->pFirst->pNext; node; node = node->pNext)
    {
      delete node->pPrev->pUnit;
      delete node->pPrev;
    }
    delete lst->pLast->pUnit;
    delete lst->pLast;
    delete lst;
  }
  std::cout << "Exiting program, good bye!" << std::endl;
}