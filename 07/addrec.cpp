#include "hw07f.h"

void addRec(List *lst)
{
  if (lst)
  {
    Node *pTmp = new Node;
    Node *pLast = lst->pLast;

    pTmp->pList = lst;
    pTmp->pNext = nullptr;
    pTmp->pPrev = nullptr;
    PlayerUnit *pUnit = new PlayerUnit;
    pTmp->pUnit = pUnit;
    if (!lst->pFirst)
      lst->pFirst = pTmp;
    if (pLast)
      pLast->pNext = pTmp;
    pTmp->pPrev = pLast;
    pLast = pTmp;
    lst->pLast = pTmp;

    std::cout << "\nEnter Player Name: ";
    std::getline(std::cin, pTmp->pUnit->szName);
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
    std::cout << std::endl;

    ++lst->nLen;
  }
}