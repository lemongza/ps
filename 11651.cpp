//좌표 정렬하기 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp (vector<int> &a,vector<int> &b){
    
    if(a[1]==b[1]){
        return a[0]<b[0];
    }

    return a[1]<b[1];
    
}


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
    
   
    sort(list.begin(),list.end(),cmp);

    

    for(int i=0;i<n;i++){
        cout<<list[i][0]<<" "<<list[i][1]<<"\n";
    }

    return 0;
}

