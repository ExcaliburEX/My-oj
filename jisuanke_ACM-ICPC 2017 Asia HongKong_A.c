#include<stdio.h>
#include<math.h>
#define INF 1000000000
int main(){
	long x1,y1,z;
	double x,y;
	int F,T,F1=INF,n;
	scanf("%d",&T);
	while(T--){
		scanf("%d %ld",&n,&z);
	F1=INF;
	for(y=(z-1)*1.0;y>=1;y--){
		for(x=y;x>=1;x--){
			F=floor(fabs(pow(x,n)+pow(y,n)-pow(z,n))+0.5);
			if(F1>F){
				F1=F;
				x1=floor(x+0.5);
				y1=floor(y+0.5);
			}
		}
	}
	printf("%ld %ld %d\n",x1,y1,F1);
}
	return 0;
} 
