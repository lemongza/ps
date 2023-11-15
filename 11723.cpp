#include <iostream>
#include <string.h>

using namespace std;


int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    bool s[21]={false,};
    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        string st;
        int x;
        cin>>st;

        if(st=="add"){
            cin>>x;
            s[x]=true;
        }

        else if(st=="remove"){
            cin>>x;
            s[x]=false;
        }

        else if(st=="check"){
            cin>>x;
            if(s[x]==true){
                cout<<"1\n";
            }
            else{
                cout<<"0\n";
            }
        }

        else if(st=="toggle"){
            cin>>x;

            if(s[x]==true){
                s[x]=false;
            }
            else{
                s[x]=true;
            }
        }

        else if(st=="all"){
            for(int t=0;t<21;t++){
                s[t]=true;
            }
        }
        else if(st=="empty"){
            for(int t=0;t<21;t++){
                s[t]=false;
            }
        }


    }




}