#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int main(void)
{
	int passward = 123;
	int num = 0;
	cout << "숫자를 입력하세요 :";
	while (num != passward)
	{
		num = rand();
		cout << num << endl;
	}
	cout << "passwoard : " << num << endl;

}
