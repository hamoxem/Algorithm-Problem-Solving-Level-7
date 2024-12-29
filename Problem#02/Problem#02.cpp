//write a program to fill 3x3 array with random numbers then print the sum of each row

#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            arr[i][j] = RandomNumber(1, 100);
        }
    }
}

void PrintMatrix(int arr[3][3], short rows, short cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            cout << setw(3) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int RowSUM(int arr[3][3], short rowNumber, short cols) {
    int sum = 0;
    for (short i = 0; i < cols; i++) {
        sum += arr[rowNumber][i];
    }
    return sum;
}

void PrintEachRowSum(int arr[3][3], short rows, short cols) {
    for (int i = 0; i < rows; i++) {
        cout << "Row " << i + 1 << " sum = " << RowSUM(arr, i, cols) << endl;
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);

    PrintEachRowSum(arr, 3, 3);

    return 0;
}
