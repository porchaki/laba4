#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	double v1,v2, T,S,f;
 setlocale(LC_ALL, "rus");
 cout<<"Введите скорости автомобилей, изначальное расстояние между ними и время движения"<<endl;
 cin>>v1>>v2>>S>>T;
 f = S+((v1+v2)*T);
 cout<<"Расстояние между автомобилями станет равнятся"<<" "<<f<<endl;
 system("pause");
 return 0;
}



