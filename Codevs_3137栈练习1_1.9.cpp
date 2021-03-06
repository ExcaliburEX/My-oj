/*
题目描述 Description
给定一个栈(初始为空,元素类型为整数,且小于等于100),只有两个操作:入栈和出栈。先给出这些操作，请输出最终栈的栈顶元素。  操作解释：1表示入栈，2表示出栈

输入描述 Input Description
N(操作个数)

N个操作(如果是入栈则后面还会有一个入栈元素)

具体见样例(输入保证栈空时不会出栈)

输出描述 Output Description
最终栈顶元素，若最终栈空，输出”impossible!”(不含引号)

样例输入 Sample Input
3

1 2

1 9

2

样例输出 Sample Output
2

数据范围及提示 Data Size & Hint
对于100%的数据  N≤1000 元素均为正整数且小于等于100



*/
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int s[1000],top=0;

void pop(){
    top--;
}

int push(int k){
    top++;
    s[top]=k;
}

int main(){
    int n,a,b;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==1){
            cin>>b;
            push(b);
        }
        if(a==2){
            pop();
        }
    }
    if(!top)cout<<"Impossible!";
    else cout<<s[top];
    return 0;
}
