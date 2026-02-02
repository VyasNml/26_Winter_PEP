// {
//     {1,  7,  14, 6},
//     {11, 15, 5,  10},
//     {2,  4,  16, 3},
//     {9,  13, 8,  12}
// }
// output:
// spural print column wise
// 1 7 14 6 10 3 12 8 13 9 2 11 15 5 16 4

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

void spiralPrint(int arr[][100],int rows,int cols){
    int topR=0,botR=rows-1;
    int leftC=0,rightC=cols-1;
    while(topR<botR && leftC<rightC){
        //top row print
        for(int i=leftC;i<=rightC;i++){
            cout << arr[topR][i] << " ";
        }
        cout << endl;
        topR++;
        //right col print
        for(int i=topR;i<=botR;i++){
            cout << arr[i][rightC] << " ";
        }
        cout << endl;
        rightC--;
        //bottom row print
        for(int i=rightC;i>=leftC;i--){
            cout << arr[botR][i] << " ";
        }
        cout << endl;
        botR--;
        //left col print
        for(int i=botR;i>=topR;i--){
            cout << arr[i][leftC] << " ";
        }
        cout << endl;
        leftC++;
    }
    
}


int main(){
    // int rows=4, cols=4;
    // int arr[100][100] = {{1,  7,  14, 6},
    //                      {11, 15, 5,  10},
    //                      {2,  4,  16, 3},
    //                      {9,  13, 8,  12}};
    int rows=4, cols=3;
    int arr[100][100] = {{1,  7,  14},
                         {11, 15, 5},
                         {2,  4,  16},
                         {9,  13, 8}};
    Arr2DOut(arr, rows, cols);
    cout << endl;
    spiralPrint(arr,rows,cols);

    

    return 0;
}