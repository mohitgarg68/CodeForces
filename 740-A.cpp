//
// Created by mohit on 8/12/16.
//

#include <iostream>

using namespace std;

int main()
{
    long n, a, b, c;
    cin >> n >> a >> b >> c;
    long remainder = n % 4;
    long extra;
    if(n%4 == 0)
    {
        extra = 0;
    }
    else
    {
        extra = 4 - remainder;
    }


    //find the least cost to buy extra no of books

    long cost = 0;

    while(extra != 0 )
    {
        if(extra >= 3)
        {
            cost += min(min(3*a, 2*a + b), min(c, a+b));
            extra -= 3;
        }
        else if(extra == 2)
        {
            cost += min(2*a, b);
            extra = 0;
        }else if(extra == 1)
        {
            cost += a;
            extra = 0;
        }
    }

    cout << cost;

    return 0;
}