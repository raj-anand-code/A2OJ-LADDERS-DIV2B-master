#include<iostream>
using namespace std;

int main()
{
	long long int n,m,m1,q,r,m2=0;
	cin>>n>>m;
	m1=((n+1-m)*(n-m))/2;
	q = n/m;
	r=n%m;
	for(int j=0;j<r;j++)
	{
		m2=m2+((q+1)*(q))/2;
	}
	
	m2=m2+((m-r)*(q)*(q-1))/2;
	
	cout<<m2<<' ';
	cout<<m1;
}
