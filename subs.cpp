#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cout<<"Enter number of test cases: ";
	cin>>test;
	for(int t=0;t<test;t++)
	{
		vector<int> a;
		int n,num,count=0,test;
		
		cout<<"\nEnter size of the array: ";
		cin>>n;
		cout<<"Enter elements in the array:-\n";
		for(int i=0;i<n;i++)
		{
			cin>>num;
			a.push_back(num);
		}	
		cout<<"Enter key: ";
		int key;
		cin>>key;
		sort(a.begin(),a.end());
		int i=0;
		int j=i+1;
		while(j<n)
		{
			int diff = abs(a[i]-a[j]);
			if(diff == key)
			{
				cout<<"Pair "<<count+1<<": "<<a[j]<<" - "<<a[i]<<" = "<<key<<endl;
				count++;
				i++;
				j++;
			}
			else if(diff<key)
				j++;
			else
				i++;
		}
		cout<<"Number of pairs: "<<count<<endl;
	}	
	return 0;
}
