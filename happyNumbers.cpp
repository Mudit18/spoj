#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int

int main(){
	lli n;
	cin>>n;
	lli steps=-1;
	set <lli> nums;
	while(1){
		lli s=nums.size();
		nums.insert(n);
		if(s==nums.size()){
			break;
		}
		lli m=n;
		n=0;
		while(m>0){
			n+=((m%10)*(m%10));
			m=m/10;
		}
		steps++;
	}
	if(n!=1){
		cout<<-1;
	}else{
		cout<<steps;
	}
	return 0;
}