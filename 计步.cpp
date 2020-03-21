#include<iostream>

using namespace std;
class step
{
	public:
		 step()
		{
			for(int i=0;i<7;i++)
			{
				cin>>a[i];
			}
		}
		void getmax()
		{
			maxstep=a[0];
			for(int i=1;i<7;i++)
			{
				if(a[i]>maxstep) maxstep=a[i];
			}
			
		}
		void getmin()
		{
			minstep=a[0];
			for(int i=1;i<7;i++)
			{
				if(a[i]<minstep)minstep=a[i];
			}
			
		}
		void getaver()
		{	
			int sum=0;
			for(int i=0;i<7;i++)
			{
				sum+=a[i];
			};
			averstep=1.0*sum/7;
			
		}
		void showan()
		{
			cout<<maxstep<<endl<<int(averstep)<<endl<<minstep<<endl;
		}
	private:
		int maxstep,minstep,a[7];
		float averstep;	
};
int main()
{	int n,i;
	cin>>n;
	step b[n];
	for(i=0;i<n;i++)
	{
		b[i].getmax();
		b[i].getmin();
		b[i].getaver();
		b[i].showan();
	}
	return 0;
}
