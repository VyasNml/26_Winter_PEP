
#include <iostream>
#include <string>
using namespace std;

void stringReversal(string &str){
    for(int i=0;i<str.length()/2;i++){
        swap(str[i],str[str.size()-i-1]);
    }
}


int main() {
    string str = {"Hello"};
    cout << str << endl;

    stringReversal(str);
    cout << str << endl;
    return 0;
}

// reverse(str.begin(),str.end());
