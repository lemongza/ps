// 20055 컨베이어 벨트

#include <iostream>
#include <vector>
using namespace std;
int v[201]; // 배열로 벨트
int r[101];

void moveBelt();
void moveRobot();
void putRobot();

int n, k;
int zero = 0;

int main()
{

    cin >> n >> k;

    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;

    while (zero < k)
    {
        // zero!=k 라고 쓰면 시간초과임
        // cout<<"while\n";
        // cout<<cnt<<"\n";
        cnt++;
        moveBelt();
        moveRobot();
        putRobot();
    }

    cout << cnt << "\n";
    return 0;
}

void moveBelt()
{
    // 로봇위치와 벨트
    // cout<<"moveBelt\n";
    v[0] = v[2 * n];
    for (int i = 2 * n; i >= 1; i--)
    {
        v[i] = v[i - 1];
    }
    r[0] = 0;
    for (int i = n; i > 0; i--)
    {
        r[i] = r[i - 1];
        // robot[1]=robot[0]=0;
    }
    r[n] = 0;
    // 로봇은 1과 n번째 벨트에서 항상 0
    //    for (int i=1;i<=2*n;i++){
    //       cout<<v[i]<<"--";
    //    }
}

void moveRobot()
{
    // cout<<"moveRobot\n";

    for (int i = n; i >= 2; i--)
    {
        if (r[i] == 0 && v[i] >= 1 && r[i - 1] == 1)
        {
            r[i - 1] = 0;
            r[i] = 1;
            v[i]--;
            if (v[i] == 0)
            {
                zero++;
            }
        }
    }
    r[n] = 0;
}

void putRobot()
{
    // cout<<"putRobot\n";
    if (v[1] >= 1)
    {
        r[1] = 1;
        v[1]--;
        if (v[1] == 0)
        {
            zero++;
        }
    }
}
