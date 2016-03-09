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
	cout << "数组求和为：" << sum << endl;
	return sum;
}
void main()
{
	int l = 0;
	cout << "请输入需要求和的数组长度：";
	cin >> l;
	ArraySum(l);
}