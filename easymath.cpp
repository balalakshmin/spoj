#include <iostream>
#include<stdio.h>
using namespace std;
#define getcx getchar_unlocked
inline void inp(long int &n )//fast input function
{
   n=0;
   int ch=getcx();int sign=1;
   while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   n=n*sign;
}
int gcd(long a,long b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main() {
	// your code goes here
	long n,m,a,d,t;
	long long arr[5];
	inp(t);
	while(t--)
	{
		long c=0;
		long div=0;
		inp(n);
		inp(m);
		inp(a);
		inp(d);
		int k=0;
		for(int i=0;i<=4;i++)
			arr[i]=a+i*d;
		
		for(int i=0;i<=4;i++)
			for(int j=i+1;j<=4;j++)
				if(gcd(arr[i],arr[j])>1)
				{
					if(arr[i]<arr[j])
						arr[j]=9999999999;
					else if(arr[i]>arr[j])
						arr[i]=9999999999;
				}
		for(int i=0;i<=4;i++)
		{
			cout<<arr[i]<<endl;
			//formula to find no of elements divisible within range (m/arr[i] - (n-1)/arr[i]) 
			if(arr[i]<9999999999)
				div += (m/arr[i] - (n-1)/arr[i]);
		}
		c=m-n+1-div;
		cout<<c<<endl;
	}
	return 0;
}