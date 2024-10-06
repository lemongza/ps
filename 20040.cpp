#include <iostream>
#include <string>
using namespace std;

int n; //<=500000
int p[500001];
int m;

int init();
int join(int a,int b);
int find(int a);


int main(){
    cin>>n>>m;
    init();
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

    }
}

int init(){
    for (int i=0;i<n;i++){
        p[i]=0;
    }
}

int join(int a,int b){
    
    if(a==b){
        return 0;
    }

    if(a<b){
        p[a]=b;
    }
    
}

int find(int a){

}