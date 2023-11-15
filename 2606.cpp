 #include <iostream>
 #include <vector>
 //out of bounds ?? why ??
 using namespace std;

 int cnt;
 int vis[101];
 vector<vector<int> > v;
 int dfs (int n){
  if(!v[n][0]){ 
    return 0;
  }
  vis[n]=1;
  cout<<"\nv["<<n<<"] : ";
  for(int i=0;i<v[n].size();i++){
    if(!vis[v[n][i]]){
        vis[v[n][i]]=1;
        ++cnt;
        dfs(v[n][i]);
    }
    cout<<v[n][i]<<" ";
    //cout<<"cnt: "<<cnt<<"\n";
  }
  return 1;
 }

 using namespace std;
  int main (){
    int c;
    int t;
    cin>>c;
    cin>>t;
    int vis[c];
    v.resize(101);
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    cout<<cnt<<"\n";
    
    
    
  }