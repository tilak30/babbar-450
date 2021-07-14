#include <bits/stdc++.h>
using namespace std;

int median_of_matrix(vector<vector<int>> matrix, int r, int c){
    
    vector<int> v;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            v.push_back(matrix[i][j]);
    sort(v.begin(),v.end());
    if((r*c)%2!=0)
        return v[(r*c)/2];
    return v[((r*c)/2) + 1];
}

int main()
{
    int r,c;  cin>>r>>c;

    vector<vector<int>> v;

    for(int i=0;i<r;i++){
        vector<int> v1;
        for(int j=0;j<c;j++){
            int num;  cin>>num;
            v1.push_back(num);
        }
        v.push_back(v1);
    }

    cout<<"Median is : "<<median_of_matrix(v,r,c);
    return 0;
}