#include<iostream>
#include<stdlib.h>
using namespace std;
int compare(const void *a, const void *b)
{
	return (*(int*)(b))-(*(int*)int(a));
}
int rmdup(int *a, int length)
{
	int c,d,count=0,i;
	int b[length];
    for(c=0;c<length;c++) //For removing duplicate elements
    { 
        for(d=0;d<count;d++) 
        { 
            if(a[c]==b[d]) 
                break; 
        } 
        if(d==count) 
        { 
            b[count] = a[c]; 
            count++; 
        } 
    }
    for(i=0;i<count;i++)
    	a[i]=b[i];
    return count;
}
int main() {
	// your code goes here
	int j,k;
	int n;
	cin>>n;
	while(n!=0)
	{
		int a[n];
		int h1[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cout<<a[i];
		k=0;
		for(int i=0;i<n;i++)
		{
			int c=0;
			for(j=0;j<n;j++)
			{
				//h(a[i]) having atleast a[i] citations
				if(i!=j && a[i]<=a[j] && c<a[i])
				{
					c++;
				}
				if(c==a[i])
				{
					h1[k]=a[i];
					k++;
				}
			}
		}
		k=rmdup(h1,k);
		for(int i=0;i<k;i++)
			cout<<h1[i];
		//n-h having atmost h[j] citations
		for(int j=0;j<k;j++)
		{
			int c=0;
			for(int i=0;i<n;i++)
			{
				if(h1[j]>=a[i] && c<(n-h1[j]) )
				{
					c++;
				}
				if(c==(n-h1[j]))
				{
					cout<<h1[j]<<endl;
					break;
				}
			}
		}
		cin>>n;
	}
	return 0;
}