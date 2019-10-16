#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
	double a1,b1,x,c1,a2,b2,c2,d,y;
 setlocale(LC_ALL, "rus");
	cout<<"¬ведите числа"<<endl;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	d = a1*b2 - a2*b1;
	x = (c1*b2 - c2*b1)/d; 
	y = (a1*c2 - a2*c1)/d;
	cout<<"x="<<x<<endl<<"y="<<y<<endl;
	system("pause");
	return 0;
}
	
