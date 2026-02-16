// Help Alice to find the Parity

// https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/help-alice-to-find-the-parity-f65a1d30/

#include <iostream>
using namespace std;
int main() {
	long long l,r;
	cin >> l >> r;
	for(int i=l+1;i<=r;i++){
		l = l^i;
	}

	cout << ((l&1)?"odd" : "even") << endl;
}