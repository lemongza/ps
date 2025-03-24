#include <iostream>
#include <vector>

using namespace std;
int main (){
    vector<int> a(1000001,0);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        int b,c;
        cin>>b>>c;
        a[c]=b;
    }
    int sum=0;
    int ans;
    if(k>=500000){
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
        ans=sum;
        cout<<ans<<"\n";
        return 0;
    }

    vector<int>::iterator it1 =a.begin();
    vector<int>::iterator it2 =a.begin()+(2*k)+1;
    
    
    
    for(int i=0;i<(2*k)+1;i++){
        sum+=a[i];
    }
    ans=sum;

    while(it2!=a.end()){
        sum-=(*it1);
        sum+=(*it2);
        it1++;
        it2++;
        if(sum>ans){
            ans=sum;
        }
    }

    cout<<ans<<"\n";
}   