/** \file Shapes.cpp
* \brief The file that contains all the functions code.
* \details
* \author Mikhail
* \version 0.1
* \date 05/2025
* \bug	Logical bugs in the following functions: 
*	1) isIdentityMatrix
*	2) makeIdentityMatrix
*	3) sumOfDiagonal
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

	cout << "Matrix: " << endl;
	for (int i = 0; i < maxRow; i++) {
		for (int k = 0; k < MAX_COL; k++) {
			cout << mat[i][k] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
/**
* Function <code>maxOfCol</code> calculates and returns the maximum of the specific column.
* <BR>
* @param mat Is the 2D array with all the numbers
* @param column Is the column number of which we need to find the maximum
* @param maxRow Is the maximum amount of rows	
* @return maxCol Is the maximum of all elements in column specified by user
*/
double maxOfCol(const double mat[][MAX_COL], const int column, const int maxRow) {
	assert(column >= 0 && maxRow > 0);

	double maxCol = mat[0][column];

	for (int i = 1; i < maxRow; i++) {
		if (mat[i][column] > maxCol) {
			maxCol = mat[i][column];
		}
	}

	return maxCol;
}

/**
* Function <code>maxOfRow</code> calculates and returns the maximum of the specific row.
* <BR>
* @param mat Is the 2D array with all the numbers
* @param row Is the row number of which we need to find the maximum
* @param maxRow Is the maximum amount of rows
* @return maxRow Is the maximum of all elements in row specified by user
*/
double maxOfRow(const double mat[][MAX_COL], const int row, const int maxRow) {
	assert(row >= 0 && MAX_COL > 0);
	double rowMax = mat[row][0];

	for (int i = 1; i < MAX_COL; i++) {
		if (mat[row][i] > rowMax) {
			rowMax = mat[row][i];
		}
	}

	return rowMax;
}

/**
* Functoin <code>avgOfMatrix</code> calculates and returns the average of all elements in the matrix.
* <BR>
* @param mat Is the 2D array with all the numbers
* @param maxRow Is the maximum amount of rows
* @return avgMatrix Is the average of all elements in the matrix
*/
double avgOfMatrix(const double mat[][MAX_COL], const int maxRow) {
	assert(MAX_COL > 1 && maxRow > 1);

	double sum = 0;
	int count = 0;

	double avgMatrix;

	for (int i = 0; i < maxRow; i++) {
		for (int k = 0; k < MAX_COL; k++) {
			sum += mat[i][k];
			count++;
		}
	}
	
	avgMatrix = sum / count;

	return avgMatrix;
}



/**
 * The <code>isIdentityMatrix</code> function checks if the matrix is an
 * identity matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns <code>true</code> if this is an identity matrix.
 */
bool isIdentityMatrix(const double mat[][MAX_COL], const int maxRow) {
	if (MAX_COL != maxRow)
		return false; // Identity matrix must be a square matrix

	for (int i = 0; i < maxRow; ++i) {
		for (int j = 0; j < maxRow; ++j) {
			if (i == j && mat[i][j] != 1)
				return false;
			else if (i != j || mat[i][j] != 0)
				return false;
		}
	}
	return true;
}

/**
 * The <code>makeIdentityMatrix</code> function makes the argument matrix into an
 * identity matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns <code>false</code> if this is not a square matrix.
 */
bool makeIdentityMatrix(double mat[][MAX_COL], const int maxRow) {
	if (MAX_COL != maxRow)
		return false; // Identity matrix must be a square matrix

	for (int i = 0; i < maxRow; ++i) {
		for (int j = 0; i < MAX_COL; ++j) {
			if (i == j)
				mat[i][j] = 1;
			else
				mat[i][j] = 0;
		}
	}
	return true;
}

/**
 * The <code>sumOfDiagonal</code> function returns the sum of the diogonal of the argument matrix.
 * <BR>
 * @param mat The matrix.
 * @param maxRow How many rows the matrix have.
 * @return Returns sum of diagonal, <code>-1</code> if this is not a square matrix.
 */
double sumOfDiagonal(const double mat[][MAX_COL], const int maxRow) {
	double sum = 0	;

	if (MAX_COL != maxRow)
		return -1; // Identity matrix must be a square matrix

	for (int i = 0; i < maxRow; ++i) {
		sum += mat[i][i];
	}

	return sum;
}
