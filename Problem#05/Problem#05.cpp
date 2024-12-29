//Write a program to fill 3x3 array with random numbers then store the sum of each col into 1D array.

#include<iostream>
#include <iomanip>

using namespace std;

int randomnumber(int from, int to) {

	int random = 0;
	random = rand() % (to - from + 1) + from;
	return random;
}

void fillArrayWithRandomNumbers(int arr[3][3], short rows, short cols) {
	for (short i = 0; i < rows;i++) {
		for (short j = 0; j < cols;j++) {
			arr[i][j] = randomnumber(1, 100);
		}

	}


}

void printArray(int arr[3][3], short rows, short cols) {
	for (short i = 0;i < rows;i++) {
		for (short j = 0; j < cols;j++) {
			cout << setw(3) << arr[i][j] << "	";

		}
		cout << endl;
	}
}


int ColSum(int arr[3][3], short rows, short cols) {
	int sum = 0;
	for (int i = 0; i < rows;i++) {
		sum += arr[i][cols];

	}
	return sum;
}
void SumMatrixRowsInArray(int arrsum[], int arr[3][3], short rows, short cols) {

	for (short i = 0; i < cols; i++) {

		arrsum[i] = ColSum(arr, rows, i);
	}

}



void PrintRowSumArray(int arr[], short rows) {

	for (int i = 0;i < rows;i++) {

		cout << "The sum of col" << i + 1 << "is " << arr[i] << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));


	int arr[3][3];
	int arrsum[3];
	fillArrayWithRandomNumbers(arr, 3, 3);
	printArray(arr, 3, 3);

	SumMatrixRowsInArray(arrsum, arr, 3, 3);

	PrintRowSumArray(arrsum, 3);




}