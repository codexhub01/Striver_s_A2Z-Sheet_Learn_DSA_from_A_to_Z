#include<bits/stdc++.h>
using namespace std;

void Reverse_An_Array(int arr[] , int s , int e)
{
    if(s>e)
    {
        return ;
    }
    swap(arr[s] , arr[e]);
    s++;
    e--;
    Reverse_An_Array(arr , s , e);
}

string Check_String_Palindrome_Or_Not(string s , int i , string temp)
{
    if(i==s.length())
    {
        return temp; 
    }

    Check_String_Palindrome_Or_Not(s , i++ , temp+=s[i-1]);
    return temp;
}


int main()
{
//    int n;
//    cin >> n ;
//    int arr[n];
//    for(int i = 0 ; i < n ; i++)
//    {
//         cin >> arr[i];
//    }

   //First Question
//    Reverse_An_Array(arr , 0 , n-1);

//    for(int i = 0 ; i < n ; i++)
//    {
//         cout << arr[i] << " ";
//    }

   //Second Question
   string s;
   cin >> s;
   string res = Check_String_Palindrome_Or_Not(s , 0 , "");
   if(res == s)
   {
        cout << "String is plaindrome" << endl;
   }
   else
   {
        cout << "Not a  plaindrome" << endl;
   }
    
}