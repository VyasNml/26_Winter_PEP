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

int maxRowSum(int arr[][100],int rows,int cols){
    int maxi=INT_MIN;
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=arr[i][j];
        }
        maxi = std::max(maxi,sum);
    }
    return maxi;
}

int maxColSum(int arr[][100],int rows,int cols){
    int maxi=INT_MIN;
    for(int i=0;i<cols;i++){
        int sum=0;
        for(int j=0;j<rows;j++){
            sum+=arr[j][i];
        }
        maxi = std::max(maxi,sum);
    }
    return maxi;
}

int maxColIndx(int arr[][100],int rows,int cols){
    int maxi=INT_MIN;
    int indx=-1;
    for(int i=0;i<cols;i++){
        int sum=0;
        for(int j=0;j<rows;j++){
            sum+=arr[j][i];
        }
        if(sum>maxi){
            maxi = std::max(maxi,sum);
            indx = i;
        }
    }
    return indx;
}

int main(){
    int rows=3, cols=4;
    // cin >> rows >> cols;
    int arr[100][100] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    Arr2DOut(arr, rows, cols);
    // Arr2DIn(arr, rows, cols);
    cout << endl;
    cout << "Max Row Sum: " << maxRowSum(arr,rows,cols) << endl;
    cout << "Max Col Sum: " << maxColSum(arr,rows,cols) << endl;
    
    cout << "Max Col Index: " << maxColIndx(arr,rows,cols) << endl;

    return 0;
}