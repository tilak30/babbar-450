
#include <bits/stdc++.h>
using namespace std;

void kth_min(vector<int> a, int n){
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
 
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {
 
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }

    for(auto x: a)
        cout<<x<<" ";
}

int main()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    kth_min(v,n);
    return 0;
}
