#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin>>t; 
    while(t--){ 
        int n,x,r,d; 
        cin>>n>>x; 
        r=n%3;
        d=n/3;
        cout<<((d*x*2)+(r*x));
    }
    return 0;
}