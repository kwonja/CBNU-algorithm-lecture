#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//작은 문제의 답을 모아서 큰 문제를 해결하는것
//중복되는 부분을 제거
int main(void)
{
	vector<int> arr;
	vector<int> d;
	int n,n1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>n1;
		arr.push_back(n1);
	}
	d.push_back(arr[0]);
	d.push_back(arr[1]);
	for(int i=2;i<n;i++)
	{
		d.push_back(max((d[i-2]+arr[i]),d[i-1]));
	}
	cout<<d[n-1]<<endl;
}