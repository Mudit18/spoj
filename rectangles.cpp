#include<iostream>
#include<bits/stdc++.h>

using namespace::std;

int main(){
	long long int n;
	cin>>n;
	long long int count=0;
	long long int i=1;
	while(((n/i)-(i-1)) > 0){
		count+=((n/i)-(i-1));
		i++;
	}
	cout<<count;
}