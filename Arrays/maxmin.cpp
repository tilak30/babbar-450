#include <bits/stdc++.h>
using namespace std;

void maxmin(vector<int> v, int n){
    
    int x = *max_element(v.begin(), v.end());
    int y = *min_element(v.begin(), v.end());
    cout<<"max : "<<x;
    cout<<"\nmin : "<<y;
}

int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    maxmin(v,n);
    return 0;
}