#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a2[3],a1[3][3] = {1,2,3,4,5,6,7,8,9};
	for(int i=0;i<3;i++)
	{
		int sum = 0;
		for(int j=0;j<3;j++)
		{
			sum = sum+a1[i][j];
		}
		a2[i]= sum;
		cout<<a2[i]<<"  ";
	}
	
	 
	
}
