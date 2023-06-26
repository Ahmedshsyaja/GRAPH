#include <iostream>
using namespace std;

int main()
{
	int** arr;
	int* count;
	int n, m;
	cout << "Input number of vertices: ";
	cin >> n;
	arr = new int* [n];
	count = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
		count[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = 0;
		}
	}
	cout << "Enter number of edges: ";
	cin >> m;
	int x, y;
	for (int k = 0; k < m; k++)
	{
		cout << "Enter 1st vertice: ";
		cin >> x;
		cout << "Enter 2nd vertice: ";
		cin >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	cout << "Adjacency Matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 1)
			{
				count[i]++;
			}
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int** list;
	list = new int* [n];
	for (int i = 0; i < n; i++)
	{
		list[i] = new int[count[i]];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < count[i]; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (arr[i][k] == 1)
				{
					list[i][j] = k;
					j++;
				}
			}
		}
	}
	cout << "adjacency list: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "for " << i << " : ";
		for (int j = 0; j < count[i]; j++)
		{
			cout << list[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
