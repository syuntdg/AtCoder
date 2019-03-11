#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
	unsigned int n, m;

	cin >> n >> m;

	map<unsigned int, unsigned int> year;

	unsigned int p[100001];
	unsigned int y[100001];

	for (unsigned int i = 1; i < m + 1; ++i)
	{
		cin >> p[i] >> y[i];
		year[y[i]] = i;
	}

	int id[100001];
	int size[100001] = {};

	for (auto itr = year.begin(); itr != year.end(); ++itr)
	{
		size[p[itr->second]]++;
		id[itr->second] = size[p[itr->second]];
	}

	for (unsigned int j = 1; j < m + 1; ++j)
	{
		cout << setfill('0') << right << setw(6) << p[j];
		cout << setfill('0') << right << setw(6) << id[j];
		cout << endl;
	}

	return 0;
}
