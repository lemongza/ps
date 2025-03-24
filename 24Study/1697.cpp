#include <iostream>
#include <queue>
using namespace std;

int main (){
    int n,k;
    int cnt=0;
    cin>>n>>k;
    bool vis[100001]={false,};
    queue<pair<int,int> > q; //n,cnt
    q.push(make_pair(n,cnt+1));
    vis[n]=true;
    if(n==k){
        cout<<q.front().second-1<<"\n";
        return 0;
    }

    while(n!=k){
        n=q.front().first;

        if(n==k){
            break;
        }
        if(q.front().second-1==cnt){
            cnt++;
        }


        if(n-1>=0){
            if(!vis[n-1]){
                q.push(make_pair(n-1,cnt+1));
                vis[n-1]=true;
            }
        }
        if(n+1<=100000){
            if(!vis[n+1]){
                q.push(make_pair(n+1,cnt+1));
                vis[n+1]=true;
            }
        }
        if(2*n<=100000){
            if(!vis[2*n]){
                q.push(make_pair(2*n,cnt+1));
                vis[2*n]=true;
            }
        }

        q.pop();
    }

    cout<<q.front().second -1<<"\n";

}