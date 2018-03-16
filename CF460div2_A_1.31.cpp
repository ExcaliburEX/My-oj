#include<stdio.h>

 
int main()
{
	int i=0,n,n1,m,c,b;
	double min = 10000.0;
	scanf("%d %d", &n, &m);
	double a[n];
	n1 = n;
	while(n--){
		scanf("%d %d", &c, &b);
		a[i] = (1.0*c) / (1.0*b);i++;
	}
	
	for (int i = 0; i <n1; i++) {
		if (a[i] < min) min = a[i];
	}

	printf("%.8f\n", min*m);
	
	return 0;

}


