#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,c[16],m[16];
	float totc,marks;
	char g;
	float gpa;
	cin>>t;
	while(t--)
	{
		cin>>n;
		totc=0;marks=0;
		for(int i=0;i<n;i++)
		{
			
			cin>>c[i];
			cin>>g;
			switch(g)
			{
				case 'S':m[i]=10;
						break;
				case 'A':m[i]=9;
						break;
				case 'B':m[i]=8;
						break;
				case 'C':m[i]=7;
						break;
				case 'D':m[i]=6;
						break;
				case 'E':m[i]=5;
						break;
			}
			//cout<<c[i]<<" "<<m[i]<<endl;
			totc += c[i];
			marks += m[i]*c[i];
		}
		//cout<<marks<<" "<<totc;
		
		gpa = marks/totc;
		printf("%.2f\n",gpa);
	}
	
	return 0;
}