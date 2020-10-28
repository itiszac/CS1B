#include "hw07f.h"

void showRec(List *lst)
{
  if (lst)
  {
    std::string szName = "";
    std::cout << "Enter player to display: ";
    std::getline(std::cin, szName);

    for (Node *node = lst->pFirst; node; node = node->pNext)
    {
      if (node->pUnit->szName != szName)
        continue;
      std::cout << "Player Name: " << node->pUnit->szName << "\nPlayer Position: " << node->pUnit->szPos << "\nPlayer Score: " << node->pUnit->nScore << "\nPlayer Catches: " << node->pUnit->nCatch << "\nPlayer Receiving Yards: " << node->pUnit->nRecvYds << "\nPlayer Passing Yards: " << node->pUnit->nPassYds << "\nPlayer Rushing Yards: " << node->pUnit->nRushYds << std::endl
                << std::endl;
    }
  }
}