#include "hw07f.h"

void popList(List *lst, std::string szFileName)
{
  /*
   * Populates the LinkedList by reading from txt file
   *
   * Args:
   *  lst (List): A pointer to List structure
   *  szFileName (string): The file name and path
   * Returns:
   *  None
   */
  std::string szLine = "";
  char szTmp[2048];
  std::string tmp[7];
  Node *pLast = nullptr;
  if (szFileName.length() > 0)
  {
    std::ifstream fs(szFileName, std::ifstream::in);
    if (fs.is_open())
    {
      while (!fs.eof())
      {
        // get current line
        fs.getline(szTmp, 2048);
        szLine = szTmp;
        // remove any comments from file
        if (szLine.find_first_of("//") != std::string::npos)
        {
          szLine = szLine.erase(szLine.find_first_of("//"));
        }
        // check to make sure line is not empty
        if (szLine.length() > 0)
        {
          std::stringstream ss(szLine);
          for (int i = 0; i < 7; i++)
          {
            // delimit by , and assign each value to temp[i]
            std::getline(ss, tmp[i], ',') >> std::ws;
          }
          // initialize node
          Node *pTmp = new Node;
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
          pTmp->pUnit->szName = tmp[0];
          pTmp->pUnit->szPos = tmp[1];
          pTmp->pUnit->nScore = std::stoi(tmp[2]);
          pTmp->pUnit->nCatch = std::stoi(tmp[3]);
          pTmp->pUnit->nPassYds = std::stoi(tmp[4]);
          pTmp->pUnit->nRecvYds = std::stoi(tmp[5]);
          pTmp->pUnit->nRushYds = std::stoi(tmp[6]);
          ++lst->nLen;
        }
      }
    }
    fs.close();
  }
}