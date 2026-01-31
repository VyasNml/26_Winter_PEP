#include <iostream>
using namespace std;

void Arr2DIn(int arr[][100], int &rows, int &cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
}

void Arr2DOut(int arr[][100], int &rows, int &cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    int rows, cols;
    cin >> rows >> cols;
    int arr[rows][100];

    Arr2DIn(arr, rows, cols);
    Arr2DOut(arr, rows, cols);

    

    return 0;
}
