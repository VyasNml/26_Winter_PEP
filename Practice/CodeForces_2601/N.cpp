// N. Sum of a Matrix

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

#include <iostream>
#include <vector>
using namespace std;

void Vec2DAdd(vector<vector<int>> &vec, int &rows, int &cols){
    int x;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> x;
            vec[i][j]+=x;
        }
    }
}

void Vec2DIn(vector<vector<int>> &vec, int &rows, int &cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> vec[i][j];
        }
    }
}

void Vec2DOut(vector<vector<int>> &vec, int &rows, int &cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << vec[i][j] << ' ';
        }
        cout << endl;
    }
}

int main(){
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> mat1(rows, vector<int>(cols));

    Vec2DIn(mat1, rows, cols);
    Vec2DAdd(mat1, rows, cols);
    Vec2DOut(mat1, rows, cols);

    return 0;
}