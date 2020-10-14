#include "hw05f.h"

void popList(Player player[], std::string szFileName, int &entries)
{
  /*
   * Populates the array by reading from txt file
   *
   * Args:
   *  player[] (Player): The football player array
   *  szFileName (string): The file name and path
   *  entries (int&): The number of entries added to array
   * Returns:
   *  None
   */
  std::string szLine = "";
  char szTmp[2048];
  std::string temp[7];
  int i = 0;
  if (szFileName.length() == 0)
    return;
  std::fstream fs(szFileName);
  if (!fs.is_open())
    return;
  while (!fs.eof() && i < 10)
  {
    // get current line
    fs.getline(szTmp, 2048);
    szLine = szTmp;
    // remove comments from file
    if (szLine.find_first_of("//") != std::string::npos)
    {
      szLine = szLine.erase(szLine.find_first_of("//"));
    }
    // checking to make sure line is not empty
    if (szLine.length() == 0)
      continue;
    std::stringstream ss(szLine);
    for (int i = 0; i < 7; i++)
    {
      std::getline(ss, temp[i], ',') >> std::ws;
    }
    player[i].szName = temp[0];
    player[i].szPos = temp[1];
    player[i].nScore = std::stoi(temp[2]);
    player[i].nCatches = std::stoi(temp[3]);
    player[i].nPassingYds = std::stoi(temp[4]);
    player[i].nRecvYds = std::stoi(temp[5]);
    player[i].nRushYds = std::stoi(temp[6]);
    i++;
  }
  entries = i;
  fs.close();
}