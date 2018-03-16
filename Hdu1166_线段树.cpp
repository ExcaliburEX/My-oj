#include <bits/stdc++.h>
using namespace std;

int t, n, p = 0;
const int N = 100000+10;
struct segTree{
    int l, r;
    int v;
}T[N*4];

void Build(int l, int r, int k){
    T[k].l = l, T[k].r = r;
    if(l == r){
        scanf("%d", &T[k].v);
        return;
    }
    int mid = (l+r)/2;
    Build(l, mid, k*2);
    Build(mid+1, r, k*2+1);
    T[k].v = T[k*2].v + T[k*2+1].v;
}

void Update(int c, int v, int k){
    if(T[k].l == T[k].r && T[k].l == c){
        T[k].v += v;
        return;
    }
    int mid = (T[k].l+T[k].r)/2;
    if(c <= mid) Update(c, v, k*2);
    else Update(c, v, k*2+1);
    T[k].v = T[k*2].v + T[k*2+1].v;
}

int ans;
void Query(int l, int r, int k){
    if(l > T[k].r || r < T[k].l){
        return;
    }
    if(l <= T[k].l && r >= T[k].r){
        ans += T[k].v;
        return;
    }
    int mid = (T[k].l+T[k].r)/2;
    if(r < mid) Query(l, r, k*2);
    else if(l > mid) Query(l, r, k*2+1);
    else{
        Query(l, mid, k*2);
        Query(mid+1, r, k*2+1);
    }
}

int main(){
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        Build(1, n, 1);
        char op[10];
        printf("Case %d:\n", ++p);
        while(scanf("%s", op), op[0] != 'E'){
            int u, v;
            scanf("%d%d", &u, &v);
            if(op[0] == 'A'){
                Update(u, v, 1);
            }
            else if(op[0] == 'S'){
                Update(u, -v, 1);
            }
            else{
                ans = 0;
                Query(u, v, 1);
                printf("%d\n", ans);
            }
            for(int i = 1; i < 20; i++){
                printf("T[%d].l = %d, T[%d].r = %d, T[%d].v = %d\n", i, T[i].l, i, T[i].r, i, T[i].v);
            }
        }
    }
}
