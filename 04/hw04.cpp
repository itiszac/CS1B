#include "hw04.h"
#include "hw04f.h"

int main()
{
  char taxPayer[LEN] = {NULL};    // name of tax payer
  char year[5] = {NULL};          // year in question
  double incItem[10] = {0};       // gross income from each source (10 max)
  char incDesc[10][LEN] = {NULL}; // gross income item description (10 max)
  int isiz = 0;                   // to hold number of income items entered
  double incTot = 0.0;            // total gross income for the year
  double expItem[10] = {0};       // expense items (mortgage, interest, medical)
  char expDesc[10][LEN] = {NULL}; // expense item description
  int esiz = 0;                   // to hold number of expense items entered
  double expTot = 0.0;            // total expense for the year
  char depNam[10][LEN] = {NULL};  // name of each depedent
  char depRel[10][LEN] = {NULL};  // relationship of each dependent
  int dsiz = 0;                   // number of dependents entered if any

  prHeading(); // Prints Heading Message

  std::cout << "Tax payer's fullname: ";
  std::cin.getline(taxPayer, LEN);

  std::cout << "Tax year: ";
  std::cin.getline(year, 5);

  std::cout << "\nHow many sources of income are you entering: ";
  std::cin >> isiz;
  clearBuffer();

  incTot = getInc(incItem, incDesc, isiz);

  std::cout << "\nHow many expenses do you have: ";
  std::cin >> esiz;
  clearBuffer();

  expTot = getExp(expItem, expDesc, esiz);

  std::cout << "\nHow many dependencies do you have: ";
  std::cin >> dsiz;
  clearBuffer();

  getDep(depNam, depRel, dsiz);

  std::cout << "\n\n"
            << year << " annual report for " << taxPayer;

  prInc(incItem, incDesc, isiz);
  prExp(expItem, expDesc, esiz);
  prDep(depNam, depRel, dsiz);
  prSumm(incTot, expTot, dsiz);

  return 0;
}
