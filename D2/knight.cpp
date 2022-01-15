#include <iostream>

using namespace std;
int main(void)
{
	int answer=0;
	//cout<<(int)'a'<<endl;  //97
	//cout<<(int)'1'<<endl;  //49
	char pos[2];
	cin>>pos;
	int x,y;
	//실제 시작 좌표
	x=(int)pos[0]-96;
	y=(int)pos[1]-48;
	//수평으로 이동했을때
	if((x+2<9))
	{
		if((y+1<9))answer++;
		if((y-1>0))answer++;
	}
	if((x-2>0))
	{
		if((y+1<9))answer++;
		if((y-1>0))answer++;
	}
	//수직으로 이동했을때
	if((y+2<9))
	{
		if((x+1<9))answer++;
		if((x-1>0))answer++;
	}
	if((y-2>0))
	{
		if((x+1<9))answer++;
		if((x-1>0))answer++;
	}
	cout<<answer<<endl;
}