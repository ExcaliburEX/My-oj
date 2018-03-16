#include<iostream>
using namespace std;

int a[101];
int main(){
	int n;
	int b,c;
	b=c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0)b+=a[i];
		else c+=a[i];
	}
	
	cout<<(b-c);
	return 0;
} 
