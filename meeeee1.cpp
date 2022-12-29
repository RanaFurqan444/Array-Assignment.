#include<iostream>
using namespace std;
int main()
{
	int num[10],a,sum=0;
	cout<<"Enter 10 numbers ="<<endl;
	for(a=0;a<10;a++)
	{
	 cin>>num[a];
    }
    for(a=0;a<10;a++)
	{
	   if(a==3 || a==5)
	   {
	   	continue;
	   }
		sum=sum+num[a];		
	}
	 cout<<"sum = "<<sum<<endl;
     cout<<"reverse order of Numbers is :"<<endl;
		for(a=9;a>=0;a--)
	    {
	     cout<<num[a]<<endl;
        }
        return 0;
}
