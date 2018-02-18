#include <iostream>
using namespace std;
class Hello
{
int n;
public:
void get()
{
cout<<"INPUT"<<endl;
	cin>>n;
	}
void prnt()
{
    	cout<<"OUTPUT"<<endl;
for(int i=0;i<n;i++)
    {
	cout<<"Hello"<<endl;
}
}
};
int main()
{
Hello h;
h.get();
h.prnt();
return 0;
}