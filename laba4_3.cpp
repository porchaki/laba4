#include <iostream>
#include <Windows.h>	
using namespace std;
int main ()
{
 double A,X,Y,S,K;
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
 setlocale(LC_ALL, "rus");

cout<<"������� ���������� ������ � �� � �� ���������"<<endl;
cin>>X>>A;
S = A/X;
cout<<"������� �������� ���������� ��"<<endl;
cin>>Y;
K =S*Y;
cout<<"��������� 1 �� ������ �����"<<' '<<S<<endl<<"���������"<<' '<<Y<<"�� ������ �����"<<' '<<K<<endl;
system("pause");
return 0;
}







	
	