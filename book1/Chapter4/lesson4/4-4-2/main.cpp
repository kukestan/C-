#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a, b, c;
    for(a = 1; a <= 9; a++)
    {
        for(b = 0; b <= 9; b++)
        {
            for(c = 0; c <= 9; c++)
            {
                if(a * 100 + b * 10 + c  == a * a * a + b * b * b + c * c * c)
                {
                    cout <<  a * 100 + b * 10 + c << endl;
                }
            }
         }
    }
    return 0;
}
