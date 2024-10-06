#include <stdio.h>

void init();
int find(int v);
int _union(int v, int u);
int n,m;
int p[1000001];


int main(){ 
    scanf("%d %d", &n, &m);
    init();
    for(int i=0;i<m;i++){
        int a,b;
        int q;
        scanf("%d %d %d",&q,&a,&b);
        if(q==0){
            _union(a,b);
        }
        else if (q==1){
            if(find(a)==find(b)){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    

}

void init(){
    for(int i=0;i<=n;i++){
        p[i]=i;
    }
}

int find(int v){
    if(v==p[v])
        return v;
    return p[v]=find(p[v]);
}

int _union(int v, int u){
    v = find(v), u=find(u);
    if(v==u){
        return 0;
    }

    if(v<u){
        p[v]=u;
    }
    else
        p[u]=v;
    return 1;
}