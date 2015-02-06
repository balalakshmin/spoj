#include <iostream>
#include<math.h>
using namespace std;

long long divisors(long long n)
{
	long long i;
	for(i=n/2;i>=2;i--)
		if(n%i==0)
			return i;
}
bool isprime(long long n)
{
	long i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main() {
	// your code goes here
	//Anne plays first. 
	long long q;
	//even=>anne wins. odd=>marian wins 
	cin>>q;
	int winner=0;
	while(isprime(q)==0)
	{
		q = divisors(q);
		winner++;
	}
	if(winner%2==0)
		cout<<"ANNE";
	else
		cout<<"MARIAN";
	return 0;
}