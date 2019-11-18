#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char* ID = (char*)malloc(19*sizeof(char));
	int num;
	cin>>num;
	while(num--)
	{
		cin>>ID;
		cout<<"He/She is from ";
		if(ID[0]=='3'&&ID[1]=='3')
			cout<<"Zhejiang,and his/her birthday is on ";
		else if(ID[0]=='1'&&ID[1]=='1')
			cout<<"Beijing,and his/her birthday is on ";
		else if(ID[0]=='7'&&ID[1]=='1')
			cout<<"Taiwan,and his/her birthday is on ";
		else if(ID[0]=='8'&&ID[1]=='1')
			cout<<"Hong Kong,and his/her birthday is on ";
		else if(ID[0]=='8'&&ID[1]=='2')
			cout<<"Macao,and his/her birthday is on ";
		else if(ID[0]=='5'&&ID[1]=='4')
			cout<<"Tibet,and his/her birthday is on ";
		else if(ID[0]=='2'&&ID[1]=='1')
			cout<<"Liaoning,and his/her birthday is on ";
		else if(ID[0]=='3'&&ID[1]=='1')
			cout<<"Shanghai,and his/her birthday is on ";
		cout<<ID[10]<<ID[11]<<","<<ID[12]<<ID[13]<<","<<ID[6]<<ID[7]<<ID[8]<<ID[9]<<" based on the table."<<endl;
	}
}
