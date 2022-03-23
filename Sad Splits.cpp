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
        int n; 
        cin>>n; 
        int digit =0; 
        do{ 
            ++digit; 
            n = n/10; 
        }while(n);
        int arr[digit];
        for(int i=0; i<digit; i++){ 
            arr[i] = n%10; 
            n = n/10;
        }
        int count =0; 
        for(int i=0; i<digit-1; i++){ 
            int x =(arr[i]*10)+(arr[i+1]); 
            if(x%2==0){ 
                count++;
            }
        } 
        if(count>=2){ 
            cout<<"YES"<<endl; 
        } 
        else{ 
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}