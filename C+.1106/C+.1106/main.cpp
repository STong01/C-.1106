#include <iostream>
using namespace std;

//���ˮƽֵ

void Max_boin()
{
	//��������
	int n;
	cin >> n;

	int i =0, j = 0;
	int Max_sum = 0;
	int m = 3 * n;
	int a_i[100];

	//����������
	for (i = 0; i < m; i++)
	{
		cin >> a_i[i];
	}

	//ð������
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m - i - 1; j++)
		{
			if (a_i[j] > a_i[j+1])
			{
				int tmp = a_i[j];
				a_i[j] = a_i[j + 1];
				a_i[j + 1] = tmp;
			}
		}
	}

	//��ʾ���������
	/*for (i = 0; i < m; i++)
	{
		cout << a_i[i] ;
	}*/

	//������ˮƽֵ
	for (i = 0; i < n; i++)
	{
		Max_sum = Max_sum + a_i[(n + (2 * i))];
	}
	cout << "���ˮƽֵΪ��" << Max_sum << endl;

}

int main1()
{
	Max_boin();

	system("pause");
	return 0;
}