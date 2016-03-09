#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int sum = 0, i, a[100];
	ifstream f("c:\\1.txt");//文件
	for (i = 0; f >> a[i], i<100; i++)
	{
		sum += a[i];
	}
	cout << "数组求和为：" << sum << endl;
	return sum;
}