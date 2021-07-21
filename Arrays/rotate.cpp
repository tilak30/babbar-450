#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> arr, int n){
    
     int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--)
    arr[i] = arr[i - 1];
    arr[0] = x;
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    rotate(v,n);
    return 0;
}