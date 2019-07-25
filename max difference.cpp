#include<iostream>
#include<algorithm>
using namespace std;
struct arr
{
	int value;
	int index;
	
	bool operator<(arr s) // or sort(a,a+n,&fxn); 			bool fxn(arr a1 , arr a2){ return a1.value<a2.value}
	{
		return value<s.value;
	}
};


int main()
{
	int n;
	cin>>n;
	arr a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].value;
		a[i].index=i;
	}
	sort(a,a+n);
	
	
	int minn = a[0].index; // min element 
	int maxx = 0;   // max difference
	
	for(int i=1;i<n;i++)
	{
		int diff = a[i].index - minn;
		minn = min(minn,a[i].index);
		maxx=max(maxx,diff);
	}
	
	printf("%d %d \n",minn,maxx);
	
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<a[i].index<<"] = "<<a[i].value<<" \n ";
	}
}
