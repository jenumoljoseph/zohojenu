#include <iostream>
using namespace std;
int main()
{
	int arr[100],n,t=0;
	int sum(int arr[],int n,int t);
	int result;
	cout<<"Enter the number of integer:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
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
/*
Output

Enter the number of integer:4
2
7
11
15
Enter the target sum: 9
Possible
PS C:\Users\USER\Desktop\New folder\final> cd "c:\Users\USER\Desktop\New folder\final\" ; if ($?) { g++ 1.cpp -o 1 } ; if ($?) { .\1 }
Enter the number of integer:5
2
4
5
7
8
Enter the target sum: 11
Possible
PS C:\Users\USER\Desktop\New folder\final> cd "c:\Users\USER\Desktop\New folder\final\" ; if ($?) { g++ 1.cpp -o 1 } ; if ($?) { .\1 }
Enter the number of integer:5
2
8
5
7
18
Enter the target sum: 3
Not Possible
*/