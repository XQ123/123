#include<iostream>
#include<fstream>
using namespace std;

ArraySum(int l)
{
	int *a, sum = 0, i;
	a = new int[l];
	ifstream f("c:\\2.txt");
	for (i = 0; f >> a[i], i<l; i++)//
	{
		sum += a[i];
	}
	cout << "�������Ϊ��" << sum << endl;
	return sum;
}
void main()
{
	int l = 0;
	cout << "��������Ҫ��͵����鳤�ȣ�";
	cin >> l;
	ArraySum(l);
}