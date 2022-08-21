#include <iostream>
//#include <algorithm>
using namespace std;
int main()
{
	int arr[100],n,t=0;
	int sum(int arr[],int n,int t);
	int result;
	cout<<"Enter the number of integer:";
	cin>>n;
	//cout<<n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	/*cout<<"\nthe numbers are :";
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<" ";
	}
	*/
	cout<<"Enter the target sum: ";
	cin>>t;

	result = sum(arr,n,t);
	
	if(result==1)
	 {
		cout<<"Possible";
	 }
	else
	 {
		cout<<"Not Possible";
	 }


}

//Function
int sum(int arr[],int n,int t)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==t)
			{
				return 1;
			}
		}
	}
	return 0;
}