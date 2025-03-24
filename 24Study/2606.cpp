 #include <iostream>
 #include <vector>
 //out of bounds ?? why ??
 using namespace std;

 int cnt;
 vector<int> v[101];
 bool vis[101]={false};

 int dfs (int n){
    vis[n]=true;
    for(int i=0;i<v[n].size();i++){
      int y=v[n][i];
      if(!vis[y]){
        dfs(y);
        cnt++;
      }
    }
    return 1;
 }

 using namespace std;
  int main (){
    int c;
    int t;
    cin>>c;
    cin>>t;
    
    for(int i=0;i<t;i++){
      int a,b;
      cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
    }


    dfs(1);
    cout<<cnt<<"\n";
    
    
    
  }