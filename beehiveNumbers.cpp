#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

/*1 7 19 37 61 91
0 6 12 18 24 30 
0 1  2  3  4  5

a'+ (n-1)d' = d
a' = 0
d' = 6

nth term = (n-1)th term + (6*(n-1))

nth term = 1 + Summation (6*(i-1)) : i=1 to n
		 = 1 + 6*(n*(n+1)/2) - 6*n
		 = 1 + 3*(n^2 + n) - 6*n
		 = 1 + 3n^2 - 3*n

nth term = 3n^2 - 3n + 1
*/

#define lli long long int 

int main(){
	lli n;
	cin>>n;
	while(n!=-1){
		if(sqrt(9-12*(1-n))-(lli)(sqrt(9-12*(1-n)))!=0){
			cout<<"N"<<endl;
		}else if((3+((lli)sqrt(9-12*(1-n))))%6==0){
			cout<<"Y"<<endl;
		}else{
			cout<<"N"<<endl;
		}
		cin>>n;
	}	
	return 0;
}