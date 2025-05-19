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

	double testArr[2][MAX_COL] = { {1.0, 2.0, 3.0}, {4.0, 5.0, 6.0} };

	printMatrix(testArr, 2);
	fillWithRandomNum(testArr, 2);
	printMatrix(testArr, 2);

	return 0;
}