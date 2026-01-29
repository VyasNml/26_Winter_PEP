#include <iostream> 
#include <unordered_map> 
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int> map;
        for(char x:s){
            map[x]++;
        }
        for(char x:t){
            map[x]--;
        }
        for(auto x:map){
            if(x.second!=0)return false;
        }
        return true;
    }
};

int main() {
    string s = "anagram", t = "nagaram";
    int arr[26] = {0};

    for(char i:s){
        arr[i-'a']++;
    }

    for(char i:t){
        arr[i-'a']--;
    }
    
    return 0;
}