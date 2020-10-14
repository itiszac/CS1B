#include "hw05f.h"

void updateList(Player player[], std::string szName)
{
  /*
   * Updates the player in the array by name
   *
   * Args:
   *  player[] (Player): The football player array
   *  szName (string): The player's name we will be updating
   * Returns:
   *  None
   */
  int nIndex = -1;
  searchList(player, nIndex, szName);
  if (nIndex > -1)
  {
    intputInfo(player, nIndex);
  }
}