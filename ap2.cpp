#include <iostream>
#include<math.h>
using namespace std;
//third term from last is n-2
//total sum/term gives no of elements if elements are equal.
//in ap 2*sum/sum of two terms
int main() {
	// your code goes here
	int t;
	long long third,thirdlast,sum,n,a,d;
	cin>>t;
	while(t--)
	{
		long long s=0;
		cin>>third;
		cin>>thirdlast;
		cin>>sum;
		n = (2*sum)/(third+thirdlast);
		d = (thirdlast - third)/(n-5);
		a = third - 2*d;
		cout<<n<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<a<<" ";
			a += d;
		}
		
		
	}
	return 0;
}