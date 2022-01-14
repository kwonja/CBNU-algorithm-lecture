#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef struct Student{
	string name;
	int k;
	int e;
	int m;
}Stu;

bool compare(Stu&a , Stu&b)
{
	if(a.k==b.k)
	{
		if(a.e==b.e)
		{
			if(a.m==b.m)
			{
				return a.name<b.name;
			}
			return a.m>b.m;
		}
		return a.e<b.e;
	}
	return a.k>b.k;

}
Stu arr[1000];
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].name;
		cin>>arr[i].k;
		cin>>arr[i].e;
		cin>>arr[i].m;
	}
	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i].name<<endl;
	}
}