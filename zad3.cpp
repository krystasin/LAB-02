
#include <iostream>
#include <iomanip>


using namespace std;

void zamien(int &a, int *b)
{
	int temp = a;
	a = *b;
	*b = temp;
	
}

int main(int argc, char **argv){

	int a,b;
	cin>>b;
    int *ptrB = &b;

	zamien(a,ptrB);

	
	system("PAUSE");
	return 0;

}

