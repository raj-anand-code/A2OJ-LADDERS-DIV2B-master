#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	
 	long long int n,l;
 	double max=0.00;
	cin>>n>>l;
	int v1[10005];
	for(long long int i=0;i<n;i++)
	{
		cin>>v1[i];
	}
	
	sort(v1,v1+n);
	if(v1[0]!=0)
		max=v1[0];
	for(long long int i=1;i<n;i++)
	{
		if(max<(v1[i]-v1[i-1])/2.00)
			max=(v1[i]-v1[i-1])/1.00;
	} 

	cout<<double(max);
	
}
