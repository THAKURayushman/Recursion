#include <iostream>
using namespace std;

void printNum(int n)
{
    if (n <= 0)
    {
        return; // base condition
    }
    printNum(n - 1); // backtracking approach
    cout << n << endl;
}

int main()
{
    printNum(3);
}