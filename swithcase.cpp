#include<iostream>
using namespace std;
void isfib(int num)
{
	int sum = 0,n1=0,n2=1;
	while(sum<num)
	{
		sum = n1+n2;
		n1 = n2;
		n2 = sum;
	}
	
	if(sum==num  )
	{
		cout<<"Yes it is fibonnaci number."<<endl;
	}
	else
	{
		cout<<"No it is not a fibannaci number."<<endl;
	}
}
void findrange(int l,int h)
{
	int sum = 0,i,n1,n2;
	for(int i=0;i<h;i++)
	{
		sum =n1+n2;
		n1 =n2;
		n2 = sum;
		if(sum>=l && sum<=h)
		cout<<sum<<endl;
	}
}
int nthfib(int n)
{
	int n1 = 0 , n2 = 1,sum=0;
	for(int i= 2;i<n;i++)
	{
		sum = n1+n2;
    	n1 =n2;
		n2 = sum;
	}
	return sum;
}
int main()
{
	int n1 = 0 , n2 = 1,sum=0,n,l,h,num,avi;
	cout<<"menu:"<<"\n";
	cout<<"1.find nth number"<<endl;
	cout<<"2.fibonacci in range"<<endl;
	cout<<"3.check fibonacci"<<endl;
	cin>>avi;
	switch(avi)
	{
	
		case 1:
			cout<<"Enter the number:";
	        cin>>n;
	        cout<<nthfib(n)<<endl;
	        break;
		case 2:	
			cout<<"Enter the first range:";
			cin>>l;
			cout<<"Enter the last range:";
			cin>>h;
			l<h?findrange(l,h):findrange(h,l);
			break;
		case 3: 
			cout<<"enter to check the number:";
			cin>>num;
			isfib(num);
			break;
		default:
			cout<<"shi number dalo:";
		     
   }
	return 0;
}
