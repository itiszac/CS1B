#include "hw09.h"
#include "LargeIntegers.h"

int main()
{
  std::string szInt = "";
  std::string szInt2 = "";
  LargeIntegers *sli = new LargeIntegers();
  LargeIntegers *sli2 = new LargeIntegers();
  LargeIntegers *dli = new LargeIntegers();
  LargeIntegers *dli2 = new LargeIntegers();
  LargeIntegers *pli = new LargeIntegers();
  LargeIntegers *pli2 = new LargeIntegers();
  // LargeIntegers *qli = new LargeIntegers();
  // LargeIntegers *qli2 = new LargeIntegers();
  LargeIntegers *gli = new LargeIntegers();
  LargeIntegers *gli2 = new LargeIntegers();

  std::cout << "Enter Large Integer: ";
  std::cin >> szInt;

  std::cout << "Enter another Large Integer: ";
  std::cin >> szInt2;

  for (size_t i = 0; i < szInt.length(); i++)
  {
    sli->AddNodeBack(szInt[i] - '0');
    dli->AddNodeBack(szInt[i] - '0');
    pli->AddNodeBack(szInt[i] - '0');
    // qli->AddNodeBack(szInt[i] - '0');
    gli->AddNodeBack(szInt[i] - '0');
  }

  for (size_t i = 0; i < szInt2.length(); i++)
  {
    sli2->AddNodeBack(szInt2[i] - '0');
    dli2->AddNodeBack(szInt2[i] - '0');
    pli2->AddNodeBack(szInt2[i] - '0');
    // qli2->AddNodeBack(szInt2[i] - '0');
    gli2->AddNodeBack(szInt2[i] - '0');
  }

  LargeIntegers *pSum = &(*sli + *sli2);
  std::cout << "Sum: ";
  pSum->Display();
  std::cout << std::endl;

  LargeIntegers *pDiff = &(*dli - *dli2);
  std::cout << "Difference: ";
  pDiff->Display();
  std::cout << std::endl;

  LargeIntegers *pProduct = &(*pli * *pli2);
  std::cout << "Product: ";
  pProduct->Display();
  std::cout << std::endl;

  // LargeIntegers *pQuotient = &(*qli / *qli2);
  // std::cout << "Quotient: ";
  // pQuotient->Display();
  // std::cout << std::end;

  bool isGreater = *gli > *gli2;
  if (isGreater)
    std::cout << "Large Int 1 is Greater" << std::endl;
  else
    std::cout << "Large Int 2 is Greater" << std::endl;

  delete pSum;
  delete pDiff;
  delete pProduct;
  delete sli;
  delete sli2;
  delete dli;
  delete dli2;
  delete pli;
  delete pli2;
  delete gli;
  delete gli2;

  return 0;
}