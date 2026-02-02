// {
//     {1,  7,  14, 6},
//     {11, 15, 5,  10},
//     {2,  4,  16, 3},
//     {9,  13, 8,  12}
// }
// output:
// wave print column wise
// 1, 11, 2, 9, 13, 4, 15, 7, 14, 5, 16, 8, 12, 3, 10, 6 

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

void wavePrintColwise(int arr[][100],int rows,int cols){
    int j=0;
    for(int i=0;i<cols;i++){
        if(!(i&1)){
            for(int j=0;j<rows;j++){
                cout << arr[j][i] << " ";
            }
            cout << endl;
        }else{
            for(int j=rows-1;j>=0;j--){
                cout << arr[j][i] << " ";
            }
            cout << endl;

        }
    }
}

void wavePrintRowwise(int arr[][100],int rows,int cols){
    int j=0;
    for(int i=0;i<cols;i++){
        if(!(i&1)){
            for(int j=0;j<rows;j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }else{
            for(int j=rows-1;j>=0;j--){
                cout << arr[i][j] << " ";
            }
            cout << endl;

        }
    }
}

int main(){
    int rows=4, cols=4;
    // cin >> rows >> cols;
    int arr[100][100] = {{1,  7,  14, 6},
                         {11, 15, 5,  10},
                         {2,  4,  16, 3},
                         {9,  13, 8,  12}};

    // Arr2DIn(arr, rows, cols);
    Arr2DOut(arr, rows, cols);
    cout << endl;
    wavePrintColwise(arr,rows,cols);
    cout << endl;
    wavePrintRowwise(arr,rows,cols);


    

    return 0;
}