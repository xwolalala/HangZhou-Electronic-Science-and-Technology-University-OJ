#include<iostream>
using namespace std;
int main()
{
	int n,i,s;
	while(1)
	{
		cin>>n;
		if(n==0)
			break;
		else
		{
			s=0;
			while(n--)
			{
				cin>>i;
				s=s+i;
			}
			cout<<s<<endl;
		}
	}
	return 0;
}
