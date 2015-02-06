#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	long long t,n,p,r1,r2,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>p;
		c = -2*(p-1);
		a=1,b=1;
		r1 = (-b+sqrt((pow(b,2)-4*a*c)))/2*a;
		r2 = (-b-sqrt((pow(b,2)-4*a*c)))/2*a;
		if(r1<0)
			cout<<r2<<endl;
		else
			cout<<r1<<endl;
		
	}
	return 0;
}