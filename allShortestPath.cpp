#include <iostream>
#define INFINITY 1000000
using namespace std;

class WeightedGraph
{
private:
	int vertices;
	int matrix[100][100] = { 0 };
	int path[100][100] = { 0 };
	void PathTraversal(int i, int j)
	{
		int next = i;
		cout << i;
		while (next != j)
		{
			next = path[next][j];
			cout << "->" << next;
		}
		cout << endl;
	}
public:
	WeightedGraph() : vertices(0) { }
	void ReadMatrix()
	{
		cin >> vertices;
		for (int i = 0; i < vertices; i++)
			for (int j = 0; j < vertices; j++)
			{
				cin >> matrix[i][j];
				if (matrix[i][j] == 0)
					matrix[i][j] = INFINITY;
				if (matrix[i][j] == INFINITY)
					path[i][j] = -1;
				else
					path[i][j] = j;
			}
	}
	void ShortestPath()
	{
		for (int k = 0; k < vertices; k++)
			for (int i = 0; i < vertices; i++)
				for (int j = 0; j < vertices; j++)
				{
					if ((matrix[i][k] + matrix[k][j]) < matrix[i][j])
					{
						matrix[i][j] = matrix[i][k] + matrix[k][j];
						path[i][j] = path[i][k];
					}
					else if ((matrix[i][k] + matrix[k][j]) == matrix[i][j])
					{
						if (path[i][j] > path[i][k])
							path[i][j] = path[i][k];
					}
				}
	}
	void ShowShortestPath()
	{
		for (int i = 0; i < vertices; i++)
			for (int j = 0; j < vertices; j++)
				if (i != j && matrix[i][j] < INFINITY)
				{
					cout << "Path(" << i << "," << j << "):";
					PathTraversal(i, j);
					cout << "Cost:" << matrix[i][j] << endl;
				}			
	}
};
int main()
{
	WeightedGraph weightedGraph;
	weightedGraph.ReadMatrix();
	weightedGraph.ShortestPath();
	weightedGraph.ShowShortestPath();
	system("pause");
	return 0;
}