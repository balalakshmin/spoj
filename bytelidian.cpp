#include <iostream>
#include<stdlib.h>
using namespace std;

long long *dp;
long long max(long long a, long long b) {
	return a>b?a:b;
}
long long dpf(long long n) {
	long long ans;
	if(n>=1000000 || (n<1000000 && dp[n]==-1)) {
		if(n<=1) {
			ans = n;
			if(n<1000000)
				dp[n] = ans;
		}
		else {
			ans = max(n, dpf(n/2)+dpf(n/3)+dpf(n/4));
			if(n<1000000)
				dp[n] = ans;
		}
	}
	if(n<1000000)
		return dp[n];
	else 
		return ans;
}
int main() {
	// your code goes here
	long long n;
	while(cin>>n) {
		dp = (long long*) malloc ((1000000)*sizeof(long long));			
		for(int i=0; i<1000000; i++) {
			dp[i] = -1;
		}
		cout<<dpf(n)<<endl;
	}
	return 0;
} 