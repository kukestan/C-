#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a, b, c, i;
    for(i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if(i == a * a *a + b * b * b + c * c *c)
        {
            cout << i << endl;
        }
    }
    return 0;
}
