// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/

// Number of steps

#include <iostream>
#include <vector>
using namespace std;

void VecIn(vector<int> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void VecOut(const vector<int> &v) {
    for (int x : v) {
        cout << x << ' ';
    }
    cout << endl;
}

int solution(vector<int> v1,vector<int> v2){
    int count = 0;
    bool allEq = true;
    
    while(1){
        // for(int i=0;i<v1.size();i++){
        //     if(v1[i]>=v2[i]){
        //         v1[i]-=v2[i];
        //     }
        // }
        // cond = true;
        // for(int i=0;i<v1.size();i++){
        //     if(v1[i]>v2[i])cond = false;
        // }
        // if(cond)break;
        // count++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> v1;
    vector<int> v2;
    VecIn(v1, n);
    VecIn(v2, n);

    cout << solution(v1,v2);

    return 0;
}