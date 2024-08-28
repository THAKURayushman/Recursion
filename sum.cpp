#include <iostream>
using namespace std;

int sumOfN(int N)
{ // gives sum of first N natural numbers
    int sum;
    if (N == 0)
    {
        return 0;
    }
    sum = N + sumOfN(N - 1);
    return sum;
}

int main()
{
    int sum = sumOfN(50);
    cout << sum;
}