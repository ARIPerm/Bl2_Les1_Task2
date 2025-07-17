#include <iostream>
#include <Windows.h>
#include <string>

struct Data
{
    int number;
    std::string name;
    double money;
};

double enterNewMoney();
void newMoney(Data& data, double newMoney);
Data createData();
void getInfo(Data data);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Data person = createData();
    double money = enterNewMoney();
    newMoney(person, money);
    getInfo(person);
}

double enterNewMoney()
{
    std::cout << "Введите новый баланс: ";
    double money;
    std::cin >> money;
    return money;
}

void newMoney(Data& data, double newMoney)
{   
    data.money = newMoney;
}

Data createData()
{
    std::cout << "Введите номер счёта: ";
    int number;
    std::cin >> number;

    std::cout << "Введите имя владельца: ";
    std::string name;
    std::cin >> name;

    std::cout << "Введите баланс: ";
    double money;
    std::cin >> money;

    Data temp = { number, name, money };
    return temp;
}

void getInfo(Data data)
{
    std::cout << "Ваш счёт: " << data.name << ", " << data.number << ", " << data.money << std::endl;
}