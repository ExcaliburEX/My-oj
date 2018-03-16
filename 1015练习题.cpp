#include<iostream>
#include<cstring>

int main(){
	using namespace std;
	
	char a[1000],b[10000],c[10000];
	double d[10000]={0},changshu,feichangshu;
	int i=0,j,k=0,num,flag=0,m=0,count=0;
	cin >> a;
	num=strlen(a);
	for(j=0;j<num;j++){
		
		if(a[j]>='0'&&a[j]<='9'){
			d[i]=d[i]*10+(a[j]-48);
		}
		else if(a[j]=='+'){
			b[flag++]=a[j];
			i++;
		}
		else if(a[j]=='-'){
			b[flag++]=a[j];
			i++;
		}
		else if(a[j]>='a'&&a[j]<='z'){
			c[i]=a[j];
			count=i;
		}
		else if(a[j]=='='){
			m=j;
			i++;
			b[flag]='-';
			break;
			
		}
	}
		
		for(j=j;j<num;j++){
				if(j==m+1&&a[j]!='-')	flag++;//重点 
		
		
			if(a[j]>='0'&&a[j]<='9'){
			d[i]=d[i]*10+(a[j]-48);
		}
		else if(a[j]=='+'){
			b[flag++]='-';					
			i++;
		}
		else if(a[j]=='-'){
			b[flag++]='+';
				
			if(j!=m+1)     //重点 
				i++;
		}
		else if(a[j]>='a'&&a[j]<='z'){
			c[i]=a[j];
			count=i;
		}
	
		
		
	}
	for(k=0;k<=i;k++){
		if(c[k]==0&&b[k]=='-') changshu-=d[k];
		else if(c[k]==0) changshu+=d[k];
	else if(b[k]=='+') feichangshu +=d[k];
	else if(b[k]=='-') feichangshu -=d[k];
	else feichangshu +=d[k];
	
}

 cout << c[count] << "=";
	if(changshu/feichangshu!=0)
	printf("%.3f",-changshu/feichangshu);
	else printf(".3f",changshu/feichangshu);
	cout<< endl;
	for(j=0;j<num;j++){
		cout << b[j] << " ";
	} 
	cout << endl;
	for(j=0;j<num;j++){
		cout << c[j] << " ";
	} 
	cout << endl;
	for(j=0;j<num;j++){
		cout << d[j] << " ";
	} 
	cout << endl;
	
}


