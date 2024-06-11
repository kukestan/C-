#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int s, w, ans;
	cin >> s >> w;
	if(s == 1)
	{
		if(w <= 1)
		{
			ans = 8;
		}
		else
		{
			ans = 8 + 1 * (w -1);
		}
	}
	else
	{
		if(w <= 1)
		{
			ans = 10;
		}
		else
		{
			ans = 10 + 2 * (w -1);
		}
	}
	cout << ans << endl;
	return 0;
}
