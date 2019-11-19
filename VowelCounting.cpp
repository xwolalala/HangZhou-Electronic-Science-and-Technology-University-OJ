#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	int num,l;
	cin>>num;
	string a=(char*)malloc(51*sizeof(char));
	while(num--)
	{
		cin>>a;
		l=a.length();
		for(int i=0;i<l;i++)
		{
			if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
			{
				if(a[i]>='a')
					a[i]-=32;
			}
			else
			{
				if(a[i]<='Z')
					a[i]+=32;
			}
			cout<<a[i];
		}
		cout<<endl;
	}
}
