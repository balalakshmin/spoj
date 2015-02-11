#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	long long a,b;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>a;
		cin>>b;
		long long j=b,k=1;
		while(1)
		{	
			if(k*a>=b)
			{
				cout<<"Case "<<i<<": "<<a*k<<endl;
				break;
			}
			else if(j%a==0)
			{
				cout<<"Case "<<i<<": "<<j<<endl;
				break;
			}
			j++;
			k++;
		}
	}
	return 0;
}