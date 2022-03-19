#include<bits/stdc++.h>
using namespace std;
int main(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]<=90){
			s[i]+=32;
		}
		else if(s[i]<=122){
			s[i]-=32;
		}
	}
	cout<<s;

	return 0;
}
