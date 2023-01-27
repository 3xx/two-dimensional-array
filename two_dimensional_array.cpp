#include <iostream>
using namespace std;

int main()
{
	int Matrix[3][4] = { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} };

	cout << "two dimensional array" << endl;
	for (int i = 0; i < 3; i++)
	{

		for (int j = 0; j < 4; j++)
		{
			cout << "|" << i <<"|" <<  j << "|" << " = "  << Matrix[i][j] << endl;
		}
		cout << "----------" << endl;
	}
}

