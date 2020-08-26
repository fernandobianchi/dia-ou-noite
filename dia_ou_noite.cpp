#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int hora;
	cout<<"Informe uma hora qualquer: ";
	cin>>hora;
	if (hora>=6 && 18>=hora)
	{
		cout<<"É dia!";
	}
	else
	{
		cout<<"É noite!";
	}
}