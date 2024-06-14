#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    bool f;
    cin >> n;
    f = false;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            f = true;
            break;
        }
    }
    if((f == false) && (n != 1))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
