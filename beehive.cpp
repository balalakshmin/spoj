#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long n;
	cin>>n;
	while(n!=-1)
	{
		long long a=1;
		int i=1;
		bool yes=false;
		if(n==1)
		{
			cout<<'Y'<<endl;
			yes=true;
		}
		else
		{
			while(a<=n)
			{
				a += i*6;
				i++;
				if(a==n)
				{
					cout<<'Y'<<endl;
					yes=true;
					break;
				}
			}
		}
		if(!yes)
			cout<<'N'<<endl;
		cin>>n;
	}
	return 0;
}