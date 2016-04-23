#include<iostream>

#include<bits/stdc++.h>

using namespace::std;

vector<long long int> graph[10001];
long long int v[10001],height[10001];
long long int maxDepthsrc=1;

long long int hght(long long int src){
	long long int mx=0;
	v[src]=1;
	for(long long int i=0;i<graph[src].size();i++){
		if(v[graph[src][i]]==0){
			mx=max(mx,hght(graph[src][i])+1);
		}
	}
	height[src]=mx;
	return mx;
}

void levl(long long int src,long long int lev,long long int maxHeight){
	v[src]=1;
	if(lev==maxHeight){
		maxDepthsrc=src;
		return;
	}
	for(long long int i=0;i<graph[src].size();i++){
		if(v[graph[src][i]]==0){
			levl(graph[src][i],lev+1,maxHeight);
		}
	}
}

int main(){
	long long int n;
	cin>>n;
	long long int k=n;
	n--;
	while(n--){
		long long int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	long long int mx=0;

	mx=max(hght(1),mx);
	
	for(long long int i=1;i<=k;i++){
		v[i]=0;
	}

	//cout<<mx<<endl;

	levl(1,0,mx);

	//cout<<maxDepthsrc<<endl;

	for(long long int i=1;i<=k;i++){
		v[i]=0;
	}

	mx=hght(maxDepthsrc);
	cout<<mx<<endl;
}