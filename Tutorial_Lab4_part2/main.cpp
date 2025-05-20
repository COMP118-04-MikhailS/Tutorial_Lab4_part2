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

//Function prototype
void showMenu();

/**
* Function <code>main</code> prints the menu with all the choices and calls the functions based on user input.
* <BR>
* @return Returns 0 if everything is ok and something else in other case
*/
int main() {

	srand(time(0));

	const int MaxRow = 3;

	double mat[MaxRow][MAX_COL] = {0};

	
	int choice, row, column;
	double sum, max, avg;

	do {
		showMenu();
		cin >> choice;
		switch (choice) {
			case 1:
				fillWithRandomNum(mat, MaxRow);
				cout << "Matrix filled with random numbers.\n";
				break;
			case 2:
				printMatrix(mat, MaxRow);
				break;
			case 3:
				do {
					cout << "Enter row number ( 0 - " << MaxRow - 1 << "): ";
					cin >> row;
					if (row < 0 || row >= MaxRow) {
						cout << "Invalid row number. Please try again.\n";
					}
				} while (row < 0 || row >= MaxRow);

				sum = sumOfRow(mat, row, MaxRow);
				cout << "Sum of row " << row << " is: " << sum << "\n";
				break;
			case 4:
				do {
					cout << "Enter column number ( 0 - " << MAX_COL - 1 << "): ";
					cin >> column;
					if (column < 0 || column >= MAX_COL) {
						cout << "Invalid column number. Please try again.\n";
					}
				} while (column < 0 || column >= MAX_COL);

				sum = sumOfCol(mat, column, MaxRow);
				cout << "Sum of column " << column << " is: " << sum << "\n";
				break;

			case 5:
				do {
					cout << "Enter row number ( 0 - " << MaxRow - 1 << "): ";
					cin >> row;
					if (row < 0 || row >= MaxRow) {
						cout << "Invalid row number. Please try again.\n";
					}
				} while (row < 0 || row >= MaxRow);
				max = maxOfRow(mat, row, MaxRow);
				cout << "Max of row " << row << " is: " << max << "\n";
				break;

			case 6:
				do {
					cout << "Enter column number ( 0 - " << MAX_COL - 1 << "): ";
					cin >> column;
					if (column < 0 || column >= MAX_COL) {
						cout << "Invalid column number. Please try again.\n";
					}
				} while (column < 0 || column >= MAX_COL);
				max = maxOfCol(mat, column, MaxRow);
				cout << "Max of column " << column << " is: " << max << "\n";
				break;

			case 7:
				avg = avgOfMatrix(mat, MaxRow);
				cout << "Average of matrix is : " << avg << endl;
				break;

			case 8:
				if (!makeIdentityMatrix(mat, MaxRow))
					cerr << "\nNot a square matrix, cannot apply function";
				break;

			case 9:
				if (isIdentityMatrix(mat, MaxRow))
					cout << "\nMatrix is an identity matrix";
				else
					cout << "\nMatrix is NOT an identity matrix";
				break;

			case 10:
				cout << "\nSum of diagonal is: " << sumOfDiagonal(mat, MaxRow);
				break;
			// Exit case
			case 0:
				break;

			default:
				cout << "Invalid choice. Please try again.\n";
				break;
		}
	} while (choice != 0);

	return 0;
}

/**
 * The <code>showMenu</code> function displays the menu options to the user.
 */
void showMenu() {
	cout << "\n1. Fill with random numbers\n";
	cout << "2. Print matrix\n";
	cout << "3. Sum of row\n";
	cout << "4. Sum of column\n";
	cout << "5. Max of row\n";
	cout << "6. Max of column\n";
	cout << "7. Average of matrix\n";
	cout << "8. Make Identity Matrix\n";
	cout << "9. Test if Identity Matrix\n";
	cout << "10. Sum of Diagonal\n";
	cout << "0. Exit\n";

	cout << "Enter your choice: ";
}