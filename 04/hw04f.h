#pragma once

#include <iostream>

const int LEN = 40;

double getInc(double incItem[], char incDesc[][LEN], int isiz);
double getExp(double expItem[], char expDesc[][LEN], int esiz);
void getDep(char depNam[][LEN], char depRel[][LEN], int dsiz);

void prInc(double incItem[], char incDesc[][LEN], int isiz);
void prExp(double expItem[], char expDesc[][LEN], int esiz);
void prDep(char depNam[][LEN], char depRel[][LEN], int dsiz);
void prSumm(double, double, double);

void clearBuffer();
void prHeading();
