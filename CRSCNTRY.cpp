#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,i=0,j=0,m,n;
	int card[1001][2001];
	cin>>t;
	while(t--) {  //for data sets
		while(1) {  //for lines in data sets
			cin>>a;
			if(a==0) 
				break;
			else {   
				card[i][0] = a;
				j=1;
				while(1) {   //for numbers in data sets
					cin>>b;
					if(b==0)
						break;
					else {
						card[i][j] = b;
						j++;
					}
				}
			}
			i++;
		
		}
		}
		n=i;
		m=j;
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++)
				cout<<card[i][j];
			cout<<endl;
		
		}

	return 0;
}