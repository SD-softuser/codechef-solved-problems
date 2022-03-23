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
        int x,y,z;
        cin>>x>>y; 
        z= x*y; 
        cout<<(z/100)<<endl;
    }

    return 0;
}