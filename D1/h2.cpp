#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int straight;
	int left=0;
	int right=0;
	cin>>straight;
	vector<int> str;
	while(straight)
	{
		str.push_back(straight%10);
		straight=straight/10;
	}
	for(int i=0;i<str.size();i++)
	{
		if(i<(str.size()/2))
		right+=str[i];
		else
		left+=str[i];
	}
	if(left==right)
	cout<<"LUCKU"<<endl;
	else
	cout<<"READY"<<endl;
	return 0;
}
