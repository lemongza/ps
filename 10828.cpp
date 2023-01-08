//스택 

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main (void){
    unsigned int n;
    stack<int> stack;  
    string push="push";
    cin>>n;

    for(int i=0;i<n;i++){
       int num; 
       string str;
        cin>>str;
        if(!str.compare("push")){
            cin>>num;
            stack.push(num);
        }
            else if(!str.compare("top")){
               if(stack.empty()){
                    cout<<"-1"<<endl;
                }
                else
                    cout<<stack.top()<<endl; 
           }
            else if(!str.compare("empty")){
                if(stack.empty())
                    cout<<"1"<<endl;
                else 
                    cout<<"0"<<endl;
            }
            else if(!str.compare("size")){
                cout<<stack.size()<<endl;
            }
            else if(!str.compare("pop")){
                if(stack.empty()){
                    cout<<-1<<endl;
                }
                else{
                    cout<<stack.top()<<endl;
                    stack.pop();
                }
            }    
    }

    return 0;
}