#include <iostream>
using namespace::std;

int main(){
	int n;
	n=0;
	while(n!=42){
		cin>>n;
		if(n!=42){
			cout<<n<<"\n";
		}
		else{
			break;
		}
	}
	return 0;
}