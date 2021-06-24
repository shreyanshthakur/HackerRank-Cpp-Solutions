#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,M,X,Y;
	    cin>>N>>M>>X>>Y;
	    char s[N][M];
	    int Fcount,Pcount;
	    Fcount=Pcount=0;
	    vector<int> L,K;
	    for(int i=0;i<N;i++){
	        Fcount=Pcount=0;
	        for(int j=0;j<M;j++){
	            cin>>s[i][j];
	            if(s[i][j]=='F')
	                Fcount++;
	            if(s[i][j]=='P')
	                Pcount++;
	            if(j==M-1){
	                L.push_back(Fcount);
	                K.push_back(Pcount);
	            }     
	        }
	        
	    }
	    for(int i=0;i<N;i++){
	    if(L[i]>=X)
	        cout<<"1";
	    else if(L[i]==(X-1) && K[i]>=Y)
	        cout<<"1";
	    else
	        cout<<"0";
	    
	    }
	    cout<<endl;
	}
	return 0;
}
