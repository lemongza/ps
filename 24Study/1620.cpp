//map

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    
    int n,m; //1<=n,m<=100000
    cin>>n>>m;
    map<string,int> mp;
    map<string,string> mp2;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        mp[str]=i+1;
        mp2[to_string(i+1)]=str;
    }

    for(int i=0;i<m;i++){
        string str;
        cin>>str;
        if(mp[str]){
        cout<<mp[str]<<"\n";
        }
        else{
            cout<<mp2[str]<<"\n";
        }
        
    }

}