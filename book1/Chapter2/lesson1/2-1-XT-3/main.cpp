#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int m, n, a, b;
    cin >> m >> n;
    a = m / n;
    b = m % n;
    cout << a << " " << b  <<endl;
    return 0;
}
