#include<iostream>

#include<fstream>

using namespace std;



void ArraySum(int n, int min, int max)

{

	int *a = new int[n];

	int sum = 0;



	if (a == 0)

	{

		cout << "没有申请到动态内存"; exit(3);
	}

	ifstream Data("c:\\2.txt");

	if (!Data)

	{

		cout << "不能打开文件"; exit(1);

	}



	for (int i = 0; Data >> a[i], i<n; i++)

	{

		if (min<a[i] && a[i]<max)

			sum += a[i];

	}

	cout << sum;

	delete[]a;



}



int main()

{

	int n, min, max;

	cout << "请依次输入数组长度，最小值和最大值：";

	cin >> n >> min >> max;



	cout << "求和：";

	ArraySum(n, min, max);

	return 0;

}