#include <iostream>
#include <Windows.h>	
using namespace std;
int main ()
{
 double a,r;
	SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");
	cout<<"¬ведите величину угла в гардусах"<<endl;
	cin >> a;	
	
r = a/180;
cout<<r<<"pi"<<endl;
system ("pause");
return 0;
}