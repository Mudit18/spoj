#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

#define lli long long int 

lli cnt=0;

void merge(lli a[],lli start,lli mid,lli end){
	lli b[end-start+1];
	lli k=0;
	lli i,j;
	for(i=start,j=mid+1;i<=mid && j<=end;){
		if(a[i]<=a[j]){
			b[k++]=a[i++];
		}else{
			b[k++]=a[j++];
			cnt+=(mid-i+1);
		}
	}
	while(i<=mid){
		b[k++]=a[i++];
	}
	while(j<=end){
		b[k++]=a[j++];
	}
	for(lli k=0,i=start;k<end-start+1;k++,i++){
		a[i]=b[k];
	}
}

void mergeSort(lli a[],lli start,lli end){
	if(start<end){
		lli mid=(start+end)/2;
		mergeSort(a,start,mid);
		mergeSort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}

int main(){
	lli t;
	cin>>t;
	while(t--){
		cnt=0;
		lli n;
		cin>>n;
		lli a[n];
		for(lli i=0;i<n;i++){
			cin>>a[i];
		}
		mergeSort(a,0,n-1);
		cout<<cnt<<endl;
	}
	return 0;
}