#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        unordered_map<long long,int> umap;
        int cnt = 0;
        long long sum = 0;
        umap[0] = 1;
        for(int i=0; i<n; i++){
            sum += (long long)arr[i];
            if(arr[i] == 0 || umap.count(sum)){
                sum = 0;
                cnt++;
                umap.clear();
                umap[0] = 1;
            }else umap[sum]++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}