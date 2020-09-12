#include <iostream>     // std::cout
#include <algorithm>    // std::transform
#include <vector>       // std::vector
#include <functional>
#include <cstring>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    int n,p,q;
    cin>>n>>p;
    int *little_x = new int [p];
    for(int i=0;i<p;i++)
    {
        cin>>little_x[i];
    }
    cin>>q;
    int *little_y = new int [q];
    for(int i=0;i<q;i++)
    {
        cin>>little_y[i];
    }
     sort(little_x,little_x+p);
     sort(little_y,little_y+q);

    int arr[100]={0};

    int index=1,arr_ind=0,k=0;

    for(int i=0;i<n;i++)
    {
        if(index==little_x[k])
        {
            index++; k++;
            continue;
        }
        else{
            arr[arr_ind]=index;
            arr_ind++; index++;
        }

    }
     int x=0;
     if(arr[0]==0)
     {
         cout<<"I become the guy.";
        goto label;
     }

     for(int i=0;i<arr_ind;i++)
     {
         for(int j=i;j<q;j++)
         {
             if(arr[i]==little_y[j])
             {
                 x++;
                 break;

             }
         }
     }
     if(x==arr_ind)
     {
         cout<<"I become the guy.";
     }
     else
     {
         cout <<"Oh, my keyboard!";

     }

     label:
    return 0;
}
