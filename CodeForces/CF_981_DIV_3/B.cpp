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
        int cnt = 0;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        }
        for (int i = 0; i < n; i++)
        {
            int mini = INT_MAX;
            int col = i;
            int row = 0;
            while (col < n && row < n)
            {
                if (arr[row][col] < 0)
                {
                    mini = min(mini, arr[row][col]);
                }
                // cout << mini << " ";
                // cout<<endl;
                row++; col++;
            }
            if (mini != INT_MAX)
            {
                cnt += abs(mini);
            }
        }

        for(int i=1; i<n; i++){
            int mini = INT_MAX;
            int col = 0;
            int row = i;
            while (col < n && row < n)
            {
                if (arr[row][col] < 0)
                {
                    mini = min(mini, arr[row][col]);
                }
                // cout << mini << " ";
                // cout<<endl;
                row++; col++;
            }
            if (mini != INT_MAX)
            {
                cnt += abs(mini);
            }
        }
        cout << cnt<<endl;
    }
    return 0;
}