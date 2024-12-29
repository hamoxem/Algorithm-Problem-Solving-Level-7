//Write a program to fill a 3x3 matrix with ordered number then transposed the matrix
#include<iostream>
using namespace std;

void FillArrayWithOrderedNumbers(int arr[3][3], short rows, short cols) {
	int counter = 1;
	for (short i = 0;i < rows;i++) {
		for (short j = 0; j < cols;j++) {

			arr[i][j] = counter;
			counter++;
		}

	}

}


void PrintArray(int arr[3][3], short rows, short cols) {

	for (short i = 0; i < rows;i++) {
		for (short j = 0; j < cols;j++) {

			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}

void Transposed(int arr[3][3], int transposed[3][3], short rows, short cols) {

	for (short i = 0;i < rows;i++) {
		for (short j = 0; j < cols; j++) {

			transposed[i][j] = arr[j][i];
		}
	}

}
int main() {
	int arr[3][3];
	int transposedarr[3][3];
	FillArrayWithOrderedNumbers(arr, 3, 3);
	PrintArray(arr, 3, 3);
	cout << endl;
	Transposed(arr, transposedarr, 3, 3);

	PrintArray(transposedarr,3,3);

	return 0;
}