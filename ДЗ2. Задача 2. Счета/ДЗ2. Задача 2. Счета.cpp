#include <iostream>
#include <Windows.h>

struct MyFinance
{
	int PersonalAcc = 0;
	std::string MyName;
	double MyBalance;
};

void ChangingBalance(MyFinance* person1, double MyNewBalance)
{
	person1->MyBalance = MyNewBalance;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	MyFinance person1;
	double MyNewBalance = 0;

	std::cout << "Введите номер счета: ";
	std::cin >> person1.PersonalAcc;

	std::cout << "Введите имя владельца: ";
	std::cin >> person1.MyName;

	std::cout << "Введите баланс: ";
	std::cin >> person1.MyBalance;	

	std::cout << "Введите новый баланс: ";
	std::cin >> MyNewBalance;

	ChangingBalance(&person1, MyNewBalance);

	std::cout.precision(0);
	
	std::cout << "Ваш счет: " << person1.MyName << ", " << person1.PersonalAcc<<std::fixed<< ", " << person1.MyBalance ;
}

