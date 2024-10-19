#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str(n-1,'0');
        str += "1";
        cout<<str<<endl;
    }
    return 0;
}