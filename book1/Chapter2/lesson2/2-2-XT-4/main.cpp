#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    double a, b, c, d, x;
    cin >> a >> b >> c >> d >> x;
    printf("%0.3lf\n", a * x * x *x + b * x * x + c * x + d);
    
    return 0;
}
