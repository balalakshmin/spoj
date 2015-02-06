#include <iostream>
#include<math.h>
using namespace std;

int main() {
	long t,a,b;
	cin>>t;
	while(t--) {
		cin>>a>>b;
		int count = (long)sqrt(b)-(long)sqrt(a);
		if(((long)sqrt(a)*(long)sqrt(a)==a))
			count++;
		if(a<=2)
			count++;
		if(a<=1)
			count--;
		if(a==1 && b==1)
			count=0;
		cout<<count<<"\n";
	}
	return 0;
}