// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "stdio.h"
#include "windows.h"
#include "math.h" 

using namespace std;

int main()
{
	double a = 2.0, x = 0.5, b, c, y;
	//Ввод исходных данных 
	printf("input X: ");
	scanf_s("%lf", &x);
	printf("input A: ");
	scanf_s("%lf", &a);
	//Вычисление выражения 
	// - с использованием дополнительных переменных 
	b = a / 2;
	c = b * b;
	// - непосредственно по формуле  
	y = (pow(a / 2, x) - log10(a / 2 + 1)) / (pow(a / 2, 3) - pow(a / 2, 2));
	//Вывод вычисленных значений с надписями 
	printf("\n\t\t\tY");
	printf("\n\t\t%e\n", y);
	printf("\n\t\t\tAY");
	printf("\n\t\tB=%e\n\n\t\tC=%e\n", b, c);
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
