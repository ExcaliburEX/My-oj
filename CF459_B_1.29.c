#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	char name[n][1001],ip[n][16];
	char cmd[m][1001],add[m][16];
	for(i=0;i<n;i++)
		scanf("%s %s",name[i],ip[i]);
	for(i=0;i<m;i++){
		scanf("%s %s",cmd[i],add[i]);
		for(j=0;j<n;j++){
			if(!strncmp(add[i],ip[j],strlen(add[i])-1)){
				printf("%s %s #%s\n",cmd[i],add[i],name[j]);
				break;
			}
		}
	}
	return 0;
}
