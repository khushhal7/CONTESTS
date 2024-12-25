#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,p;
    cin>>n>>m>>p;
    vector<vector<char>> grid(n,vector<char>(m));
    int speed[p];
    for(int i=0; i<p; i++) cin>>speed[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>grid[i][j];
        }
    }
    priority_queue<> pq;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++) cout<<grid[i][j]<<" ";
    //     cout<<endl;
    // }
    return 0;
}