#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int s10,s12,s16;
	int x1,x2,x3;
	int y1,y2,y3;
	int z1,z2,z3;
	for(int i=2992;i<=9999;i++)
	{
		int x1=pow(10,1),x2=pow(10,2),x3=pow(10,3);
		int y1=pow(12,1),y2=pow(12,2),y3=pow(12,3);
		int z1=pow(16,1),z2=pow(16,2),z3=pow(16,3);
		s10=i/x3+(i%x3)/x2+(i%x2)/x1+i%x1;
		s12=i/y3+(i%y3)/y2+(i%y2)/y1+i%y1;
		s16=i/z3+(i%z3)/z2+(i%z2)/z1+i%z1;
		if(s10==s12&&s12==s16)
			cout<<i<<endl;
	}
	return 0;
}
