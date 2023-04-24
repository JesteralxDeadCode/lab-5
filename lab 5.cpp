#include <iostream>
using namespace std;

void zad1()
{
	int i = 1;
	float f = 1.1F;
	char c = 'a';
	//void voi; - ошибка

	int* iu = &i;
	float* fu = &f;
	char* cu = &c;
	//void* voiu = &voi; - ошибка

	int& is = i;
	float& fs = f;
	char& cs = c;
	//void& tests = test; - ошибка

	cout <<"Ввыовд перменых на экран через указатели\n"
		<< *iu << "\n"
		<< *fu << "\n"
		<< *cu << "\n";


}
void zad2()
{
	int test1 = 1;
	char test2 = '2';

	char* test2u = &test2;

	cout << *test2u<< "\n";

	test2u = (char*)&test1;

	cout << *test2u;
}
void zad3()
{

	//указатели:
	int i = 1, i2 = 2;
	int* pi;//инициализация указателя
	int* pt = nullptr;//инициализация пустого указателя
	int** ppt = &pt;//указатель на указатель
	pi = &i;//назначение указателя
	(*pi)++;//изменния значения переменной находящегося по указателю при помози разименования
	cout << pi << "\n";//Ввывод значения указателя
	cout << *pi << "\n";//Разименования указателя
	cout << &pi << "\n";//Ввывод расположения указателя
	pi = &i2;//переназначение 

	//ссылки:
	float f = 1.1F, f2 = 2.2F;
	float &cf = f;//инициализация ссылки
	using CF = int&;// псевдоним ссылочного типа
	cf = f2;// переназначение 
	cf++;//изменение перменной по ссылке

}
void zad4()
{
	int i = 1;
	const int* pi = &i;

	const int ci = 1;
	const int* pci = &ci;

	const int** ppi = &pi;

	const int** ppci = &pci;
}
void zad5()
{
	int i = 1, result = 0;
	int mass[] = {1, 2, 5, 6, -2, -6};

	for (int x = 0; x < 6; x++)
	{
		if (mass[x] > 0) { result += mass[x]; }
	}
	cout << result;
}
void zad6()
{
	double mass[5], max, min;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите значение массива #" << i+1 << " :";
		cin >> mass[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (i == 0) { max = mass[i]; min = mass[i]; }
		if (max < mass[i]) { max = mass[i]; }
		if (min > mass[i]) { min = mass[i]; }
	}
	cout <<"Разница квадратов максимумма и миниммума массива ровна:" << pow(max, 2) - pow(min, 2);
}
void zad7() 
{
	int mass[] = { 1, 2, 3 }, result = 0, num = 0;

	for (int i = 0; i < 3; i++)
	{
		result += mass[i];
		num++;

	}
	cout<< "Среднее аарифметическое элементов массива равно:" << result / num << " ";
	
	int *pmax = &result, *pmin = &result;
	for (int i = 0; i < 3; i++)
	{
		if (i == 0) { pmax = &mass[i]; pmin = &mass[i]; }
		if (*pmax < mass[i]) { pmax = &mass[i]; }
		if (*pmin > mass[i]) { pmin = &mass[i]; }
	}
	cout << "макисмальй элемент массива: " << *pmax
		<< " Минимальный: " << *pmin;
}
int main()
{
	setlocale(LC_ALL, "ru");
	zad7();	
}	