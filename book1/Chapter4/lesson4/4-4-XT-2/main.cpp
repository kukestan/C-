#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int n, total = 0, count = 0;
    cin >> n;
    total = n * 50;
    for(int i = 3; i <= total; i++)
    {
        for(int j = 3; j <= total / 5; j++)
        {
            for(int k = 3; k <= total / 10; k++)
            {
                //cout << i << j << k << endl;
                if(total == i + j * 5 + k *10)
                {
                    count = count + 1;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
