#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,maxi,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long r[n],rr[n];
		for(i=0;i<n;i++)
		{
			cin>>r[i];
			cin>>rr[i];
		}
		int max=0;
		for(i=0;i<n;i++)
			if(r[i]>max)
			{
				max=r[i];
				maxi = i;
			}
		ans=maxi+1;
		for(i=0;i<n;i++)
		{
			if(rr[i]>=max && i!=maxi)
			{
				ans = -1;
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}