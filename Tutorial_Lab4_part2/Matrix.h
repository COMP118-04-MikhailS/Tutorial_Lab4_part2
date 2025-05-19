/** \file Shapes.h
* \brief Library to draw various matrixes.
* \details
* \author Mikhail
* \version 0.1
* \date 05/2025
* \copyright University of Nicosia.
*/
#ifndef MATRIX_h
#define MATRIX_h

// Global constant
const int MAX_COL = 3;

//Function prototypes

double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow);
void printMatrix(const double mat[][MAX_COL], const int maxRow);

double maxOfCol(const double mat[][MAX_COL], const int column, const int maxRow);
double maxOfRow(const double mat[][MAX_COL], const int row, const int maxRow);
double avgOfMatrix(const double mat[][MAX_COL], const int maxRow);


bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow);
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow);
double sumOfDiagonal(const double mat[][MAX_COL], const int maxRow);

#endif
