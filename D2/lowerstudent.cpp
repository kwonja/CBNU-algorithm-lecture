#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(const pair<string, int> &a, const pair<string, int> &b)
{
	return a.second < b.second;
}
int main(void)
{
	int n;
	vector<pair<string, int>> arr;
	cin >> n;
	string str;
	int score;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		cin >> score;
		arr.push_back(make_pair(str, score));
	}
	sort(arr.begin(), arr.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << endl;
	}
}