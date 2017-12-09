/*
��Ŀ���� Description
һ��N x N��1<=N<=10�������εĺڰ���Ƭ��ͼ��Ҫ��ת�����µ�������ͼ����дһ���������ҳ���ԭʼ
ͼ������������ת������ת������ͼ������С��ʽ��
#1��ת90�ȣ�ͼ����˳ʱ��ת90�ȡ�
#2��ת180�ȣ�ͼ����˳ʱ��ת180�ȡ�
#3��ת270�ȣ�ͼ����˳ʱ��ת270�ȡ�
#4�����䣺ͼ����ˮƽ����ת���γ�ԭͼ���ľ��񣩡�
#5����ϣ�ͼ����ˮƽ����ת��Ȼ����#1-#3֮һת����
#6�����ı䣺ԭͼ�����ı䡣
#7����Чת�����޷������Ϸ����õ���ͼ����
����ж��ֿ��õ�ת����������ѡ�������С���Ǹ���

�������� Input Description
��һ�У�	������һ������N��
�ڶ��е���N+1�У�	N��ÿ��N���ַ������ǡ�@�����ǡ�-����������ת��ǰ�������Ρ�
��N+2�е���2*N+1�У�	N��ÿ��N���ַ������ǡ�@�����ǡ�-����������ת����������Ρ�
������� Output Description
������һ�а���1��7֮���һ�����֣���������������������Ҫ��ת��ǰ�������α�Ϊת����������ε�
ת��������

�������� Sample Input
3
@-@
---
@@-
@-@
@--
--@

������� Sample Output
1

���ݷ�Χ����ʾ Data Size & Hint
*/



#include<stdio.h>
char pattern[10][10],p1[10][10],p2[10][10],pattern2[10][10];
int n;

int compare_pattern2_p1(){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(pattern2[i][j]!=p1[i][j]) return 0;
        }
    } 
    return 1;//��� 
}
int compare_pattern2_p2(){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(pattern2[i][j]!=p2[i][j]) return 0;//����� 
        }
    } 
    return 1;//��� 
}
int compare_pattern_pattern2(){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(pattern[i][j]!=pattern2[i][j]) return 0;//����� 
        }
    } 
    return 1;//��� 
}

void revolve90_pattern_p1(){ 
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            p1[j][n-i-1] = pattern[i][j];
        }
    }
}
void revolve90_p1_p2(){ 
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            p2[j][n-i-1] = p1[i][j];
        }
    }
}
void revolve90_p2_p1(){ 
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            p1[j][n-i-1] = p2[i][j];
        }
    }
}

void reflect(){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            p1[i][j] = pattern[i][n-j-1];
        }
    }
}
int main(){

    int i,j;
    scanf("%d\n",&n);
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%c",&pattern[i][j]);
        }
        scanf("\n");
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%c",&pattern2[i][j]);
        }
        scanf("\n");
    }
    revolve90_pattern_p1();//��ת90��

    if (compare_pattern2_p1()){
        printf("1");
        return 0;
    }
    revolve90_p1_p2();//��ת180�� 
    if (compare_pattern2_p2()){
        printf("2");
        return 0;
    }
    revolve90_p2_p1();//��ת270�� 
    if (compare_pattern2_p1()){
        printf("3");
        return 0;
    }
    reflect();//���� 
    
    if (compare_pattern2_p1()){
       printf("4");
       return 0;
    }
    revolve90_p1_p2();//����+��ת90�� 
    if (compare_pattern2_p2()){
        printf("5");
        return 0;
    }
    revolve90_p2_p1();//����+��ת180�� 
    if (compare_pattern2_p1()){
        printf("5");
        return 0;
    }
    revolve90_p1_p2();//����+��ת270�� 
    if (compare_pattern2_p2()){
        printf("5");
        return 0;
    }
    if(compare_pattern_pattern2()){//���ı� 
        printf("6");
        return 0;
    }
    printf("7");//��Ч 
    
    return 0;
}
