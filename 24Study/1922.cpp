//1922
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int n, m;
int p[100001];
void init();
void join(int a, int b);
int bfs (vector<vector<pair<int,int>>>, int start, int end, int w);
int find(int a);

int main()
{
    cin >> n; // 컴퓨터 수
    cin >> m; // 선의 수
    vector<vector<pair<int, int> > > v(m + 1);
    init();

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b,c)); //{b,c} 이런식으로 push 하는거 왜 안되니
        v[b].push_back(make_pair(a,c));
        

    }
        

}

void init(){
    for(int i=0;i<n+1;i++){
        p[i]=i;
    }
}

int find (int a){
    if(a==p[a]){
        return a;
    }
    return a=find(p[a]);
}

void join (int a, int,b){
    a=find(a);
    b=find(b);
    
    
}