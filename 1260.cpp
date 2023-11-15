#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<vector<int> > vec(1001);
vector<bool> visited(1001, false);

void bfs(int start) {
    visited[start]=true;

    queue<int> q;
    q.push(start); // 첫 노드를 queue에 삽입
    visited[start] = true; // 첫 노드를 방문 처리

    
    while(!q.empty()){
        int cur=q.front();
        visited[cur]=true;
        cout<<q.front()<<" ";
        q.pop();
        for(int i=0;i<vec[cur].size();i++){
            if(!visited[vec[cur][i]]){
                q.push(vec[cur][i]);
                visited[vec[cur][i]]=true;

            }
        }
    
    }

    
}



int main (){
    int n,m,v;
    cin>>n>>m>>v; //정점,간선,탐색시작번호
    for (int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for(int i=0;i<m;i++){
        sort(vec[i].begin(),vec[i].end());
    }
    
    
    for(int i=0;i<n;i++){
        for (int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<"\n";
    }

    bfs(v);



    
}
