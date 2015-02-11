#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	string t;
	cin>>s>>t;
	while(s[0]!='*' && t[0]!='*')
	{
		int i=0;
		int count=0;
		while(s[i]==t[i] && s[i]!='\0' && t[i]!='\0')
				i++;
		while(s[i]!='\0' && t[i]!='\0')
		{
			if(s[i]!=t[i])
			{
				while(s[i]!=t[i] && s[i]!='\0' && t[i]!='\0')
					i++;
				count++;
			}
			if(s[i]!='\0' && t[i]!='\0')
				i++;
		}
		cout<<count<<endl;
		cin>>s>>t;
	}
	return 0;
}