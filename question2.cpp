#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n, max = -1, min = 10,rem;
    cin>>n;//12

    while(n>0)
    {
        rem = n % 10;
        if(rem > max)
            max = rem;
        if(rem < min)
            min = rem;

            n = n / 10;

    }
    cout<<min<<" "<<max;
}
