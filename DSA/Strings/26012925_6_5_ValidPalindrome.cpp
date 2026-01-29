//https://leetcode.com/problems/valid-palindrome/description/

#include <iostream>
using namespace std;

class Solution {
public:
    bool isValid(char ch){
        if(('A'<=ch && ch<='Z') || ('a'<=ch && ch<='z') || ('0'<=ch && ch<='9')){
            return true;
        }
        return false;
    }

    bool isCap(char ch){
         if('A'<=ch && ch<='Z')return true;
         return false;
    }

    bool isPalindrome(string s) {
        int l=0;
        while(l<s.size()){
            if(!(isValid(s[l]))){
                s.erase(l,1);
            }else{
                if(isCap(s[l])){
                    s[l] = s[l]+32;
                }
                l++;
            }
            
        }

        for(int i=0;i<s.length();i++){
            if(s[i]!=s[s.length()-i-1])return false;
        }
        return true;
    }
};

int main() {
    
    return 0;
}