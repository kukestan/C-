#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n, m, a, b, c, d;
	cin >> n;
	a = n / 100;//百位 
	b = n % 100;
	c = b / 10;//十位 
	d = b % 10;//个位
	m = a + c + d;
	cout << m <<endl;
	return 0;
}
