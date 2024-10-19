#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            mini = min(mini,temp);
            maxi = max(maxi,temp);
        }
        cout<<(maxi-mini)*(n-1)<<endl;
    }
    return 0;
}