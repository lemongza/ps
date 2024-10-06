#include<iostream>
using namespace std;

int main (){
    int n,w;
    cin>>n>>w;
    char cc[n][2];
    for(int i=0;i<n;i++){
        cin>>cc[i][0]>>cc[i][1];
    }
 
    int max;
    for(int i=1;i<n;i++){
        for(int j=1;j<w;j++){
            if(cc[i][0]<=w){
                if(cc[i][0]<cc[i][1]+)
            }
        }
    }
    cout<<max<<"\n";
}