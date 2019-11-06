#include <iostream>
#include <cstring>
using namespace std;

void Delete()
{
	//char str1[256];
	//char str2[256];
	//cin >> str1[256]>>str2[256];
	char str1[] = "They are students.";
	char str2[] = "aeiou";

	char *p1 = str1;
	char *p2 = str2;

	int a[256] = { 0 };
	int i;
	int n = strlen(str2);

	for (i = 0; i < n; i++)
	{
		a[str2[i]] = 1;
	}
	while (*p1)
	{
		if (a[*p1] == 0)
		{
			*p2 = *p1;
			p2++;
		}
		*p1++;
	}
	*p2 = '\0';
	cout << str2 << endl;
}

int main()
{

	Delete();

	system("pause");
	return 0;
}