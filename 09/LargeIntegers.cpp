#include "LargeIntegers.h"

LargeIntegers::LargeIntegers()
    : pFirst(nullptr), pLast(nullptr), nNodeCount(0)
{
}

LargeIntegers::~LargeIntegers()
{
  DeleteList(GetFirstNode());
}

Node *LargeIntegers::GetFirstNode()
{
  /*
  * Gets the first node in list.
  *
  * Args:
  *  None
  * Returns:
  *  pFirst (LargeIntegers): represents the first item in the list
  */
  return pFirst;
}

Node *LargeIntegers::GetLastNode()
{
  /*
  * Gets the last node in list.
  *
  * Args:
  *  None
  * Returns:
  *  pLast (LargeIntegers): represents the last item in the list
  */
  return pLast;
}

Node *LargeIntegers::GetNextNode(Node *pNode)
{
  /*
  * Gets the next node in list.
  *
  * Args:
  *  pNode (Node): The current pointer node
  * Returns:
  *  pNode->pNext (Node): represents the next item in the list
  */
  if (pNode)
    return pNode->pNext;

  return nullptr;
}

Node *LargeIntegers::GetPrevNode(Node *pNode)
{
  /*
  * Gets the previous node in list.
  *
  * Args:
  *  pNode (Node): The current pointer node
  * Returns:
  *  pNode->pPrev (Node): represents the previous item in the list
  */
  if (pNode)
    return pNode->pPrev;

  return nullptr;
}

unsigned int LargeIntegers::GetNodeCount()
{
  /*
  * Gets the number of nodes in list.
  *
  * Args:
  *  None
  * Returns:
  *  nNodeCount (unsigned int): represents the number of nodes in the list
  */
  return nNodeCount;
}

void LargeIntegers::AddNodeFront(int nData)
{
  /*
  * Adds a node to the front of the list.
  *
  * Args:
  *  nData (int): The data that is being added to the new node
  * Returns:
  *  None
  */
  Node *pNode = new Node();

  if (!pNode)
    return;

  pNode->nData = nData;
  pNode->pNext = pNode->pPrev = nullptr;

  if (!pFirst)
  {
    pLast = pNode;
  }
  else
  {
    pFirst->pPrev = pNode;
    pNode->pNext = pFirst;
  }

  pFirst = pNode;
  ++nNodeCount;

  return;
}

void LargeIntegers::AddNodeBack(int nData)
{
  /*
  * Adds a node to the back of the list.
  *
  * Args:
  *  nData (int): The data that is being added to the new node
  * Returns:
  *  None
  */
  Node *pNode = new Node();

  if (!pNode)
    return;

  pNode->nData = nData;
  pNode->pNext = pNode->pPrev = nullptr;

  if (!pLast)
  {
    pFirst = pNode;
  }
  else
  {
    pLast->pNext = pNode;
    pNode->pPrev = pLast;
  }

  pLast = pNode;
  ++nNodeCount;

  return;
}

void LargeIntegers::RemoveNode(Node *pNode)
{
  /*
  * Removes the node passed in and decrements the node count.
  *
  * Args:
  *  pNode (int): The current node to be deleted
  * Returns:
  *  None
  */
  if (!pFirst || !pLast || !pNode)
    return;

  if (pNode->pPrev)
    pNode->pPrev->pNext = pNode->pNext;

  if (pNode->pNext)
    pNode->pNext->pPrev = pNode->pPrev;

  if (pNode == pFirst)
    pFirst = pNode->pNext;

  if (pNode == pLast)
    pLast = pNode->pPrev;

  delete pNode;
  --nNodeCount;
}

void LargeIntegers::DeleteList(Node *pNode)
{
  /*
  * Recursively deletes each node in linked list and decrements the node count
  * Args:
  *   pNode (Node): Pointer to the first node
  * Returns:
  *   None
  */
  if (!pNode)
    return;
  DeleteList(GetNextNode(pNode));
  --nNodeCount;
  delete pNode;
}

LargeIntegers &LargeIntegers::Add(LargeIntegers &obj)
{
  /*
  * finds the sum of 2 lists and returns.
  *
  * Args:
  *  obj (LargeIntegers): The 2nd list object
  * Returns:
  *  pSum (LargeIntegers): The difference list pointer
  */
  int nCarry = 0;
  int nSum = 0;
  LargeIntegers *pSum = new LargeIntegers();
  Node *pTemp = this->GetLastNode();
  Node *pTemp2 = obj.GetLastNode();
  while (pTemp || pTemp2)
  {
    if (pTemp && pTemp2)
    {
      nSum = (pTemp->nData + pTemp2->nData + nCarry) % 10;
      nCarry = (pTemp->nData + pTemp2->nData + nCarry) / 10;
      pTemp = GetPrevNode(pTemp);
      pTemp2 = GetPrevNode(pTemp2);
    }
    else if (!pTemp && pTemp2)
    {
      nSum = (pTemp2->nData + nCarry) % 10;
      nCarry = (pTemp2->nData + nCarry) / 10;
      pTemp2 = GetPrevNode(pTemp2);
    }
    else if (pTemp && !pTemp2)
    {
      nSum = (pTemp->nData + nCarry) % 10;
      nCarry = (pTemp->nData + nCarry) / 10;
      pTemp = GetPrevNode(pTemp);
    }

    pSum->AddNodeFront(nSum);
  }

  if (nCarry > 0)
    pSum->AddNodeFront(nCarry);

  return *pSum;
}

