//Gave TLE on May Long challenge
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        int k; cin>>k;
        vector<int> A,B;
        for(int i=1;i<=2*k+1;i++){
            A.push_back(k+(i*i));
        }
        for(int i=0;i<=2*k-1;i++){
            int flag=0;
            cout<<"gcd"<<"("<<A[i]<<","<<A[i+1]<<")"<<" ";//debug
            for(int j=A[i+1];j>=1;j--){
                if(A[i]%j==0 && A[i+1]%j==0){
                    ++flag;
                    if(flag==1){
                        B.push_back(j);
                    }
                }
            }    
        }
        cout<<"\n";//debug
        int sum=0;
        for(int i=0;i<B.size();i++){
            cout<<B[i]<<" ";//debug
            sum+=B[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}