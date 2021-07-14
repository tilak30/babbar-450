// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.

#include <bits/stdc++.h>
using namespace std;

bool search_2d_matrix(vector<vector<int>> matrix, int target){
    int r = matrix.size();
    int c = matrix[0].size();
    int n=0, m=c-1;
    while(n<r && m>=0){
        if(matrix[n][m]==target){
            return true;
        }
        else if(matrix[n][m]>target){
            m--;
        }
        else{
            n++;
        }
    }
    return false;
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
    int target;  cin>>target;

    if(search_2d_matrix(v,target)){
        cout<<"True";
    }
    else 
        cout<<"False";
    return 0;
}