#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	int t, a;

	cin >> n;
	cin >> t >> a;

	int id = 0;
	double sub = INFINITY;

	for (int i = 1; i < n + 1; ++i)
	{
		int h;
		cin >> h;

		double hsub = fabs(t - (double)h*0.006 - a);

		if (hsub < sub) 
		{
			sub = hsub;
			id = i;
		}
	}

	cout << id << endl;

	return 0;
}
