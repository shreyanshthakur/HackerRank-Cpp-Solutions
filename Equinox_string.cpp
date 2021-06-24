#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    string arr[n],cur;
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int countS=0,countA=0;     
	    for(int i=0;i<n;i++){
	        cur=arr[i];
	        if(cur[0]=='E' || cur[0]=='Q' || cur[0] == 'U' || cur[0]=='I' || cur[0]=='N' || cur[0]=='O'||cur[0]=='X'){
	            countS+=a;
	        }
	        else
	            countA+=b;
	    }
	    if(countS>countA)
	        cout<<"SARTHAK"<<endl;
	    else if(countS<countA)
	        cout<<"ANURADHA"<<endl;
	    else
	        cout<<"DRAW"<<endl;
	}
	return 0;
}
