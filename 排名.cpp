//sort��������ֻ�ܴ��±�0��ʼ���� 
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
typedef struct student
{
	char StuID[20];
	int CProblemNum;
	int StuGrade;
}student;
bool cmp(student a,student b)
{
	if(a.StuGrade!=b.StuGrade)
		return a.StuGrade>b.StuGrade;//�Ӵ�С�ô��� 
	else
		return a.StuID>b.StuID; 
}
int main()
{
	int N,M,G;//��������N ( 0 < N < 1000 )��������M ( 0 < M < = 10 )�������ߣ���������G
	student Student[1001];
	int MM[11];
	int temp;
	int sum;
	while(cin>>N)
	{
		sum=0;
		if(N==0)
			break;
		cin>>M>>G;
		for(int i=1;i<=M;i++)
		{
			cin>>MM[i];
		}
		for(int i=0;i<N;i++)
		{
			cin>>Student[i].StuID;
			cin>>Student[i].CProblemNum;
			Student[i].StuGrade=0;
			for(int j=1;j<=Student[i].CProblemNum;j++)
			{
				cin>>temp;
				Student[i].StuGrade+=MM[temp];
			}
		}
		sort(Student,Student+N,cmp);
		for(int i=0;i<N;i++)
		{
			if(Student[i].StuGrade>=G)
			{
				sum++;
			}
		}
		if(sum!=0)
		{
			cout<<sum<<endl;
		}
		for(int i=0;i<sum;i++)
		{
			cout<<Student[i].StuID<<" "<<Student[i].StuGrade<<endl;
		}
	}
	return 0;
}
