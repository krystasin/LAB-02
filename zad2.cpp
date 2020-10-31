
#include <iostream>

using namespace std;

void zamien(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	
}

int main(int argc, char **argv){

	int a,b;

	cin>>a;
	cin>>b;

	zamien(a,b);

	
	system("PAUSE");
	return 0;

}

