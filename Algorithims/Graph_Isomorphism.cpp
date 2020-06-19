//This will work on simple undirected graphs 
//Author: Michael Grossman

#include <iostream>

class Graph
{
	public:
	
	// constructors + deconstructor
	Graph();
	explicit Graph(const int s);
	explicit Graph(const int s, int**& a);
	~Graph();

	//i/o
	friend std::istream& operator >> (std::istream& in, Graph& g1);
	friend std::ostream& operator << (std::ostream& out, const Graph& g1);

	//operator overload for ==
	bool operator == (const Graph& test) const;

	//accessor
	int getSize();

	private:
	int** array;
	int size;
};

int main()
{
	Graph g1, g2;
	std::cin >> g1;	
	std::cin >> g2;
	std::cout << g1 << std::endl;
	std::cout << g2 << std::endl;
	if(g1 == g2)
	{
		std::cout << "These two graphs are isomorphic";
	}

}
Graph::Graph()
{
	array = NULL;
	size = 0;	
}
Graph::Graph(const int s)
{
	size = s;
	array = new int*[s];
	for(int i = 0; i < size; ++i)
	{
		array[i] = new int[s+1];
	}
}
Graph::Graph(const int s, int**& a)
{
	size = s;
	array = a;
	a = NULL;
}
Graph::~Graph()
{
	if(array == NULL)
	{
		return;
	}
	else
	{
		for(int i = 0; i < size + 1; ++i)
		{
			delete [] array[i];
			array[i] = NULL;
		}
		delete [] array;
		array = NULL;
	}
}
int Graph::getSize()
{
	return size;
}
std::istream& operator >> (std::istream& in, Graph& g1)
{
	int m;
	char yesOrNo;
	std::cout << "Please Enter the number of Nodes for the graph: ";
	in >> m;
	g1.size = m;
	g1.array = new int*[g1.size];
	for(int i = 0; i < g1.size; ++i)
	{
		g1.array[i] = new int[g1.size+1];
		g1.array[i][g1.size] = 0;
	}
	
	std::cout << std::endl << "Nodes will be recorded in numerically ascending order starting with 0" << std::endl;
	std::cout << "Please pay attention as nodes will be recorded symmertrically. "<<std::endl;
	std::cout << "We will not ask if B connects A, if you already stated A connects B" << std::endl << std::endl;
	for (int i = 0; i < g1.size - 1; ++i)
	{
		for (int j = i; j < g1.size; ++j)
		{
			if(i == j)
			{
				g1.array[i][j] = 0;
			}
			else
			{
				std::cout << "Is Node# " << i << " connected to Node# " << j << "? (y/n)" << std::endl;
				in >> yesOrNo;
				if(yesOrNo == 'Y' || yesOrNo == 'y')
				{
					g1.array[i][j] = 1;
					g1.array[i][g1.size] += 1;
					g1.array[j][i] = 1;
					g1.array[j][g1.size] += 1;
				}
				else
				{
					g1.array[i][j] = 0;
					g1.array[j][i] = 0;
				}
			}
		}
	}
	return in;
}
std::ostream& operator << (std::ostream& out, const Graph& g1)
{
	out << "Graph as Matrix: " << std::endl;
	for(int i = 0; i < g1.size; ++i)
	{	
		out << i << ". ";
		for(int j = 0; j < g1.size; ++j)
		{
			out << g1.array[i][j] << " ";
		}
		out << std::endl;
	}
	return out;
}
bool Graph::operator == (const Graph& test) const
{
	
	if(size == test.getSize())
	{
		
	}
	else
		return false;
}
