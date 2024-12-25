#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n+1];
        int cnt = 0;
        unordered_map<int,int> umap;
        for (int i = 1; i <= n; i++){
            cin >> arr[i];
            umap[arr[i]]= i;
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == i)
                continue;
            if (arr[arr[i]] == i)
                continue;
            int idx = arr[i];
            int sidx = umap[i];
            umap[arr[idx]] = sidx;
            umap[i] = idx;
            swap(arr[idx],arr[sidx]);
            cnt++;
        }
        cout<<"ans : ";
        cout<<cnt<<endl;
    }
    return 0;
}