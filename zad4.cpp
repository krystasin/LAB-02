
#include <iostream>
#include <iomanip>


using namespace std;

int zad4(int a, int b,int &wynik)
{
	wynik = a+b;
    return a*b;	
}

int main(int argc, char **argv){

	int a,b,suma;

	cin>>a;
	cin>>b;

	zad4(a,b,suma);
	
	system("PAUSE");
	return 0;

}

