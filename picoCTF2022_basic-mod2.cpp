#include <iostream>
using namespace std;
//code to decrypt picoCTF 2022 mod37 problem
int main() {
    int n;
	while(cin >> n){
	    n %= 41;
	    int m = 41, a = n;
	    for (int x = 1; x < m; x++)
            if (((a%m) * (x%m)) % m == 1)
                n = x;
	    if(n < 27){
	        n += 64;
	        char c = (char)n;
	        cout << c;
	    }
	    else if(n ==37){
	        cout << "_";
	    }
	    else if(n>26 && n<37) cout<<n-27;
	}
	return 0;
}
