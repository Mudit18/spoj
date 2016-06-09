//remove new lines and spaces to shorten the size
#include<iostream>
#include<bits/stdc++.h>
using namespace::std;
#define lli long long
int main(){
	lli t;
	cin>>t;
	while(t--){
		lli a,b;
		string a_string;
		cin>>a_string;
		a=a_string[a_string.size()-1]-'0';
		cin>>b;
		if(b==0){
			cout<<1<<endl;
			continue;
		}
		if(a==0||a==1||a==5||a==6){
			cout<<a<<endl; continue;
		}
		switch(a){
			case 2:
				if(b%4==0){
					cout<<(lli)pow(8,4)%10;
				}else{
					cout<<(lli)pow(8,(b%4))%10;
				}
				break;
			case 3:
				cout<<(lli)pow(3,(b%4))%10;
				break;
			case 4:
				cout<<(lli)pow(4,2-b%2)%10;
				break;
			case 7:
				cout<<(lli)pow(7,(b%4))%10;
				break;
			case 8:
				if(b%4==0){
					cout<<(lli)pow(8,4)%10;
				}else{
					cout<<(lli)pow(8,(b%4))%10;
				}
				break;
			case 9:
				cout<<(lli)pow(9,(b%2))%10;
				break;
		}
		cout<<endl;
	}
	return 0;
}