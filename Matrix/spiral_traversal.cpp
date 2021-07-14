#include <bits/stdc++.h>
using namespace std;

void spiral_traverse(vector<vector<int>> matrix, int r, int c){
    int k=0,l=0;
        // code here 
    while(r>k && c>l){
        
        for(int i=l ; i<c ; i++){
            cout<<matrix[k][i]<<" ";
        }
        
        k++;
        
        for(int i=k ; i<r ; i++){
            cout<<matrix[i][c-1]<<" ";
        }
        
        c--;
        
        if(k<r){
            for(int i=c-1 ; i>=l ; i--){
                cout<<matrix[r-1][i]<<" ";
            }
            r--;
        }
        
        if(l<c){
            for(int i=r-1 ; i>=k ; i--){
                cout<<matrix[i][l]<<" ";
            }
            l++;
        }
    }
}

int main()
{
    int n,m;  cin>>n>>m;

    vector<vector<int>> v;

    for(int i=0;i<n;i++){
        vector<int> v1;
        for(int j=0;j<m;j++){
            int num;  cin>>num;
            v1.push_back(num);
        }
        v.push_back(v1);
    }

    spiral_traverse(v,n,m);
    return 0;
}