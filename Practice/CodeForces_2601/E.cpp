// E. Base Converssion

#include <iostream>
using namespace std;

void printBinary(int n,string &ans){
    if(n<=0)return;
    ans.insert(0,to_string(n%2));
    printBinary(n/2,ans);

}

int main() {
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int n;
        cin >> n;
        string ans = "";
        printBinary(n,ans);
        cout << ans << endl;
    }
    return 0;
}