#include <bits/stdc++.h>
using namespace std;

int n, tot;
int pre[10001],in[10001];

void xx(int l, int r){
    if(l > r) return;
    tot++;
    if(l == r){
        printf("%d ", in[l]);
        return;
    }
    for(int i = l; i <= r; i++)
        if(in[i] == pre[tot]){
            xx(l, i-1);
            xx(i+1, r);
            break;
        }
    printf("%d", pre[tot]);
    if(tot > 1)
        printf(" ");
}

int main()
{
    while(scanf("%d", &n) == 1)
    {
        for(int i = 1; i <= n; i++)
            scanf("%d", &pre[i]);
        for(int i = 1; i <= n; i++)
            scanf("%d", &in[i]);
        tot = 0;
        xx(1, n);
        printf("\n");
    }
}
