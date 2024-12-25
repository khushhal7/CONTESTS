#include <bits/stdc++.h>
using namespace std;

int counDist(int arr[], int n){
    int cnt = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i]==arr[i+1]) cnt++;
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];  
        for(int i=0; i<n; i++) cin>>arr[i];
        int ans = counDist(arr,n);
        for(int i=0; i<n-1; i++){
            if(arr[i]==arr[i+1]){
                swap(arr[i],arr[n-i-1]);
            }
        }
        ans = min(ans,counDist(arr,n));
        cout<<"ans : "<<ans<<endl;
    }
    return 0;
}