#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	double v1,v2, T,S,f;
 setlocale(LC_ALL, "rus");
 cout<<"������� �������� �����������, ����������� ���������� ����� ���� � ����� ��������"<<endl;
 cin>>v1>>v2>>S>>T;
 f = S+((v1+v2)*T);
 cout<<"���������� ����� ������������ ������ ��������"<<" "<<f<<endl;
 system("pause");
 return 0;
}



