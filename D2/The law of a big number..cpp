#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<int> arr;
    int n, m, k;
    int num;
    cin >> n >> m >>k;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    int max1=arr[n-1];
    int max2=arr[n-2];

    int count1=m/(k+1)*k; //가장 큰수를 더하는 횟수
    count1+=(m%(k+1));
    int count2=m/(k+1); //그다음 큰수를 더하는 횟수
    
    int result=count1*max1 + count2*max2;
    cout<<result<<endl;
}