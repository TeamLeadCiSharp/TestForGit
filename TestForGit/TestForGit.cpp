#include <iostream>
#include <vector>
#include <string>
using namespace std;

void Func(std::vector<string>& a, int& n) 
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int n = 10;
	std:vector<string> a = { "abobus", "test", "github" };
	for (int i = 0; i < n; i++)
	{
		a.push_back("a");
	}
	Func(a, n);

	return 0;
}


