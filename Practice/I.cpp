// I. Count Vowels
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

#include <iostream>
using namespace std;

bool isVowel(char ch){
    return (0x208222 & (1<<(tolower(ch)-'a')+1));   
}

int countVow(string &str,int i){
    if(i<0)return 0;
    if(isVowel(str[i])){   
        return 1+countVow(str,i-1);
    }else{
        return countVow(str,i-1);
    }
}

int main() {
    string str;
    getline(cin,str);
    int pos=str.length();
    cout << countVow(str,pos-1);
    return 0;
}