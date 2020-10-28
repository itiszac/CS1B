#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <locale>
#include <limits>

typedef struct List List;
typedef struct Node Node;
typedef struct PlayerUnit PlayerUnit;

struct List
{
  int nLen;
  Node *pFirst;
  Node *pLast;
};

struct Node
{
  List *pList;
  Node *pNext;
  Node *pPrev;
  PlayerUnit *pUnit;
};

struct PlayerUnit
{
  std::string szName;
  std::string szPos;
  int nScore;
  int nCatch;
  int nPassYds;
  int nRecvYds;
  int nRushYds;
};

void popList(List *lst, std::string szFileName);
void addRec(List *lst);
void delRec(List *lst);
void showRec(List *lst);
void showRecs(List *lst);
void saveExit(List *lst, std::string szFileName);