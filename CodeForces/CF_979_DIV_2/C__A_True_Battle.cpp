#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        bool ans = false;
        if(str[0]=='1' || str[n-1] == '1'){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=1; i<n; i++){
            if(str[i]=='1' && str[i-1]=='1'){
                ans = true;
            }
        }
        cout<<((ans)?"YES":"NO")<<endl;
    }
    return 0;
}