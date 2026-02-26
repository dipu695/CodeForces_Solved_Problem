#include<iostream>
using namespace std;
int main()
{
	int n ;
	cin >> n;
  int arr[n];
  for(int i = 0 ; i < n ; i++)
  {
	cin >> arr[i];
  }
  int r = n - 1;
  int l = 0;
  int Sscore = 0;
  int  Dscore = 0;
for(int i = 0 ; i < n ; i++)
{
	if(i % 2 == 0)
	{
		if(arr[r] > arr[l])
		{
			Sscore += arr[r];
			r--;
		}
		else if(arr[r] < arr[l])
		{
			Sscore += arr[l];
			l++;
		}
		else
		{
			Sscore += arr[l];
		}
	}
	else
	{
		if(arr[r] < arr[l])
		{
			Dscore += arr[l];
			l++;
		}
		else if(arr[r] > arr[l])
		{
			Dscore += arr[r];
			r--;
		}
		else 
		{
			Dscore += arr[l];
		}
	}
}
cout << Sscore <<" " << Dscore <<endl;
	return 0;
}