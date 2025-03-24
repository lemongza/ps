//큐 first-in first-out

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main (void){
    unsigned int n;
    queue<int> list;
    cin>>n;


    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        int num;

        if(!str.compare("push")){
            cin>>num;
            list.push(num);
        }

        else if (!str.compare("pop")){
            if(list.empty()){
                cout<<"-1"<<endl;
            }
            else{
                cout<<list.front()<<endl;
                list.pop();  
            }
        }

        else if (!str.compare("size")){
            cout<<list.size()<<endl;
        }
        else if (!str.compare("empty")){
            if(list.empty()){
                cout<<"1"<<endl;
            }
            else
                cout<<"0"<<endl;
        }
        else if (!str.compare("front")){
            if(list.empty()){
                cout<<"-1"<<endl;
            }
            else{
                cout<<list.front()<<endl;
            }
        }
        else if (!str.compare("back")){
            if(list.empty()){
                cout<<"-1"<<endl;
            }
            else{
                cout<<list.back()<<endl;
            }
        }
    }

    return 0;
}