#include<iostream>
using namespace std;
int main()
{
	int n,s,i;
	while(cin>>n)
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
