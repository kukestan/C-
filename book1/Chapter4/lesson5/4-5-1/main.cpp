#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int m, n = 0, s = 0;
    cin >> m;
    while(s < m)
    {
        ++n;
        s += n;
    }
    cout << n << endl;
    return 0;
}
