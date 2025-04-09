#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols];

 
    cout << "Enter elements for a " << rows << "x" << cols << " array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nThe 2D array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
