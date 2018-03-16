
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
#define INF 10000000
#define maxn 3000010
int qd;//到那个点的距离 
int dis[maxn];
int vis[maxn];
int n,m,q,head[maxn];
struct node{
    int u,v,w,next;
}e[maxn];
void add(int u,int v,int w,int i){
    e[i].u=u;//编号为i的对象为u
    if(u==qd) dis[v]=w;//qd到各点的距离//直接入队 
    e[i].v=v;//编号为i的u的对象为v 
    e[i].w=w;//编号为i的u->v 的距离是w
    e[i].next=head[u];//上一个编号 
    head[u]=i; //记录现在编号
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
        //if(u==qd) break;//没找到路   
        vis[u]=1;//标记已走过，无论有没有找到路
        for(int l=head[u];l;l=e[l].next){//当前编号往前找，一直找到0为止，0前再无有效编号 
            if(dis[e[l].v]>dis[e[l].u]+e[l].w){//更新最短路径
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
    printf("%d\n",dis[v]);//输出qd->v的最短路径 
    return 0;
}
