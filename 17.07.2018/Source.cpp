#include<iostream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int n = 0;

start:

	cout << "������� �������: ";
	cin >> n;

	if (n == 1)
	{
		const int n = 8;
		const int m = 6;
		int a[n][m];
		int b[n];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				a[i][j] = rand() % 20;
				cout << setw(5) << a[i][j] << " ";
			}
			cout << endl;
		}

		int max = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			max = INT_MIN;
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] > max)
					max = a[i][j];
			}
			b[i] = max;
		}

		cout << endl << endl;

		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}

		for (int pass = 0; pass < n - 1; pass++)
		{
			for (int k = 0; k < n - 1; k++)
			{
				if (b[k] > b[k + 1])
				{
					swap(b[k], b[k + 1]);

					for (int i = 0; i < m; i++)
					{
						swap(a[k][i], a[k + 1][i]);
					}
				}
			}
		}

		cout << endl << endl;
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl << endl;
		cout << "Result = " << endl << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << setw(5) << a[i][j] << " ";
			}
			cout << endl;
		}

	}

	else if (n == 2)
	{
		const int n = 8;
		const int m = 6;
		int a[n][m];
		int b[n];
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				a[i][j] = rand() % 20;
				cout << setw(5) << a[i][j] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < n; i++)
		{
			sum = 0;
			for (int j = 0; j < m; j++)
			{
				sum += a[i][j];
			}
			b[i] = sum;
		}

		cout << endl << endl;

		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}

		for (int pass = 0; pass < n - 1; pass++)
		{
			for (int k = 0; k < n - 1; k++)
			{
				if (b[k] > b[k + 1])
				{
					swap(b[k], b[k + 1]);

					for (int i = 0; i < m; i++)
					{
						swap(a[k][i], a[k + 1][i]);
					}
				}
			}
		}

		cout << endl << endl;
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl << endl;
		cout << "Result = " << endl << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << setw(5) << a[i][j] << " ";
			}
			cout << endl;
		}
	}

	else if (n == 3)
	{
		const int n = 4;
		int a[n];

		cout << "������� IP ������: ";

		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (a[i] >= 0 && a[i] <= 255)
			{
				cout << a[i] << ".";
			}
			else
			{
				cout << "�� ������ � ������ �� 0 �� 255." << endl;
				break;
			}
		}
		cout << endl;
	}

	else if (n == 4)
	{
		const int n = 10;
		const int m = 10;
		int a[n][m];

		for (int i = 0; i < n; i++)
		{
			cout << "������� � " << i + 1 << " ";
			for (int j = 0; j < m; j++)
			{
				a[i][j] = rand() % 4 + 8;
				cout << setw(5) << a[i][j] << " ";
			}

			cout << endl;
		}

		int choice;
		int e_count = 0;
		bool e_f = false;
		bool g_f = false;
		int g_count = 0;

		while (true)
		{
			cout << "�������� �� ��������� ���������: " << endl;
			cout << "1)	������� � ���������� ����������" << endl;
			cout << "2)	������� � ���������� ����������" << endl;
			cout << "3)	������ ������ ����������� �������� � ��� ������� ���" << endl;
			cout << "4)	������ ������ �� ���������� ����������" << endl;
			cout << "0)	��� ������" << endl;

			cin >> choice;

			switch (choice)
			{
			case 1:
			{
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < m; j++)
					{
						if (a[i][j] > 10)
						{
							e_f = false;
							break;
						}
					}
					if (e_f)
						e_count++;
				}

				cout << e_count*100.0 / n << endl;
			}
			break;
			case 2:
			{
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < m; j++)
					{
						if (a[i][j] > 7 && a[i][j] < 10)
						{
							g_f = false;
							break;
						}
					}
					if (g_f)
						g_count++;
				}

				cout << g_count*100.0 / n << endl;

			}
			break;

			case 3:
			{
				int n = 0;
				int sum = 0;
				double average = 0;
				cout << "������� ����� ��������: ";
				cin >> n;

				for (int i = 0; i < m; i++)
				{
					cout << a[n - 1][i] << " ";
				}

				cout << endl;

				for (int i = 0; i < m; i++)
				{
					sum += a[n - 1][i];
					average = (double)sum / 10;
				}
				cout << "������� ���� = " << average;
				cout << endl;

			}
			break;

			case 4:
			{

			}
			break;

			case 0:
			{
				exit(0);
			}
			break;
			default:
				break;
			}
		}

	}


	goto start;
	system("pause");
	return 0;

}