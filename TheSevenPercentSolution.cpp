/*输入单个字符时用cin.get()*/ 
#include<iostream>
using namespace std;
int main()
{
	char i;
	while(i=cin.get())
	{
		if(i=='#')
			break;
		else if(i==' ')
			cout<<"%20";
		else if(i=='!')
			cout<<"%21";
		else if(i=='$')
			cout<<"%24";
		else if(i=='%')
			cout<<"%25";
		else if(i=='(')
			cout<<"%28";
		else if(i==')')
			cout<<"%29";
		else if(i=='*')
			cout<<"%2a";
		else
			cout<<i;
	}
}
