#include<bits/stdc++.h>
using namespace std;

void rec_func(int cnt)
{
    if(cnt == 4)
    {
        return ;
    }
    cout << cnt <<" ";
    cnt++;
    rec_func(cnt);
}

int main()
{
    int cnt = 0 ;
    rec_func(cnt);
}