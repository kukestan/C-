#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    for(int A = 1; A <= 9; A++)
    {
        for(int B = 0; B <= 9; B++)
        {
            for(int C = 0; C <= 9; C++)
            {
                for(int D = 0; D <= 9; D++)
                {
                    for(int E = 1; E <= 9; E++)
                    {
                        if((A * 1000 + B * 100 + C * 10 + D) * E
                                == D * 1000 + C * 100 + B * 10 + A)
                        {
                            cout << A * 1000 + B * 100 + C * 10 + D << endl;
                            cout << E << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
