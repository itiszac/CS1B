#include "hw05f.h"

void saveList(Player player[], std::string szFileName)
{
  /*
   * Writing array to text list
   *
   * Args:
   *  player[] (Player): The football player array
   *  szFileName (string): The file name and path
   * Returns:
   *  None
   */
  if (szFileName.length() == 0)
    return;
  std::fstream fs(szFileName, std::fstream::out | std::fstream::trunc);
  if (!fs.is_open())
    return;
  for (int i = 0; i < LEN; i++)
  {
    if (player[i].szName.length() > 0)
    {
      fs << player[i].szName << ", "
         << player[i].szPos << ", "
         << player[i].nScore << ", "
         << player[i].nCatches << ", "
         << player[i].nPassingYds << ", "
         << player[i].nRecvYds << ", "
         << player[i].nRushYds << "\n";
    }
  }
  fs.close();
}