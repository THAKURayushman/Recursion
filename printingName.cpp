#include <iostream>
using namespace std;

void printName(int i, int N)
{
    if (i > N)
    {
        return;
    }
    cout << "Ayushman" << endl;
    printName(i + 1, N);
}

int main()
{
    printName(0, 10);
}