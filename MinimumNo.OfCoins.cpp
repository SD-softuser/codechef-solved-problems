#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int t; 
	cin>>t; 
	while(t--){ 
	    int x; 
	    if(x%5==0){ 
            if(x%10!=0){ 
                cout<<(x/10)+1<<endl;
            }
	        else{ 
                cout<<(x/10)<<endl;
            } 
        }
        else{ 
            cout<<-1<<endl;
        }
    }
	return 0;
}
