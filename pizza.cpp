#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	float a,b,s=0;
	int count[3]={0};
	int pizza=0;
	//0=>1/4 1=>1/2 2=>3/4
	while(n--)
	{
		scanf("%d/%d",&a,&b);
		s = a/b;
		if(s==0.25)
			count[0]++;
		else if(s==0.5)
			count[1]++;
		else if(s==0.75)
			count[2]++;
	}
	// MERGING QUARTER AND 3/4
	pizza += count[2];
	if(count[0]>count[2])
	{
		count[0]-=count[2];
		count[2]=0;
	}
	else
	{
		count[2]-=count[0];
		count[0]=0;
	}
	
	//MERGING 4 QUARTERS
	if(count[0]>0)
	{
		pizza += count[0]/4;
		count[0] %= 4;
	}
	//MERGING 2 HALF
	pizza += count[1]/2;
	count[1] %= 2;
	//cout<<pizza<<" "<<count[0]<<" "<<count[1]<<" "<<count[2];
	//MERGING HALF AND 2 QUAR
	if(count[0]>count[1])
	{
		count[0]-=2*count[1];
	}
	pizza += count[1];
	if(count[0]==count[1])
	{
		count[0]-=count[1];
		if(count[0]>0)
			pizza+=count[0];
	}
	if(count[0]>0)
		pizza+=1;
	cout<<pizza+1;
	return 0;
}