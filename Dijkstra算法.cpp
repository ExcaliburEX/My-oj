
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
#define INF 10000000
#define maxn 3000010
int qd;//���Ǹ���ľ��� 
int dis[maxn];
int vis[maxn];
int n,m,q,head[maxn];
struct node{
    int u,v,w,next;
}e[maxn];
void add(int u,int v,int w,int i){
    e[i].u=u;//���Ϊi�Ķ���Ϊu
    if(u==qd) dis[v]=w;//qd������ľ���//ֱ����� 
    e[i].v=v;//���Ϊi��u�Ķ���Ϊv 
    e[i].w=w;//���Ϊi��u->v �ľ�����w
    e[i].next=head[u];//��һ����� 
    head[u]=i; //��¼���ڱ��
}
void djc(int u){
    dis[u]=0;vis[u]=1;
    for(int i=2;i<=n;i++){
        int m=INF;
        for(int j=1;j<=n;j++){
            if(!vis[j]&&dis[j]<m){
                u=j;
                m=dis[j];
            }    
        }
        //if(u==qd) break;//û�ҵ�·   
        vis[u]=1;//������߹���������û���ҵ�·
        for(int l=head[u];l;l=e[l].next){//��ǰ�����ǰ�ң�һֱ�ҵ�0Ϊֹ��0ǰ������Ч��� 
            if(dis[e[l].v]>dis[e[l].u]+e[l].w){//�������·��
               dis[e[l].v]=dis[e[l].u]+e[l].w;
            }
        }
        
    }
}
int main()
{
    int m,u,v,x,y,z;
    memset(dis,127,sizeof dis);
    scanf("%d%d%d%d",&n,&m,&qd,&v);
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&x,&y,&z);
        add(x,y,z,i);
        add(y,x,z,i+m);
    }
    djc(qd);
    printf("%d\n",dis[v]);//���qd->v�����·�� 
    return 0;
}
