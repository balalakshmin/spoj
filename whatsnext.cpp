#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a1,a2,a3,d1,d2,r1,r2;
	cin>>a1>>a2>>a3;
	while(a1!=0 || a2!=0 || a3!=0)
	{
		d1=a2-a1;
		d2=a3-a2;
		if(a1!=0 && a2!=0)
		{
			r1=a2/a1;
			r2=a3/a2;
		}
		if(d2==d1)
			cout<<"AP"<<" "<<a3+d1<<endl;
		else 
		{
			if(r1==r2)
			cout<<"GP"<<" "<<a3*r1<<endl;
		}
		cin>>a1>>a2>>a3;
	
	}
	return 0;
}