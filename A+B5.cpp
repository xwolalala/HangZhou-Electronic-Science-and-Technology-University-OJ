#include<iostream>
using namespace std;
int main()
{
	int n,num,i,sum;
	cin>>n;
	while(n--)
	{
		cin>>num;
		sum=0;
		while(num--)
		{
			cin>>i;
			sum=sum+i;
		}
		cout<<sum<<endl;
	}
}
