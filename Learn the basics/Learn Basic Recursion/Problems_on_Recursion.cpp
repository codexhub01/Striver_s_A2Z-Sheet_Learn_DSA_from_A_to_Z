#include<bits/stdc++.h>
using namespace std;

void Print_Name_N_Times(int n)
{
    if(n == 0)
    {
        return ;
    }
    cout << "Mayank Pal" << endl;
    n--;
    Print_Name_N_Times(n);
}


void Print_Linearly_N_Times(int i , int n)
{
    if(i>n)
    {
        return ;
    }
    cout << i << " ";
    i++;
    Print_Linearly_N_Times(i,n);
}

void Print_N_To_1(int n , int e)
{
    if(n < e)
    {
        return ;
    }
    cout << n << " ";
    n--;
    Print_N_To_1(n , 1);
}

int main()
{
   int n ;
   cin >> n;
   
   //First Question
   Print_Name_N_Times(n);

   //Second Question
   Print_Linearly_N_Times(1 , n);

   //Third Question
   Print_N_To_1(n , 1);

}