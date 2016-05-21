#include <iostream>

#include <bits/stdc++.h>

#define lli long long int

using namespace::std;

vector<lli> graph[10001];
lli visited[10001]={0},parent[10001]={0};

int flag=1;

void dfs(lli src){
	if(visited[src]==0){
		visited[src]=1;
		for(lli i=0;i<graph[src].size();i++){
			if(graph[src][i]!=parent[src]){
				parent[graph[src][i]]=src;
				dfs(graph[src][i]);
			}
		}
	}else{
		flag=0;
	}
}

int main(){
	lli n,m;
	cin>>n>>m;
	while(m--){
		lli a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	dfs(1);
	for(lli i=1;i<=n;i++){
		if(visited[i]==0){
			flag=0;
			break;
		}
	}
	if(flag==0){
		cout<<"NO"<<endl;
	}else{
		cout<<"YES"<<endl;
	}
	return 0;
}