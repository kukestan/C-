#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    double a, b;
    cin >> a >> b;
    printf("S = %0.3lf\n", a * b);
    printf("C = %0.3lf\n", (a + b) * 2);
    
    return 0;
}
