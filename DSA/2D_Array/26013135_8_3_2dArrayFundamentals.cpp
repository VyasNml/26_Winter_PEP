#include <iostream>
using namespace std;

void Arr2DIn(int arr[][100], int &rows, int &cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
}

void Arr2DOut(int arr[][4], int &rows, int &cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}

void ArrOutLine(int arr[][4], int &rows, int &cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << ' ';
        }
        // cout << endl;
    }
}

bool searchMat(int arr2[][4],int rows,int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr2[i][j]==key)return true;
        }
    }
    return false;
}

int main(){
    int rows, cols;
    // cin >> rows >> cols;
    int arr[rows][100];

    int arr2[2][4] = {{1,2,3,4},{5,6,7,8}};
    int arr3[2][4] = {1,2,3,4,5,6,7,8};
    rows = 2;
    cols = 4;
    // Arr2DIn(arr, rows, cols);
    // ArrOutLine(arr2, rows, cols);
    int key = 3;
    cout << searchMat(arr2,rows,cols,key);

    

    return 0;
}
