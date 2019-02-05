/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void quickSort(int arr[],int st, int e);

int main()
{
    //printf("Hello World");
    int l = 10;
    int arr[] = {21,0,19,99,78,9,11,40,1,80};
    //int pivot = rand()%l;
    int pivot = 9;
    cout << "Pivot : " << arr[pivot] << endl;
    quickSort(arr,0,9);
    for(int i = 0; i < 10;i++)
        cout << arr[i] << "  ";
    
    return 0;
}

void quickSort(int arr[],int st, int e)
{
    int in=-1, P,pi,l = (e-st);
    bool ex = true;
    if(l == 0)
        return;
    if(l < 2)
    {
        //exchange
        if(arr[st] > arr[e])
        {
            int t = arr[st];
            arr[st] = arr[e];
            arr[e] = t;
        }
        return;
    }
    pi =(e+st)/2; P = pi;
    int pivot = arr[pi];
    
    for(int i = st, j = st; i <= l; i++)
    {
        if(arr[j] >= pivot && ex)
        {
            in = j;
            //cout << "in : " << arr[j] << " ";
            ex = false;
        }
        if(arr[i] < pivot && in >= 0 && i > in)
        {
            //exchange
            int temp = arr[i];
            arr[i] = arr[in];
            arr[in] = temp;
            if(in == P)
                P = i;
            ex = true;
        }
        if(ex)
            j++;
    }
   if(arr[in] > arr[P])
  {
         int temp = arr[in];
         arr[in] = arr[P];
         arr[P] = temp;
         P = in;
  }
  
  quickSort(arr,st,P);
  quickSort(arr,P+1,e);
};
