#include <iostream>
#include<stack>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	stack<int> s;
	int x,l,r;
	long long area, maxarea=0;
	while(n>0) {
		maxarea=0;
		long long h[n]={0};
		for(int i=0; i<n; i++) {
			cin>>h[i];
		}
		int i=0;
		while(i<n) {
			if(s.empty() || h[s.top()]<=h[i]) {
				s.push(i++);
			}
			else {
				x = s.top();
				s.pop();
				area = h[x]*(s.empty()?i:i-s.top()-1); 
				maxarea = area>maxarea?area:maxarea;
			}
		}
		while(!s.empty()) {
			x = s.top();
			s.pop();
			area = h[x]*(s.empty()?i:i-s.top()-1); 
			maxarea = area>maxarea?area:maxarea;
		}
		cout<<maxarea<<endl;
		cin>>n;
	}
	return 0;
}