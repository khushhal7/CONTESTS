#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,t;
        cin>>n;
        int sum = 0;
        int target = 1;
        int ans = 0;
        int prev = 0;
        for(int i=0; i<n; i++){
            cin>>t;
            sum += t;
            while(target < sum){
                prev += 8;
                target += (prev);
            }
            if(sum == target) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}