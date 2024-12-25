#include<bits/stdc++.h>
using namespace std;

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> v(26,0);
        cin>>n;
        string str;
        cin>>str;
        for(int i=0; i<n; i++){
            v[str[i]-'a']++;
        }
        int maxi = 0;
        char ch = 'a';
        for(int i=0; i<26; i++){
            if(v[i] >= maxi){
                ch = 'a' + i;
                maxi = v[i];
            }
        }

        for(int i=0; i<n; i++){
            if(str[i] != ch){
                str[i] = ch;
                break;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}