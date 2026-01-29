#include <iostream>
#include <vector>
using namespace std;

int main() {
    string str = "banana",str2="";
    vector<bool> visited(256,true);
    for(int i=0;i<str.size();i++){
        if(!visited[i]){
            visited[i] = true;
            str2+= str[i];
        }
    }
    // cout << str << endl;
    cout << str2 << endl;
    
    return 0;
}