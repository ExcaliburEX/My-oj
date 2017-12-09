/*
题目描述 Description
一块N x N（1<=N<=10）正方形的黑白瓦片的图案要被转换成新的正方形图案。写一个程序来找出将原始
图案按照以下列转换方法转换成新图案的最小方式：
#1：转90度：图案按顺时针转90度。
#2：转180度：图案按顺时针转180度。
#3：转270度：图案按顺时针转270度。
#4：反射：图案在水平方向翻转（形成原图案的镜像）。
#5：组合：图案在水平方向翻转，然后按照#1-#3之一转换。
#6：不改变：原图案不改变。
#7：无效转换：无法用以上方法得到新图案。
如果有多种可用的转换方法，请选择序号最小的那个。

输入描述 Input Description
第一行：	单独的一个整数N。
第二行到第N+1行：	N行每行N个字符（不是“@”就是“-”）；这是转换前的正方形。
第N+2行到第2*N+1行：	N行每行N个字符（不是“@”就是“-”）；这是转换后的正方形。
输出描述 Output Description
单独的一行包括1到7之间的一个数字（在上文已描述）表明需要将转换前的正方形变为转换后的正方形的
转换方法。

样例输入 Sample Input
3
@-@
---
@@-
@-@
@--
--@

样例输出 Sample Output
1

数据范围及提示 Data Size & Hint
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
    return 1;//相等 
}
int compare_pattern2_p2(){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(pattern2[i][j]!=p2[i][j]) return 0;//不相等 
        }
    } 
    return 1;//相等 
}
int compare_pattern_pattern2(){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(pattern[i][j]!=pattern2[i][j]) return 0;//不相等 
        }
    } 
    return 1;//相等 
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
    revolve90_pattern_p1();//旋转90度

    if (compare_pattern2_p1()){
        printf("1");
        return 0;
    }
    revolve90_p1_p2();//旋转180度 
    if (compare_pattern2_p2()){
        printf("2");
        return 0;
    }
    revolve90_p2_p1();//旋转270度 
    if (compare_pattern2_p1()){
        printf("3");
        return 0;
    }
    reflect();//反射 
    
    if (compare_pattern2_p1()){
       printf("4");
       return 0;
    }
    revolve90_p1_p2();//反射+旋转90度 
    if (compare_pattern2_p2()){
        printf("5");
        return 0;
    }
    revolve90_p2_p1();//反射+旋转180度 
    if (compare_pattern2_p1()){
        printf("5");
        return 0;
    }
    revolve90_p1_p2();//反射+旋转270度 
    if (compare_pattern2_p2()){
        printf("5");
        return 0;
    }
    if(compare_pattern_pattern2()){//不改变 
        printf("6");
        return 0;
    }
    printf("7");//无效 
    
    return 0;
}
