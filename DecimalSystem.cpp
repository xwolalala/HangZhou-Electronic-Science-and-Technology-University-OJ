/********任意进制转十进制********字符串的输入********记得-‘0’***********/ 
#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n,i,s,sum,r,l,j,q,flag;
	string a;
	a=(char*)malloc(1000*sizeof(char));
	while(cin>>n)
	{
		sum=0;
		while(n--)
		{
			cin>>a;
			l=a.length();
			q=0;
			s=0;
			flag=0;
			for(j=l-4;j>=0;j--)
			{
				if(a[j]=='(')
				{
					flag=1;
					break;
				}
				s+=(a[j]-'0')*pow(a[l-2]-'0',q);
				q++;
			}
			for(j=l-5;j>=0&&flag==1;j--)
			{
				s=s+(a[j]-'0')*pow(10,q);
				q++;	
			}
			sum=sum+s;
		}
		cout<<sum<<endl;
	}
	return 0;
}
