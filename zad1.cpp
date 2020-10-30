
#include <iostream>

using namespace std;

void zamien(int *a, int *b)
{
	if( *b < *a)
	{
	int temp = *a;
	*a = *b;
	*b = temp;
	}
}

int main(){

	int a,b;
	cout<<"wprowadz a:";
	cin>>a;
	cout<<"wprowadz b:";
	cin>>b;

	cout<<"\nA:"<<a<<"\tB:"<<b;
	zamien(&a, &b);
	cout<<"\nA: "<<a<<"\tB: "<<b<<endl;

	
	system("PAUSE");
	return 0;

}
