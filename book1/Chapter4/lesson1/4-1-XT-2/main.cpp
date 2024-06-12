#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int n, apple, sum = 0;
    cin >> n;
    for(int i = 1; i <=n; i++)
    {
        cin >> apple;
        sum = sum + apple;
    }
    cout << sum << endl;
    return 0;
}
