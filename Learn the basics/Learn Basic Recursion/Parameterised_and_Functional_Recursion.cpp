#include<bits/stdc++.h>
using namespace std;

void Sum_Of_1st_N_Numbers(int s , int n , int cnt)
{
    if(s>n)
    {
        cout << cnt;
        return ;
    }
    cnt+=s;
    s++;
    Sum_Of_1st_N_Numbers(s , n , cnt);

}

int main()
{
    int n ;
    cin >> n ;
    
    //First Question
    Sum_Of_1st_N_Numbers(1 , n , 0);
}