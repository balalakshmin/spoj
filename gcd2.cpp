#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string b;
		int a;
		cin>>a;
		cin>>b;
		if(a==0)
			cout<<b<<endl;
		else if(b=="0")
			cout<<a<<endl;
		if(a!=0 && b!="0")
		{
			int l = b.length();
			int num=0;
			for(int i=0;i<l;i++)
			{
				num = (num*10 + b[i]-'0')%a;
			}
			int g = gcd(a,num);
			cout<<g<<endl;
		}
	}
	return 0;
}