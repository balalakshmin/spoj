#include <iostream>
#include<string.h>
using namespace std;

int sumofdig(string num)
{
	int s = 0;
	int l = num.length();
	for(int i=0;i<l;i++)
	{
		s += (int)(num[i]-'0');
	}
	//cout<<"sum of dig"<<s;
	return s;
}
bool divby7(string num)
{
	int arr[]={1,3,2,6,4,5};
	int n,s=0;
	int l=num.length();
	for(int j=0,i=l-1;i>=0;i--,j++)
	{
		if(j==6) j=0;
		n = int(num[i]-'0');
		s += n*arr[j];
	}
	//cout<<"div by 7 "<<s;
	if(s%7==0) return true;
	return false;
}
bool divby4or25(string num,int &by4, int &by25)
{
	int l = num.length();
	int n = (int)(num[l-2]-'0')*10 + (int)(num[l-1]-'0');
	if(n%4==0) by4 = 1;
	if(n%25==0) by25 = 1;
}

int main() {
	// your code goes here
	//4,9,7 => div by 252
	//3,25,7 => div by 525
	int t;
	long s;
	cin>>t;
	string num;
	while(t--)
	{
		int by4=0,by25=0;
		cin>>num;
		s = sumofdig(num);
		divby4or25(num,by4,by25);
		//cout<<"by 4 "<<by4<<" by 25 "<<by25<<endl;
		if(s%9==0 && divby7(num) && by4==1)
			cout<<"Yes ";
		else cout<<"No ";
		if(s%3==0 && divby7(num) && by25==1)
			cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
	return 0;
}