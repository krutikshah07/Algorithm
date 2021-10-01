#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,space;
	cout<<"Enter a number\n";
	cin>>n;
	space=2*n-3;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			cout<<" ";
		}
		cout<<'*';
		for(int j=1;j<=space;j++)
		{
			cout<<" ";
		}
		if(i<n)
		{
			cout<<"/";
		}
		cout<<"\n";
		space=space-2;
	}
}
