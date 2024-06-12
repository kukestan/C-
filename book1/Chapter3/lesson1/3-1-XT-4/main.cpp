#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int a;
    cin >> a;
    if(a >= 18)
    {
        cout << "You're old enough to drive." << endl;
    }
    else
    {
        printf("Sorry, you can drive in %d years.", 18 -a);
    }
    return 0;
}
