void divide(int arr[],int s, int e);
void sort(int arr[], int s, int e, int mid);

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {8,90};
    divide(arr,0,1);
    
    for(int i = 0; i < 2; i++)
    cout << arr[i] << " ";
    return 0;
}

void divide(int arr[], int s, int e)
{
    if((e-s) < 1)
        return;
    int mid = (s+e)/2;
    divide(arr,s,mid);
    divide(arr,mid+1,e);
    
    sort(arr,s,e,mid);
}

void sort(int arr[], int s, int e, int mid)
{
    if((e-s) < 1)
        return;
    else if((e-s) == 1)
    {
        if(arr[s] > arr[e])
        {
            int t = arr[s];
            arr[s] = arr[e];
            arr[e] = t;
        }
        return;
    }
    else if((e-s) > 1)
    {
        int m = mid+1,m1=mid+1;
        int st = s;
        while(m1 <= e && s < m1)
        {
            if(arr[m1] < arr[s])
            {
                m = m1;
                int t = arr[m];
                while(m > s)
                    arr[m] = arr[--m];
                arr[s] = t;
                m1++;
            }
            s++;
        }
    }
}
