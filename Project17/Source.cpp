#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
	int *temp;
	MyClass(int size)
	{
		this->temp = new int[size];
		for (int i = 0; i < size; i++)
		{
			temp[i] = i;
		}
		cout << " ����� ����������� " <<this<< endl;
	}
	~MyClass()
	{
		cout << " ����� ����������� " <<this<< endl;
		delete[] temp;
		
	}
};
void foo(MyClass value)
{
	cout << "����� ���" << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(4);
	MyClass b(a);
	//foo(a);
	
	return 0;
}