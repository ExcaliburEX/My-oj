/*
��Ŀ���� Description
����������֪����ÿһ�����Ǻ���һֻUFO����ЩUFOʱ�����ռ������ϵ��ҳ�֧���ߡ����ҵ��ǣ����ǵķɵ�ÿ�γ��ж�ֻ�ܴ���һ��֧���ߡ���ˣ�����Ҫ��һ�ִ����ķ�������ЩС����ǰ֪��˭�ᱻ���Ǵ��ߡ�����Ϊÿ����������һ�����֣�ͨ����Щ�������������С���ǲ��Ǳ����ߵ��Ǹ��ض���С�飨����Ϊ��˭����Щ����ȡ�������أ�����������δ����ϸ�ڻ�����������㣻���������дһ������ͨ��С���������������������С���Ƿ��ܱ��ǿ����Ǻ����UFO���ߡ�

����С�������������������з�ʽת����һ�����֣����յ����־���������������ĸ�Ļ������С�A����1����Z����26�����磬��USACO��С�����21*19*1*3*15=17955�����С������� mod 47�������ǵ�����mod 47,��͵ø������С����Ҫ׼���ñ����ߣ�����ס��a mod b����a����b��������34 mod 10����4��

����д��һ�����򣬶�����������С���������������ķ����ܷ��������ִ�������������ܴ��䣬�������GO�������������STAY����С����������������û�пո�����һ����д��ĸ��������6����ĸ����

�������� Input Description
��1�У�һ������Ϊ1��6�Ĵ�д��ĸ������ʾ���ǵ����֡�

��2�У�һ������Ϊ1��6�Ĵ�д��ĸ������ʾ��������֡�

������� Output Description
��һ�У�������GO����STAY����

�������� Sample Input
����������1��

COMETQ

HVNGAT

����������2��

ABSTAR

USACO

������� Sample Output
���������1��

GO

���������2��

STAY

���ݷ�Χ����ʾ Data Size & Hint



*/




#include<stdio.h>
 int main(){
 	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 	int i,j;
 	int c=1,d=1;
	 char a1[6],b[6];
 	scanf("%s \n%s",a1,b);

 	for(i=0;i<6;i++){
 		for(j=0;j<26;j++){
 			if(a1[i]==a[j]){		
 				c*=(j+1);
			 }	
			 	if(b[i]==a[j]){		
 				d*=(j+1);
			 }		
		 }
	 }
	 
	 
	 
	 
 	if(c%47==d%47){
 		printf("GO");
	 }else{
	 	 printf("STAY");
	 }
 
 
 	return 0;
 	
 	
 }