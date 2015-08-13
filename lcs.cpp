#include <iostream>
#include<string.h>
using namespace std;

int l[100][100];
int max(int a, int b)
{
    return (a > b)? a : b;
}
 
int lcs(char *x, char *y, int m, int n) {
	if (m == 0 || n == 0)
	   	return 0;
	if(l[m-1][n-1] == 0) {
		if(x[m-1]==y[n-1])
			l[m-1][n-1] = lcs(x,y,m-1,n-1) +1;
		else
			l[m-1][n-1] = max(lcs(x,y,m-1,n), lcs(x,y,m,n-1));
	}
	return l[m-1][n-1];
}
int main() {
	for(int i=0;i<50;i++)
		for(int j=0;j<50;j++)
			l[i][j]=0;
	// your code goes here
	char *a = "aaababbbababbbababbbababaabbaxxxxxxyyyyyymmmdnldfafjasldfkjasldfhasl";
	char *b = "abaaabababababababababadslfhaxasdjfhkdfjhsljflskdjfsdhhdjfka";
	cout<<lcs(a, b, strlen(a),strlen(b));
	
	return 0;
}