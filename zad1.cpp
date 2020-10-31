
#include <iostream>

using namespace std;

void zamien(int *a, int *b)
{
	if( *b < *a){
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}

int main(){

	int a,b;

	cin>>a;
	cin>>b;

	int *pA = &a;
	int *pB = &b;


	zamien(pA, pB);


	
	system("PAUSE");
	return 0;

}
