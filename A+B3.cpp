#include <iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
			continue;
		else
			cout<<a+b<<endl;
	}
	return 0;
}
