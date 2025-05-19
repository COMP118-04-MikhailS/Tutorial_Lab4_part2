/** \file Tutorial4Part1.cpp
* \brief Prints different shapes with given dimensions.
* \details
* \author Mikhail
* \version 0.1
* \date 05/2025
* \copyright University of Nicosia.
*/

#include "Matrix.h"
#include <iostream>
#include <cassert>
#include <ctime>
#include <cstdlib>

using namespace std;

/**
* Function <code>main </code> 
* <BR>
* @return Returns 0 if everything is ok and something else in other case
*/
int main() {

	srand(time(0));

	double mat[2][MAX_COL] = { { 1, 2, 3 }, { 4, 5, 6 } };

	cout << maxOfCol(mat, 1, 2) << endl;
	cout << maxOfRow(mat, 0, 2) << endl;
	cout << avgOfMatrix(mat, 2) << endl;

	return 0;
}