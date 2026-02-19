//F. Print Even Indices

#include <iostream>
#include <vector>
using namespace std;

void VecIn(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void printEven(vector<int> &v,int index) {
    if(index>=v.size())return;
    printEven(v,index+2);
    cout << v[index] << ' ';

}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    VecIn(v, n);
    printEven(v,0);

    return 0;
}