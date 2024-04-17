#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n, h, m;
	cin >> n;
	h = n / 60;
	m = n % 60;
	cout << h << "Ð¡Ê±" << m << "·ÖÖÓ" << endl; 
	return 0;
}
