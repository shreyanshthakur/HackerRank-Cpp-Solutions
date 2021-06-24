#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q,tempval; cin>>n>>q;
    vector<vector<int>> arr(n);
    int numberofelements;
    for(int i=0;i<n;i++){
        cin>>numberofelements;
        for(int j=0;j<numberofelements;j++){
            cin>>tempval;
            arr[i].push_back(tempval);
        }
        
    }
    int r,c;
    for(int i=0;i<q;i++){
        cin>>r>>c;
        cout<<arr[r][c]<<endl;
    }
    
    return 0;
}