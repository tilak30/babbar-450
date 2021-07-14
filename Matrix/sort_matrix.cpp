#include <bits/stdc++.h>
using namespace std;

void sort_matrix(vector<vector<int>> mat, int n){
    vector<int> v;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            v.push_back(mat[i][j]);

    sort(v.begin(),v.end());
    int k=0;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            mat[i][j]=v[k++];
            
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<mat[i][j]<<" ";
            cout<<"\n";
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

    sort_matrix(v,n);
    return 0;
}