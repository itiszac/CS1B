#include "hw07f.h"

void showRec(List *lst)
{
  /*
   * Search the linkedlist for player by name and display stats
   *
   * Args:
   *  lst (List): The player list pointer
   * Returns:
   *  None
   */
  if (lst)
  {
    std::string szName = "";
    std::cout << "\nEnter player to search for: ";
    std::getline(std::cin, szName);
    for (Node *node = lst->pFirst; node; node = node->pNext)
    {
      if (node->pUnit->szName == szName)
      {
        std::cout << "\nPlayer Name: " << node->pUnit->szName << "\nPlayer Position: " << node->pUnit->szPos << "\nPlayer Score: " << node->pUnit->nScore << "\nPlayer Catches: " << node->pUnit->nCatch << "\nPlayer Receiving Yards: " << node->pUnit->nRecvYds << "\nPlayer Passing Yards: " << node->pUnit->nPassYds << "\nPlayer Rushing Yards: " << node->pUnit->nRushYds << std::endl
                  << std::endl;
        return;
      }
    }
    std::cout << "\nInvalid search, player was not found..\n\n";
  }
}