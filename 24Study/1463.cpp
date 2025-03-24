#include <iostream>
#include <queue>
using namespace std;

int main (){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    int cnt=0;

    queue<pair<int,int> > q;
    q.push(make_pair(n,cnt));

    while(n!=1){
        n=q.front().first;

        if(n==1){
            break;
        }

        

        if(n%3==0){
            q.push(make_pair(n/3, q.front().second +1));
        }
        if (n%2==0){
            q.push(make_pair(n/2, q.front().second +1));
        }
        q.push(make_pair(n-1, q.front().second +1));

        q.pop();
    }

    cout<<q.front().second<<"\n";
}