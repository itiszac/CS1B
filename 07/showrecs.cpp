#include "hw07f.h"

void showRecs(List *lst)
{
  if (lst)
  {
    for (Node *pTmp = lst->pFirst; pTmp; pTmp = pTmp->pNext)
    {
      std::cout << "Player Name: " << pTmp->pUnit->szName << "\nPlayer Position: " << pTmp->pUnit->szPos << "\nPlayer Score: " << pTmp->pUnit->nScore << "\nPlayer Catches: " << pTmp->pUnit->nCatch << "\nPlayer Receiving Yards: " << pTmp->pUnit->nRecvYds << "\nPlayer Passing Yards: " << pTmp->pUnit->nPassYds << "\nPlayer Rushing Yards: " << pTmp->pUnit->nRushYds << std::endl
                << std::endl;
    }
  }
}