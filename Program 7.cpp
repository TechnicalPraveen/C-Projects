#include<iostream>
using namespace std;
int main()
{
	int i,s,k,n=3;
	for(i=1;i<=n;i++)
	{
		k=0;
		for(s=1;s<=(n-i);s++)
		{
			cout<<" ";
		}
		while(k!=(2*i)-1)
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
	for(i=n-1;i>=1;i--)
	{
		k=0;
		for(s=1;s<=(n-i);s++)
		{
			cout<<" ";
		}
		while(k!=(2*i)-1)
		{
			cout<<"*";
			k++;
		}
		cout<<endl;
	}
	return 0;
}
