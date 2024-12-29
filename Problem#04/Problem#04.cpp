//write a program to fill 3x3 array with random numbers then print the sum of each col

#include <iostream>
#include <iomanip>
using namespace std;



int RandomNumber(int from, int to) {
	int random = 0;
	random = rand() % (to - from + 1) +from;

	return random;

}

void FillArrayWithRandomNumbers(int arr[3][3], short rows, short cols) {

	for (short i = 0;i < rows;i++) {
		for (short j = 0;j < cols;j++) {

			arr[i][j] = RandomNumber(1, 100);

		}
	}


}

void PrintArray(int arr[3][3], short rows, short cols) {

	for (short i = 0;i < rows;i++) {
		for (short j = 0; j < cols; j++) {
			cout << setw(3) << arr[i][j] << "\t";

		}
		cout << endl;
	}



}

int sumOfCol(int arr[3][3], short rows, short col) {
	int sum = 0;
	for (short i = 0; i < rows; i++) {
		sum += arr[i][col];
	}
	return sum;
}
void PrintSumOfCols(int arr[3][3], short rows, short cols) {
	for (short j = 0; j < cols; j++) {
		cout << "Sum of col " << j + 1 << " is " << sumOfCol(arr, rows, j) << endl;
	}
}

int main() {

	srand((unsigned)time(NULL));

	int arr[3][3];

	FillArrayWithRandomNumbers(arr, 3, 3);
	PrintArray(arr, 3, 3);
	PrintSumOfCols(arr, 3, 3);
	return 0;
}