#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    if(a%7==0 && a%2==0)
	    
	        cout<<"alice"<<endl;
	        
	        else if(a%9==0 && a%2==1)
	        
	       cout<<"bob"<<endl;
	       
	       else
	       cout<<"charlie"<<endl;
	    }
	  
	return 0;
}

