#include <iostream>
#include <vector>
#include <algorithm>
//sort는 기본적으로 오름차순인데 내림차순으로 하려면?

using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
int main(void)
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr.push_back(num);
    }

    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}