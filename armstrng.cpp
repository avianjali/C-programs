#include<iostream>
#include<cmath>
using namespace std;
int countno(int n)
{
	int count=0;
	while(n>0)
	{
		n= n/10;
		count++;
	}
	return count;
}
void isarm(int n,int d)
{

	int temp,r,sum = 0,count = 0; 
	temp = n;
	while(n>0)
	{
		r = n%10;
		sum = sum+pow(r,d);
		n= n/10;
	}
	if(temp==sum)
	{
		cout<<"Armastrong number"<<endl;
	}
	else
	{
		cout<<"Not a armastrong number:"<<endl;
	}
}
int main()
{
	int n,temp,r,sum=0,d,count;
	cout<<"Enter the number :";
	cin>>n;
	d = countno(n);
	isarm(n,d);	 
	return 0;
}
