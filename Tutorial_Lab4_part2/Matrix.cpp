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
* Function <code>sumOfRow</code> calculates and returns the sum of the specific row.
* <BR>
* @param mat Is the 2D array with all the numbers 
* @param row Is the row number of which we need to find the sum
* @param maxRow Is the maximum amount of rows
* @return rowSum Is the sum of all elements in row specified by user	
*/
double sumOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
	assert(row >= 0 && MAX_COL > 0);
	double rowSum = 0;

	for (int i = 0; i < MAX_COL; i++) {
		rowSum += mat[row][i];
	}

	return rowSum;
}

/**
* Function <code>sumOfCol</code> calculates and returns the sum of the specific column.
* <BR>
* @param mat Is the 2D array with all the numbers
* @param column Is the column number of which we need to find the sum
* @param maxRow Is the maximum amount of rows
* @return colSum Is the sum of all elements in column specified by user
*/
double sumOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
	assert(column >= 0 && maxRow > 0);

	double colSum = 0; 
	
	for (int i = 0; i < maxRow; i++) {
		colSum += mat[i][column];
	}

	return colSum;
}

/**
* Function <code>fillWithRandomNum</code> takes an 2D array and fills it with random numbers from 1-10.
* <BR>
* @param mat Is the 2D array with all the numbers
* @param maxRow Is the maximum amount of rows
*/
void fillWithRandomNum(double mat[][MAX_COL], const int maxRow) {
	assert(MAX_COL > 1 && maxRow > 1);

	for (int i = 0; i < maxRow; i++) {
		for (int k = 0; k < MAX_COL; k++) {
			mat[i][k] = rand() % 10 + 1;
		}
		cout << endl;
	}
}


/**
* Function <code>printMatrix</code> Prints the matrix.
* <BR>
* @param mat Is the 2D array with all the numbers
* @param maxRow Is the maximum amount of rows
*/
void printMatrix(const double mat[][MAX_COL], const int maxRow) {
	assert(MAX_COL > 1 && maxRow > 1);

	for (int i = 0; i < maxRow; i++) {
		for (int k = 0; k < MAX_COL; k++) {
			cout << mat[i][k] << " ";
		}
		cout << endl;
	}
}