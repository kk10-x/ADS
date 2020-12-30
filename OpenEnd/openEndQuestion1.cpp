#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> input(vector<int> vec, int x)
{
	int temp;
	for (int i = 0; i < x; i++)
	{
		cin >> temp;
		vec.push_back(temp);
	}
	return vec;
}

vector<int> sortAndRemove(vector<int> vec)
{
	int size = sizeof(vec) / sizeof(vec[0]);
	sort(vec.begin(), vec.end());
	return vec;
}

void output(vector<int> vec)
{
	for (int i = 0; i < vec.size() - 2; i++)
		cout << vec[i] << " ";
	cout << "\n";
}

int main(void)
{
	int n, x;
	cin >> n;
	vector<int> vec[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		vec[i] = input(vec[i], x);
		vec[i] = sortAndRemove(vec[i]);
	}
	for (int i = 0; i < n; i++)
		output(vec[i]);
}