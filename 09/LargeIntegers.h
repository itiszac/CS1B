#pragma once

#include <iostream>
#include <string>

typedef struct Node_t
{
  Node_t *pPrev;
  Node_t *pNext;
  int nData;
} Node;

class LargeIntegers
{
private:
  Node *pFirst;
  Node *pLast;
  unsigned int nNodeCount;

public:
  LargeIntegers();
  ~LargeIntegers();

  // Getters
  Node *GetFirstNode();
  Node *GetLastNode();
  Node *GetNextNode(Node *pNode);
  Node *GetPrevNode(Node *pNode);
  unsigned int GetNodeCount();

  // Add / Remove Nodes
  void AddNodeFront(int nData);
  void AddNodeBack(int nData);
  void RemoveNode(Node *pNode);
  void DeleteList(Node *pNode);

  // Maths
  // LargeIntegers *Subtract(LargeIntegers &obj, LargeIntegers &obj2);
  // LargeIntegers *Multiply(LargeIntegers &obj, LargeIntegers &obj2);

  bool Compare(LargeIntegers &obj);
  LargeIntegers &Add(LargeIntegers &obj);
  LargeIntegers &Subtract(LargeIntegers &obj);
  LargeIntegers &Multiply(LargeIntegers &obj);

  bool operator>(LargeIntegers &obj);
  friend LargeIntegers &operator+(LargeIntegers &obj, LargeIntegers &obj2);
  friend LargeIntegers &operator-(LargeIntegers &obj, LargeIntegers &obj2);
  friend LargeIntegers &operator*(LargeIntegers &obj, LargeIntegers &obj2);

  void Display();
};
