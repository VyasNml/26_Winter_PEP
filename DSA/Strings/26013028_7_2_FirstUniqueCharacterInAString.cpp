//https://leetcode.com/problems/first-unique-character-in-a-string/description/

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for(char ch : s){
                freq[ch]++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]]==1)return i;
        }
        return -1;
    }
//OPTIMISED
    int firstUniqChar(string s) {
        int freq[26] = {0} ;
        for(char ch : s){
                freq[ch-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1)return i;
        }
        return -1;
    }
};

int main() {
    
    return 0;
}