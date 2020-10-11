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
	    for(j=1;j<=i;j++)
	    {
	    	if((j==1)||(j==i)||(i==n))
	        cout<<"*";
	        else
	        cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
