/*
���һ��ֽ�����ŷ��������ϣ�Ȼ���ֽ�����±����Ϸ�����1�Σ�ѹ���ۺۺ�չ������ʱ�ۺ��ǰ���ȥ�ģ����ۺ�ͻ��ķ���ָ��ֽ���ı��档�����ֽ�����±����Ϸ���������2�Σ�ѹ���ۺۺ�չ������ʱ�������ۺۣ����ϵ������������ۺۡ����ۺۺ����ۺۡ�����һ���������N������ֽ�������±����Ϸ���������N�Σ�����ϵ��´�ӡ�����ۺ۵ķ���
���磺N=1ʱ����ӡ��
down
N=2ʱ����ӡ��
down
down
up

*/

#include<bits/stdc++.h>
void printProcess(int i,int N,bool down){
    if(i>N){
        return ;
    }
    printProcess(i+1,N,true);
    if(down)printf("down\n");
    else printf("up\n");
    printProcess(i+1,N,false);
}
void printAllFolds(int N){
    printProcess(1,N,true);
}

int main(){
    int N=4;
    printAllFolds(N);
}
