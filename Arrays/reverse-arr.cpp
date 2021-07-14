#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> v, int n){
    
    int start=0,end=n-1;
    //REVERSE THE ARRAY
    while(start<end){
        int t=v[start];
        v[start]=v[end];
        v[end]=t;
        start++;  end--;
    }

    //PRINT ARRAY
    for(auto x: v){
        cout<<x<<" ";
    }
}

int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    reverse(v,n);
    return 0;
}