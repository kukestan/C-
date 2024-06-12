#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int n, s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    cout << s << endl;
    return 0;
}