LargeIntegers &LargeIntegers::Subtract(LargeIntegers &obj)
{
  /*
  * finds the difference of 2 lists and returns.
  *
  * Args:
  *  obj (LargeIntegers): The 2nd list object
  * Returns:
  *  pDiff (LargeIntegers): The difference list pointer
  */
  int nCarry = 0;
  int nSum = 0;
  LargeIntegers *pDiff = new LargeIntegers();
  Node *pTemp = this->GetLastNode();
  Node *pTemp2 = obj.GetLastNode();
  while (pTemp || pTemp2)
  {
    if (pTemp && pTemp2)
    {
      if (pTemp->nData + nCarry >= pTemp2->nData)
      {
        nSum = (pTemp->nData + nCarry - pTemp2->nData);
        nCarry = 0;
      }
      else
      {
        nSum = (pTemp->nData + nCarry + 10 - pTemp2->nData);
        nCarry = -1;
      }

      pTemp = GetPrevNode(pTemp);
      pTemp2 = GetPrevNode(pTemp2);
    }
    else if (pTemp && !pTemp2)
    {
      if (pTemp->nData >= 1)
      {
        nSum = (pTemp->nData + nCarry);
        nCarry = 0;
      }
      else
      {
        if (nCarry != 0)
        {
          nSum = (pTemp->nData + 10 + nCarry);
          nCarry = -1;
        }
        else
          nSum = pTemp->nData;
      }

      pTemp = GetPrevNode(pTemp);
    }

    pDiff->AddNodeFront(nSum);
  }

  return *pDiff;
}

LargeIntegers &LargeIntegers::Multiply(LargeIntegers &obj)
{
  /*
  * finds the product of 2 lists and returns.
  *
  * Args:
  *  obj (LargeIntegers): The 2nd list object
  * Returns:
  *  pRet (LargeIntegers): The product list pointer
  */
  int nRow = 0;
  int nCarry = 0;
  int nSum = 0;
  LargeIntegers *pRet = new LargeIntegers();
  Node *pTemp = obj.GetLastNode();

  while (pTemp)
  {
    LargeIntegers *pProduct = new LargeIntegers();
    LargeIntegers *pRandom = pRet;
    Node *pCur = this->GetLastNode();

    while (pCur)
    {
      nSum = ((pCur->nData) * (pTemp->nData) + nCarry) % 10;
      nCarry = ((pCur->nData) * (pTemp->nData) + nCarry) / 10;
      pProduct->AddNodeFront(nSum);
      pCur = GetPrevNode(pCur);
    }

    if (nCarry > 0)
      pProduct->AddNodeFront(nCarry);

    for (int i = 0; i < nRow; i++)
      pProduct->AddNodeBack(0);

    pRet = &(*pRandom + *pProduct);
    ++nRow;
    pTemp = GetPrevNode(pTemp);
    delete pRandom;
    delete pProduct;
  }

  return *pRet;
}

bool LargeIntegers::Compare(LargeIntegers &obj)
{
  /*
  * Compares 2 linked list
  * Args:
  *   obj (LargeIntegers): The 2nd list to compare
  * Returns:
  *   bool: returns true if "this" is greater
  */
  if (this->nNodeCount != obj.nNodeCount)
    return ((this->nNodeCount > obj.nNodeCount) ? true : false);

  Node *pTemp = this->GetFirstNode();
  Node *pTemp2 = obj.GetFirstNode();

  while (pTemp && pTemp2)
  {
    if (pTemp->nData > pTemp2->nData)
      return true;
    else if (pTemp->nData < pTemp2->nData)
      return false;
    else
    {
      pTemp = GetNextNode(pTemp);
      pTemp2 = GetNextNode(pTemp2);
    }
  }
  return true;
}

bool LargeIntegers::operator>(LargeIntegers &obj)
{
  return this->Compare(obj);
}

LargeIntegers &operator+(LargeIntegers &obj, LargeIntegers &obj2)
{
  return obj.Add(obj2);
}

LargeIntegers &operator-(LargeIntegers &obj, LargeIntegers &obj2)
{
  return obj.Subtract(obj2);
}

LargeIntegers &operator*(LargeIntegers &obj, LargeIntegers &obj2)
{
  return obj.Multiply(obj2);
}

void LargeIntegers::Display()
{
  /*
  * Displays the nData of each Node within the list.
  *
  * Args:
  *   None
  * Returns:
  *  None
  */
  int i = 0;

  for (Node *pNode = GetFirstNode(); pNode; pNode = GetNextNode(pNode), i++)
  {
    if ((nNodeCount % 3 != 0 && i == nNodeCount % 3) || ((nNodeCount - i) % 3 == 0 && i != 0))
      std::cout << ",";

    std::cout << pNode->nData;
  }
}