#include <iostream>
#include <bits/stdc++.h>

using namespace::std;

int arr[2001][2001]={0};

int main(){
	long long int t;
	cin>>t;
	while(t){
		t--;
		string a,b;
		cin>>a;
		cin>>b;
		//works in n^2 
		long long int l1=a.length();
		long long int l2=b.length();
		long long int maxlen=0;
		int i,j,x,y,z;
		for(i=0;i<=l1;i++){
			arr[i][0]=i;
		}
		for(j=0;j<=l2;j++){
			arr[0][j]=j;
		}
		for(i=1;i<=l1;i++){
			for(j=1;j<=l2;j++){
				if(b[j-1]==a[i-1]){
					arr[i][j]=arr[i-1][j-1];
				}else{
					x=arr[i][j-1];
					y=arr[i-1][j];
					z=arr[i-1][j-1];
					int min=y;
					if(x<y){
						min=x;
					}
					if(min>z){
						min=z;
					}
					arr[i][j]=min+1;
				}
			}
		}
		cout<<arr[l1][l2]<<endl;
	}
	return 0;
}