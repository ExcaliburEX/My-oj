#include<iostream> 
#include<set>
using namespace std;
set<int> a;

int main(){
	int N,b;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>b;
		a.insert(b);
	}
	set<int>::iterator it;
	cout<<a.size()<<endl;
	for(it=a.begin();it!=a.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}
