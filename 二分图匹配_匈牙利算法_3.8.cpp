//顶点编号从0开始的
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 510;
int uN, vN;        //u,v的数目，使用前面必须赋值
int g[MAXN][MAXN]; //邻接矩阵
int linker[MAXN];
bool used[MAXN];
int temp;
bool dfs(int u)
{
    if (u!=temp) printf("重新给点%d寻找匹配\n",u);
    for (int v = 0; v < vN; v++)
        if (g[u][v] && !used[v])
        {
            used[v] = true;
            if (linker[v] == -1 || dfs(linker[v]))
            {
                printf("给点%d匹配到了点%d\n",u,v);
                linker[v] = u;
                return true;
            }
        }
    printf("失败，没有再找到%d的匹配\n",u);
    return false;
}
int hungary()
{
    int res = 0;
    memset(linker, -1, sizeof(linker));
    for (int u = 0; u < uN; u++)
    {
        printf("开始给点%d进行匹配\n",u);
        //temp=u;
        memset(used, false, sizeof(used));
        if (dfs(u))
            res++;
    }
    return res;
}
int main()
{
    while (~scanf("%d%d", &uN, &vN))
    {
        memset(g, 0, sizeof(g));
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            int u, v;
            scanf("%d%d", &u, &v);
            g[u][v] = 1;
        }
        printf("%d\n", hungary());
    }
}