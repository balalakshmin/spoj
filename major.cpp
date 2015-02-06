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

int main() {
	// your code goes here
	long t,x,n;
	int arr[2001];
	inp(t);
	while(t--)
	{
		bool yes=false;
		for(int i=0;i<=2000;i++)
			arr[i]=0;
		inp(n);
		int count = n;
		while(n--)
		{
			inp(x);
			if(x>=0)
				arr[x]++;
			else if(x<0)
			{
				x = (-x)+1000;
				arr[x]++;
			}
		}
		for(int i=0;i<=2000;i++)
		{
			if(arr[i]>(count/2))
			{
				cout<<"YES "<<i<<endl;
				yes=true;
			}
		}
		if(!yes)
			cout<<"NO"<<endl;
		
	}
	return 0;
}