#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    //OPTIMAL SOLUTION
    string reverseWords(string s) {
        int i=0;
        string ans="";
        while(i<s.size()){
            if(s[i]==' '){
                while(s[i]==' ' && i<s.size()){
                    i++;
                }
            }else{
                string str ="";
                while(s[i]!=' ' && i<s.size()){
                    str+=s[i++];
                }
                ans.insert(0," "+str);
            }
        }
        ans.erase(0,1);
        return ans;
    }

    string reverseWords(string s) {
        int i=0;
        // if space skip till a letter
        // if word loop till space
        // push word
        vector<string> st;
        while(i<s.size()){
            if(s[i]==' '){
                while(s[i]==' ' && i<s.size()){
                    i++;
                }
            }else{
                string str ="";
                while(s[i]!=' ' && i<s.size()){
                    str+=s[i++];
                }
                st.push_back(str);
            }
        }
        string ans = "";
        for(int i=st.size()-1;i>=0;i--){
            ans+=st[i];
            if(i!=0)ans+=' ';
        }
        return ans;
    }
};

int main() {
    
    return 0;
}