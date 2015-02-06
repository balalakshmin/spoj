#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
long fac[100];
//gfg
int primeFactors(int n)
{
	int k=0;
    bool by = false;
    while (n%2 == 0)
    {
        by = true;
        n = n/2;
    }
    if(by)
    {
    	fac[0]=2;
    	k++;
    }
 	for (int i = 3; i <= sqrt(n); i = i+2)
    {
    	by=false;
        while (n%i == 0)
        {
            by = true;
            n = n/i;
        }
        if(by)
        {
        	fac[k]=i;
        	k++;
        }
    }
 	if (n > 2)
 	{
        fac[k]=n;
        k++;
 	}
    return k;
}

int main() {
	// your code goes here
	int t;
	long n;
	double tot;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		double prod=1;
		if(n>2)
		{
			int k=primeFactors(n);
			for(int i=0;i<k;i++)
			{
				prod *= (1.0-1.0/fac[i]);
			}
			tot = n*prod;
			printf("%.0f\n",tot);
		}
		else
			printf("%d\n",1);
	}
	return 0;
}