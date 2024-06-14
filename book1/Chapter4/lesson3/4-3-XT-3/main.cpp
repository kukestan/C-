#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
    int n, count = 0;
    bool f;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i]; 
    }
    for(int i = 0; i < n; i++)
    {
        f = false;
        for(int j = 2; j <= sqrt(a[i]); j++)
        {
            if(a[i] % j == 0)
            {
                f = true;
                break;
            }
        }
        if(!f)
        {
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}
