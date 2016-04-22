#include <iostream>

#include <bits/stdc++.h>

using namespace::std;

long long int num(string s){
	long long int i=0;
	long long int num=0;
	while(i<s.length()){
		num=num*10;
		num+=(s[i]-'0');
		i++;
	}
	return num;
}

int main(){
	long long int t;
	cin>>t;
	while(t){
		t--;
		string s;
		cin>>s;
		long long int a=0,b=0,sum=0;
		int flag=0;
		string strin="machula";
		if(s.find('m')==-1){
			a=num(s);
		}else{
			flag=1;
		}
		cin>>s;
		cin>>s;
		if(s.find('m')==-1){
			b=num(s);
		}else{
			flag=2;
		}
		cin>>s;
		cin>>s;
		if(s.find('m')==-1){
			sum=num(s);
		}else{
			flag=3;
		}
		switch(flag){
			case 1:
				a=sum-b;
				cout<<a<<" + "<<b<<" = "<<sum<<endl;
				break;
			case 2:
				b=sum-a;
				cout<<a<<" + "<<b<<" = "<<sum<<endl;
				break;
			case 3:
				sum=a+b;
				cout<<a<<" + "<<b<<" = "<<sum<<endl;
				break;
		}
	}
	return 0;
}