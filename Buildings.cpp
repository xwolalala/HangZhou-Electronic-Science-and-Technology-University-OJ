#include<iostream>
using namespace std;
int main()
{
	int num,n,m,sum,x,i;
	cin>>num;
	while(num--)
	{
		sum=0;
		cin>>n>>m;
		x=m*n;
		while(x--)
		{
			cin>>i;
			if(i==1)
				sum++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
