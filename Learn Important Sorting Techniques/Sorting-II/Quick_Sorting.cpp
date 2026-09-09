#include<bits/stdc++.h>
using namespace std;

int quick_sort(vector<int>& arr , int low , int high)
{
    int pivot = arr[low];
    int i = low ;
    int j = high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=(high-1))
        {
            i++;
        }
        while(arr[j]>pivot && j>=(low-1))
        {
            j--;
        }
        if(i<j) swap(arr[i] , arr[j]);
    }

    swap(arr[low] , arr[j]);
    return j;
}

void qs(vector<int>& arr , int low , int high)
{
    if(low<high)
    {
        int PI = quick_sort(arr , low , high);
         qs(arr , low , PI);
         qs(arr , PI+1 , high);               

    }
}

vector<int> quickSort(vector<int>& nums) 
{
    qs(nums , 0 , nums.size()-1);
}

int main()
{
    vector<int> nums = {7, 4, 1, 5, 3};
    quickSort(nums);
     for(int i = 0 ; i < nums.size() ; i++)
    {
            cout << nums[i] << " " ;
    }
}