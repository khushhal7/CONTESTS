#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4){
            cout<<1<<endl;
            continue;
        }
        int ans = 1;
        while(n>=4){
            n/=4;
            ans*= 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}