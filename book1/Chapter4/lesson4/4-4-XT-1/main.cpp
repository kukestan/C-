#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    for(int a = 1; a <= 9; a++)
    {
        for(int b = 0; b <= 9; b++)
        {
            for(int c = 0; c <= 9; c++)
            {
                if((c > a) && (a > b) && (a + b + c == a * b * c))
                {
                    cout << a * 100 + b * 10 + c << endl;
                }
            }
        }
    }
    return 0;
}
