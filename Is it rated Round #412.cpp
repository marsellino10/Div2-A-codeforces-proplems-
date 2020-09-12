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
    int count=0,n;
    cin>>n;
    int *a = new int [n];
    int *b = new int [n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
            count++;
    }
    if(count>0)
    {
        cout <<"rated";
    }

    else
    {
        count=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                count++;
                break;
            }

        }

        if(count>0)
            cout <<"unrated";
        else
            cout<<"maybe";

    }
    return 0;
}
