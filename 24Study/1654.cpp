#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int k, n;
    int sum=0;
    int ans=0;

    cin >> k >> n;
    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }


    sort(a, a + k);

    unsigned int l = 1;
    int r, mid;
    r = a[k-1];

    while (l <= r)
    {   
        mid = (r - l) / 2 + l;
        sum=0;
        for (int i = 0; i < k; i++)
        {
            sum += a[i] / mid;
        }
        
        if(sum>n){
            l=mid+1;
            ans=mid;
            
        }
        else if (sum<n){
            r=mid-1;
            
        }
        else if (sum==n){
            ans=mid;
            l=mid+1;
        }
        //cout<<"l: "<<l<<" r: "<<r<<" mid: "<<mid<<" sum: "<<sum<<"\n";
    }

    cout<<ans<<"\n";
    return 0;
}