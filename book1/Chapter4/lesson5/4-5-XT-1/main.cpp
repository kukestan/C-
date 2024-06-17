#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    double sum = 1, m, n = 1;
    cin >> m;
    while(sum < m)
    {
        n++;
        sum = sum + 1 / n;
    }
    cout << n << endl;
    return 0;
}
