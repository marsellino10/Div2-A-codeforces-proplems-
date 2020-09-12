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
    long long n,k,res=0;
    cin>>n>>k;
    long long odd_nums = ceil((double)n/2);
    if(k<=odd_nums)
    {
        res = (2*k)-1;
    }
    else if(k>odd_nums)
    {
        long long x = k-odd_nums;
        res = 2 * x;
    }
    cout <<res;

    return 0;
}
