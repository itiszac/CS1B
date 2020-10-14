#pragma once

#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <sstream>

const int LEN = 10;
const std::string szFileName = "hw05db.txt";

struct Player
{
  std::string szName;
  std::string szPos;
  int nScore;
  int nCatches;
  int nPassingYds;
  int nRecvYds;
  int nRushYds;
};

void menu(int &choice, bool bPrintHeading);
void popList(Player player[], std::string szFileName, int &entries);
void intputInfo(Player player[], int index);
void outputInfo(Player pPlayer[], int index);
void searchList(Player player[], int &iterator, std::string szName);
void updateList(Player player[], std::string szName);
void saveList(Player player[], std::string szFileName);