#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int> > pq;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        pq.push(t);
    }
    
    int max=pq.top()*n;
    int ans=max;
    pq.pop();
    for(int i=n-1;i>=1;i--){
        if(max<pq.top()*i){
            max=pq.top()*i;
            ans=max;
        }
        pq.pop();
    }

    cout<<ans<<"\n";
}
