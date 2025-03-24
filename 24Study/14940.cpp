//쉬운 최단거리
#include <iostream>
using namespace std;

int main (){
    int n,m;
    cin>>n>>m;
    int a,b;

    int arr[n][m];
    int dis[n][m];

    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            int k=0;
            cin>>k;
            arr[i][j]=k;
            
            if(k==2){
                a=i;
                b=j;
            }
        }
    }

    dis[a][b]=0;
    
    int k=b;
    while(k<m){
        if(arr[a][k+1]==1){
            dis[a][k+1]=dis[a][k]+1;
        }
        else{
            dis[a][k+1]=0;
        }
    }
    k=b;
    while(0<k){
        if(arr[a][k-11]==1){
            dis[a][k-1]=dis[a][k]+1;
        }
        else{
            dis[a][k-1]=0;
        }
    }

    int l=a;
    while(l<n){
        if(arr[l+1][b]==1){
            dis[l+1][b]=dis[l][b]+1;
        }
        else{
            dis[l+1][b]=0;
        }
    }
    l=a;
    while(0<l){
        if(arr[l-1][b]==1){
            dis[l-1][b]=dis[l][b]+1;
        }
        else{
            dis[l-1][b]=0;
        }
    }
    
    for(int l=a;l<n;l++){
        int k=b;
        for(;k<m;k++){
            if(arr[l][k+1]==1){
                dis[l][k+1]=dis[l][k]+1;
            }
            else{
                dis[l][k+1]=0;
            }
            
        } 

        k=b;
        for(;0<k;k--){
            if(arr[l][k-1]==1){
                dis[l][k-1]=dis[l][k]+1;
            }
            else{
                dis[l][k-1]=0;
            }

        
            
    }
        
    }
    
    int k=b;
    for(;k<m;k++){
        if(arr[a][k+1]==1){
            dis[a][k+1]=dis[a][k]+1;
        }
        else{
            dis[a][k+1]=0;
        }
        
    }   
    for(;0<b;b--){
        if(arr[a][b-1]==1){
            dis[a][b-1]=dis[a][b]+1;
        }
        else{
            dis[a][b-1]=0;
        }
        
    }

    for(;a<n;a++){
        if(arr[a+1][b]==1){
            dis[a+1][b]=dis[a][b]+1;
        }
        else{
            dis[a+1][b]=0;
        }
        
    }   

    for(;0<a;a--){
        if(arr[a-1][b]==1){
            dis[a-1][b]=dis[a][b]+1;
        }
        else{
            dis[a-1][b]=0;
        }
    }

    k=b;
    while(k<m){
        if(arr[a][k+1]==1){
            if(arr[a][k]==1){
                dis[a][k+1]=dis[a][k]+1;
            }
            else if(arr[a-1][k+1]==1){
                dis[a][k+1]=dis[a-1][k+1]+1;
            }
            else{
                dis[a][k+1]=0;
            }
        }
        else{
            dis[a][k+1]=0;
        }
        k++;
    }


}