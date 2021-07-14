#include <bits/stdc++.h>
using namespace std;

void rotate_by_90(vector<vector<int>> arr, int n){
    
    for (int j = 0; j < n; j++){
        for (int i = n- 1; i >= 0; i--)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

int main()
{
    int n;  cin>>n;

    vector<vector<int>> v;

    for(int i=0;i<n;i++){
        vector<int> v1;
        for(int j=0;j<n;j++){
            int num;  cin>>num;
            v1.push_back(num);
        }
        v.push_back(v1);
    }

    rotate_by_90(v,n);
    return 0;
}