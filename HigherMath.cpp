#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,temp;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		if(a<b)
		{
			temp=a;a=b;b=temp;
		}
		if(a<c)
		{
			temp=a;a=c;c=temp;
		}
		if(a*a==b*b+c*c)
			cout<<"Scenario #"<<i<<":"<<endl<<"yes"<<endl;
		else
			cout<<"Scenario #"<<i<<":"<<endl<<"no"<<endl;
		cout<<endl;
	}
	return 0;
}
