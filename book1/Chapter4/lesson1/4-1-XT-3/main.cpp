#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int n, count = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if((i % 3 == 0) && (i % 5 == 0) && (i % 7 == 0))
        {
            cout << i << endl;
            count = count + 1;
        }
    }
    cout << count << endl;
    return 0;
}
