#include<iostream>

#include<fstream>

using namespace std;



void ArraySum(int n, int min, int max)

{

	int *a = new int[n];

	int sum = 0;



	if (a == 0)

	{

		cout << "û�����뵽��̬�ڴ�"; exit(3);
	}

	ifstream Data("c:\\2.txt");

	if (!Data)

	{

		cout << "���ܴ��ļ�"; exit(1);

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

	cout << "�������������鳤�ȣ���Сֵ�����ֵ��";

	cin >> n >> min >> max;



	cout << "��ͣ�";

	ArraySum(n, min, max);

	return 0;

}