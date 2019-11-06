#include <iostream>
using namespace std;

//最大水平值

void Max_boin()
{
	//输入行数
	int n;
	cin >> n;

	int i =0, j = 0;
	int Max_sum = 0;
	int m = 3 * n;
	int a_i[100];

	//输入数据组
	for (i = 0; i < m; i++)
	{
		cin >> a_i[i];
	}

	//冒泡排序
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

	//显示排序后数组
	/*for (i = 0; i < m; i++)
	{
		cout << a_i[i] ;
	}*/

	//输出最大水平值
	for (i = 0; i < n; i++)
	{
		Max_sum = Max_sum + a_i[(n + (2 * i))];
	}
	cout << "最大水平值为：" << Max_sum << endl;

}

int main1()
{
	Max_boin();

	system("pause");
	return 0;
}