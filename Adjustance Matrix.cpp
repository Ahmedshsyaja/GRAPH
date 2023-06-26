#include <iostream>
using namespace std;

int main()
{
	int** arr;
	int n, m;
	cout << "Input number of vertices: ";
	cin >> n;
	arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
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
		arr[x - 1][y - 1] = 1;
		arr[y - 1][x - 1] = 1;
	}
	cout << "Adjacency Matrix: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
