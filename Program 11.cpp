#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n=5;
	for(i=1;i<=n;i++)
	{
		k=0;
		while(k!=(n-i))
		{
			cout<<" ";
			k++;
		}
	    for(j=1;j<=(2*i)-1;j++)
	    {
	    	if(j%2==0)
	    	cout<<" ";
	    	else
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
