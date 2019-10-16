#include <iostream>
#include <Windows.h>	
using namespace std;
int main ()
{
 double A,X,Y,S,K;
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");

cout<<"Введите количество конфет в кг и их стоимость"<<endl;
cin>>X>>A;
S = A/X;
cout<<"Введите желаемое количество кг"<<endl;
cin>>Y;
K =S*Y;
cout<<"Стоимость 1 кг конфет равна"<<' '<<S<<endl<<"Стоимость"<<' '<<Y<<"кг конфет равна"<<' '<<K<<endl;
system("pause");
return 0;
}







	
	