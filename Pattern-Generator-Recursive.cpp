#include<iostream>
using namespace std;
void pattern(int n,int k, char c, char d);
void helping(char c,int n);
int main ()
{
	int n,k;
	cout<<"Enter the starting number"<<endl;
	cin>>n;
	cout<<"Enter the ending number"<<endl;
	cin>>k;
	pattern(n,k,'^','*');
	
}


void pattern(int n,int k, char c, char d)
{
	if(n>=k)
	{
	cout<<n;
		if(n%2==0)
		helping('^',n);
		if(n%2!=0)
		helping('*',n);
	return;	
	}
	
	else
	{
		cout<<n;
		if(n%2==0)
		helping('^',n);
		if(n%2!=0)
		helping('*',n);
		pattern(n+1,k,'^','*');
		cout<<n;
		if(n%2==0)
		helping('^',n);
		if(n%2!=0)
		helping('*',n);
	}
}

void helping(char c,int n)
{
	if(n==0)
	return;
	else
	{
		cout<<c;
		helping(c,n-1);
	}
	
}