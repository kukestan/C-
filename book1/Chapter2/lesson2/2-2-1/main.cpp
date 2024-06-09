#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char** argv)
{
	double n, m, a, s;
	cin >> n >> m;
	a = (n + m) / 2;
	s = a * a;
	printf("边长 = %0.2lf\n", a);
	printf("边长 = %0.2lf\n", s);
	return 0;
}
