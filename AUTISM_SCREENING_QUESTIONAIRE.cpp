#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'findOdd' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY series as parameter.
 */

string findOdd(vector<string> series) {
    string s;
    int pattern1=0,pattern2=0,pattern3=0;
    vector<int> v;  
    int x=series[0][0]-series[0][1];
    for(int i=0;i<series.size();i++){
        
            if(series[i][0]-series[i][1]==x){
                v.push_back(1);
            }
            else {
                v.push_back(0);
            }
        
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==0)
            s=series[i];
    }
    return s;
}

int main()