#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int from, int to) {
    int random;
    random = rand() % (to - from + 1) + from;
    return random;
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

int main() {
    srand((unsigned)time(NULL));

    int arr[3][3];

    FillMatrixWithRandomNumbers(arr, 3, 3);
    PrintMatrix(arr, 3, 3);

    return 0;
}
