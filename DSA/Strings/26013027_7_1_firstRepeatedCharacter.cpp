#include <iostream>
#include <unordered_map>
using namespace std;

//solution with Bit Manipulation
class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        int mask = 0;
        for(int i=0;i<s.length();i++){
            int key = s[i];
            key-=97;
            if(mask&(1<<key)){
                return s.substr(i,1);
            }
            mask|=(1<<key);
        }
        return "-1";
    }
};

//Hash Map
int main() {
    string s ="geeksforgeeks";
    unordered_map<char,int> count;
    for(char ch:s){
        count[ch]++;
        if(count[ch]>1){
            cout << ch;
            break;
        }
    }
    return 0;
}

