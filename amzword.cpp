#include <iostream>
using namespace std;

//no of words of length l ending with 0
long zero[100];
long one[100];
long two[100];
		
long find(long l)
{
	zero[1]=1;
	one[1]=1;
	two[1]=1;
	for(int i=2;i<=l;i++)
	{
		zero[i]=zero[i-1]+one[i-1];
		one[i]=zero[i-1]+one[i-1]+two[i-1];
		two[i]=one[i-1]+two[i-1];
	}
	return zero[l]+one[l]+two[l];
}
int main() {
	// your code goes here
	long n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		zero[i]=0;
		one[i]=0;
		two[i]=0;
	}
	long f = find(n);
	//cout<<zero[n]<<endl<<one[n]<<endl<<two[n]<<endl;
	
	cout<<f;
	return 0;
}