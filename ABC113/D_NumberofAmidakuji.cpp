#include <iostream>

using namespace std;

unsigned __int64 f[9] = { 0, 1, 1, 2, 3, 5, 8, 13, 21 };

unsigned __int64 X_i(int i, int w)
{
	return f[i - 1] * f[w - i + 1];
}

unsigned __int64 Y_i(int i, int w)
{
	return f[i] * f[w - i + 1];
}

unsigned __int64 Z_i(int i, int w)
{
	return f[i] * f[w - i];
}

int main()
{
	unsigned  int h, w, k;

	cin >> h >> w >> k;

	unsigned __int64 A[101][10] = {};

	A[0][1] = 1;

	unsigned __int64 mod = 1000000007;

	for (int i = 0; i < h; ++i)
	{
		for (int j = 1; j < w + 1; ++j)
		{
			A[i + 1][j - 1] += (X_i(j, w) * A[i][j]);
			A[i + 1][j - 1] %= mod;

			A[i + 1][j] += (Y_i(j, w) * A[i][j]);
			A[i + 1][j] %= mod;

			A[i + 1][j + 1] += (Z_i(j, w) * A[i][j]);
			A[i + 1][j + 1] %= mod;
		}
	}

	cout << A[h][k];

	return 0;
}
