#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	long n,m;
	while(t>0) {	
		cin>>n>>m;
		if(n>m) {
			m%2==0?cout<<"U":cout<<"D";
			cout<<endl;
		}
		else {
			n%2==0?cout<<"L":cout<<"R";
			cout<<endl;
		}
		t--;
	}
	return 0;
}