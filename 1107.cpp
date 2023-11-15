//리모컨
#include <iostream>
#include <string>
using namespace std;

int check (int n, int m, int a[]){
    for(int i=0;i<m;i++){
        if(n==a[i]){
            n=check(n-1,m,a);
            return n;
        }
        else continue;
    }
    return n;
}

int closest (int cn, int n,int m, int a[]){
    if(n<701){
        for(int i=0;i<m;i++){
            if((n%10)+1==a[i]){
                continue;
            }
            else{
                n++;
            }
        }
    }
    return n;
}

int main (){
    int cnt=0;
    int m ; //버튼
    int cn;
    cin>>cn; //채널
    cin>>m; //버튼 개수

    int a[m];
    if(m!=0){
        
        for (int i=0;i<m;i++){ //버튼 입력
        cin>>a[i];   
        }
    }

    
    int len=6;
    int size=100000;
    while (cn/size<1){
        size=size/10;
        len--;
    }
    cout<<"size: "<<size<<"  len : "<<len<<"\n";
    

   

    if(cn==100){
        cout<<cnt<<"\n";
        return 0;
    }
    else{
        if(m==0){
            cnt=len;
            if(100<cn){
                if(cn-100<cnt){
                    cnt=cn-100;
                }
            }
            else {
                if (100-cn<cnt){
                    cnt=cn-100;
                }
            }
            cout<<cnt<<"\n";
            return 0;
        }
        else { //string으로 비교하기 705인 경우 ...0 비교 ㅇ??
           
            int s=0;
            for(int i=0;i<len;i++){
                int n= (cn/size)%10;
                cout<<"n : "<<n<<"  size : "<<size<<"\n";
                s+=check(n,m,a)*size;
                cnt++;
                size=size/10;
                cout<<"s: "<<s<<"\n";
            }
            cout<<"s: "<<s<<"\n";
            
            s=closest(cn,s,m,a);

            if(s<cn){

                cnt+=(cn-s);
            }
            else{
                cnt+=(s-cn);
            }
            cout<<"버튼 입력 후 "<<cnt<<"\n";
        }
    }
}

  