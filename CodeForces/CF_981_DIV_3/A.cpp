#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
        while(t--){
            int n;
            cin>>n;
            int point = 0;
            int turn = 1;
            while(abs(point) < n){
                if(turn%2==0){
                    //even
                    point = point - (2*turn) + 1;
                }
                else{
                    //odd
                    point = point + (2*turn) - 1;
                }
                turn++;
            }
            if(turn%2==0) cout<<"Kosuke"<<endl;
            else cout<<"Sakurako"<<endl;
        }
    return 0;
}