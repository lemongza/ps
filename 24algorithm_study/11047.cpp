#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int n,k;
    vector<int> v;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(v[i]>k){ 
            continue;
        }
        else if (v[i]==k){
            ans++;
            break;
        }
        else{
            int t=k/v[i];
            k-=t*v[i];
            ans+=t;
        }
        //cout<<"i="<<i<<", k="<<k<<", ans="<<ans<<"\n";
    }
    cout<<ans<<"\n";
    return 0;
}
