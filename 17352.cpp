#include <iostream>
#include <vector>
using namespace std;
int n;
vector<vector<int> > v;
int p[300001];
void init();
void join(int a, int b);
int find(int a);


int main()
{
    cin >> n; // 섬 개수
    init();

    if (n > 2)

    {
        for (int i = 0; i < n-2; i++)
        {
            int a, b;
            cin >> a >> b;
            join(a, b);

        }
            
    }

    
    for(int i=1;i<n+1;i++){
        for(int j=i+1;j<n+1;j++){
            if(find(i)!=find(j)){
                cout<<i<<" "<<j<<"\n";
                return 0;
            }
        }
    }

}
void init()
{
    for (int i = 0; i < n + 1; i++)
    {
        p[i] = i;
    }
}
int find(int a)
{
    if(a==p[a]){
        return a;
    }
    return p[a]=find(p[a]);
}

void join(int a, int b)
{
    a = find(a);
    b = find(b);

    if (a == b)
    {
        return;
    }
    if (a < b)
    {
        p[b]=a; //작은 값으로 가져감
        
    }
    else{
        p[a]=b;
    }

    //cout<<p[a]<<" "<<p[b]<<"\n";
    return ;
}