#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int main(){
	int t;
	cin>>t;
	while(t){
		t--;
		string s;
		cin>>s;
		int l=s.length();
		if(l==3){
			cout<<s[1]<<endl;
			continue;
		}
		stack<string> ch;
		stack<char> expr;
		for(int i=0;i<l;i++){
			if(s[i]!='(' && s[i]!=')' && s[i]!='+' && s[i]!='^' && s[i]!='/' && s[i]!='*' && s[i]!='-'){
				string p;
				p.append(1,s[i]);
				ch.push(p);
			}else if(s[i]!=')'){
				expr.push(s[i]);
			}else{
				string t1,t2;
				t1=ch.top();
				ch.pop();
				t2=ch.top();
				ch.pop();
				string s1="";
				string op;
				op.append(1,expr.top());
				expr.pop();
				expr.pop();
				s1.append(t2);
				s1.append(t1);
				s1.append(op);
				ch.push(s1);
			}
		}
		cout<<ch.top()<<endl;
		ch.pop();
	}
	return 0;
}