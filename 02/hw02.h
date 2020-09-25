/*************************************************************
 *  Zachary Meyer * CS1B TTH 07:30 - 09:50 PM * Assignment 1 *
 *  Cartesian plane * Due: Thursday, September 10, 2020      *
 *************************************************************/
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
/*************************************************************
 * Program: Equation of a Line
 * Desc: Takes a users input of two points, outputs
 * whether the line is vertical, horizontal, increasing,
 * or decreasing. Non-vertical lines it outputs the equation
 * in y = mx+b form.
 *************************************************************/

struct POINT {
  float x;
  float y;
};

POINT getPoint();
bool checkLine(float x1, float x2);
bool isIncreasingOrDecreasing(float m);
