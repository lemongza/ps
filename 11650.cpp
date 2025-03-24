#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main (void){
    unsigned int n;
    cin>>n;

    vector<vector<int> > list(n);

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        list[i].push_back(x);
        list[i].push_back(y);
        
    }
    
    sort(list.begin(),list.end());
    

    for(int i=0;i<n;i++){
       cout<<list[i][0]<<" "<<list[i][1]<<"\n"; 
    }
    
    return 0;
}