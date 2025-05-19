/** \file Shapes.cpp
* \brief The file that contains all the functions code.
* \details
* \author Mikhail
* \version 0.1
* \date 05/2025
* \copyright University of Nicosia.
*/

#include <iostream>
#include "Matrix.h"
#include <cassert>

using namespace std;


/**
* Function <code>sumOfRow </code> calculates and returns the sum of the specific row.
* <BR>
* @param mat Is the 2D array with all the numbers 
* @param row Is the row number of which we need to find the sum
* @param maxRow Is the maximum amount of elelments in 1 row
* @return sum Is the sum of all elements in row specified by user	
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
	double sum = 0;

	for (int i = 0; i < maxRow; i++) {
		sum += mat[row][i];
	}

	return sum;
}

double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
		
}

void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {

}

void printMatrix(const double mat[][MAX_COL], const int maxRow) {

}