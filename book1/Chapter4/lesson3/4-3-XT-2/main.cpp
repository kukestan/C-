#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(j + i - n > 0)
            {
                cout << j + i - n;
            }
            else
            {
                cout << " ";
            }
        }
        for(int j = 1; j <= i; j++)
        {
            if(i - j > 0)
            {
                cout << i - j;
            }
        }
        cout << endl;
    }
    return 0;
}
