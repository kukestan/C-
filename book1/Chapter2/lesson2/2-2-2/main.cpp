#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
    double a, b, c, p;
    scanf("%lf%lf%lf", &a, &b, &c);
    p = (a + b + c) / 2;
    printf("%0.2lf\n", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
