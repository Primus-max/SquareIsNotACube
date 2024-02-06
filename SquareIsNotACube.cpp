// Пользователь вводит любое целое число А. Необходимо
// вывести все целые числа В, для которых А делиться без остатка
// на В* В и не делиться без остатка на В* В* В.

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long int  A = 0;
    bool founded = false;
    cout << "Введите число А : ";
    cin >> A;

    for (int B = 1; B <= A; ++B)
    {
        if (B * B == 0) 
            continue;

        if (A % (B * B) == 0 && A % (B * B * B) != 0)
        {
            cout << " А делиться без остатка на В * В и не делиться без остатка на В * В * В " << " >>>>>> " << B << endl;
            founded = true;
        }            
     }

    if (!founded) {
        cout << "Данных чисел не найдено" << endl;
    }
}
