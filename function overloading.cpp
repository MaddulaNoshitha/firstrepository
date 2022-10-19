#include<iostream>
using namespace std;
/*function overloading*/
/*creating class */
class sum
{
	public:
		void add(int,int);
		void add(float,float);
};
void sum::add(int a1,int b1)
{
	cout<<"addition of 2 integers : "<<a1+b1;
}
void sum::add(float c1,float v1)
{
	cout<<"addition of 2 float values : "<<c1+v1;
}
int main()
{
	int a,b;
	float c,d;
//	float c,d;
	cout<<"Enter a and b values";
	cin>>a>>b;
	sum s;
	s.add(a,b);
	cout<<endl;
	cout<<"enter c and d values";
	cin>>c>>d;
	s.add(c,d);
		return 0;
}
