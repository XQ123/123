#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int sum = 0, i, a[100];
	ifstream f("c:\\1.txt");//�ļ�
	for (i = 0; f >> a[i], i<100; i++)
	{
		sum += a[i];
	}
	cout << "�������Ϊ��" << sum << endl;
	return sum;
}