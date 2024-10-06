#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int a[25][25];
bool vis[25][25]={false};
vector<int> vc;


int dfs(int x,int y,int c){
    vis[x][y]=true;
    c++;
    if(!vis[x][y+1]&&a[x][y+1]==1){
        c=dfs(x,y+1,c);
    }
    if(!vis[x+1][y]&&a[x+1][y]==1){
        c=dfs(x+1,y,c);
    }
    if(!vis[x-1][y]&&a[x-1][y]==1){
        c=dfs(x-1,y,c);
    }
    if(!vis[x][y-1]&&a[x][y-1]==1){
        c=dfs(x,y-1,c);
    }
    return c;
}

int main (){
    int n;
    cin>>n;
    string s;
    
    

    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<s.length();j++){
            if(s[j]=='1'){
                a[i][j]=1;
            }
            else{
                a[i][j]=0;
            }
        }
    }
    int cnt=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==1){
                if(!vis[i][j]){
                    vc[cnt]=dfs(i,j,0);
                    cnt++;
                }
            }
                    
        }
    }

    cout<<cnt<<"\n";   
    sort(vc.begin(),vc.end());
    for(int i=0;i<cnt;i++){
        cout<<vc[i]<<"\n";
    }
}