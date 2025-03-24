//z
#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int N,r,c; //r행 c열
    cin>>N>>r>>c;
    int len=pow(2,N);
    int size=pow(len,2);
    int a[len][len];

    int half=len/2;
    int cnt=0;

    int m[4]={0,0,1,0};
    int n[4]={0,1,-1,1};

    int y,x=0;
    int start=0;
    int end=half;
    int yend=half;


    while(cnt<size){
        for(int i=0;i<4;i++){
            y+=m[i];
            x+=n[i];
            a[y][x]=cnt++;

        }

        if(y+1<yend){
            if(x+1<end){
                x++;
                y-=1;
            }
            else if (x+1==end){
                x=start;
                y++;                
            }
        }

        else if(y+1==yend){
            if(x+1<end){
                x++;
                y--;
            }
            else if(x+1==end){
                if(end==len){
                    end=half;
                    start=0;
                    yend=len;
                    x=start;
                    y=half;
                }
                else if(end==half){
                    start=half;
                    end=len;
                    if(yend==half){
                        y=0;
                    }
                    else if (yend==len){
                        y=half;
                    }
                    x=start;
                }
            }
        }
    }
    cout<<x<<" "<<y<<"\n";
    for (int q=0;q<len;q++){
        for (int p=0;p<len;p++){
            cout<<a[q][p]<<" ";
        }
        cout<<"\n";
    }

    cout<<a[r][c]<<"\n";


}