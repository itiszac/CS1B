#include "hw07f.h"

void updateRec(List *lst)
{
  /*
  * Search the array for player by name and ask user if they
  * want to update record
  *
  * Args:
  *  lst (List): The pointer that holds the nodes of linkedlist
  * Returns:
  *  None
  */
  if (lst)
  {
    std::string szName = "";
    std::cout << "\nEnter Player to update: ";
    std::getline(std::cin, szName);
    for (Node *pTmp = lst->pFirst; pTmp; pTmp = pTmp->pNext)
    {
      if (pTmp->pUnit->szName == szName)
      {
        std::cout << "Player was found..\n\n";

        std::cout << "Enter Player Position: ";
        std::getline(std::cin, pTmp->pUnit->szPos);
        std::cout << "Enter Player's Score: ";
        std::cin >> pTmp->pUnit->nScore;
        std::cout << "Enter Player's Catches: ";
        std::cin >> pTmp->pUnit->nCatch;
        std::cout << "Enter Player's Passing Yards: ";
        std::cin >> pTmp->pUnit->nPassYds;
        std::cout << "Enter Player's Receiving Yards: ";
        std::cin >> pTmp->pUnit->nRecvYds;
        std::cout << "Enter Player's Rushing Yards: ";
        std::cin >> pTmp->pUnit->nRushYds;
      }
    }
  }
}