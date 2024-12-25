#include<bits/stdc++.h>
using namespace std;

vector<int> cp(vector<string> inputs);

int main(){
    vector<string> inputs = {"ababaa","abcabcd"};
    vector<int> ans = cp(inputs);
    for(auto it : ans) cout<<it<<" ";
    return 0;
}

vector<int> cp(vector<string> inputs){

    vector<int> ans;
    for(int i=0; i<inputs.size(); i++){
        string input = inputs[i];
        int n = input.size();
        int cnt = 0;
        vector<string> temp;
        string str = "";
        str += input[0];
        temp.push_back(str);
        for(int j=1; j<n; j++){
            int maximum = 0;
            for(int k=0; k<temp.size(); k++){
                // cout<<temp[k]<<endl;
                int len = temp[k].size();
                string str2 = input.substr(j,len);

                if(str2==temp[k]){
                    maximum = max(maximum,len);
                }
            }
            cnt += maximum;
            str += input[j];
            temp.push_back(str);
        }
        cnt+=n;
        ans.push_back(cnt);
    }
    return ans;
}