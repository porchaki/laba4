#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	double a,b,x;
 setlocale(LC_ALL, "rus");
	cout<<"������� ��� �����"<<endl;
	cin>>a>>b;
	x = (-b)/a;
	cout<<"�����:"<<" "<<x<<endl;
	system("pause");
	return 0;
}

