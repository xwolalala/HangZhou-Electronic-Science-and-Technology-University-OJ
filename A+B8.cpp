#include<iostream>
using namespace std;
int main()
{
	int n,num,s,i;
	cin>>n;
	while(n--)
	{
		cin>>num;
		s=0;
		while(num--)
		{
			cin>>i;
			s=s+i;
		}
		cout<<s<<endl<<endl;
	}
	return 0;
}
