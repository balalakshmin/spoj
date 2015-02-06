#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define getcx getchar_unlocked
inline void inp(long long int &n )//fast input function
{
   n=0;
   int ch=getcx();int sign=1;
   while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   n=n*sign;
}
int main() {
			long long int temp,q,x,count=0;
			inp(q);
			x=3;
			while(q%2==0)
			{
				count++;
				q/=2;
			}
			while(x<sqrt(q))
			{
				while(q%x==0)
				{	count++;
					q/=x;
					if(count>2)
						break;
				}
				if(count>2) break;
				else x+=2;
			}
			if(q>2) count++;
			
			if(count==2)
				printf("MARIAN");
			else
				printf("ANNE");
	return 0;
}