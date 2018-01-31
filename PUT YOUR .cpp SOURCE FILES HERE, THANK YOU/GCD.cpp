/*

*/
#include <iostream>
#include <cstdlib>

using namespace std;

int GCD(int x, int y)
{
	if ((y <= x) && (x % y == 0))
	{
		return (y);
	}
	else if (x < y)
	{
		GCD(y, x);
	}
	else
	{
		GCD(y, (x % y));
	}
}

int main()
{
	int x;
	int y;
	cout << "#################################" << endl;
	cout << "Please Enter 0 To End The Program" << endl;
	cout << "#################################" << endl;
	cout << endl;

	for (int z = 0; z < 1000; z++)
	{
		cout << "Enter Number: ";
		cin >> x;

		if (x == 0)
		{
			cout << endl;
			cout << "##############" << endl;
			cout << "ENDING PROGRAM" << endl;
			cout << "##############" << endl;
			break;
		}
		if (x > 9000)
		{
			cout << endl;
			cout << "ERROR 1: That Number is too high" << endl;
			cout << endl;
			continue;
		}
		//Encountering specific bug where if user encounters Error 1 before Error 2
		//An endless loop occurs.
		//Unsure of how to fix
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << endl;
			cout << "ERROR 2: Please Enter A Numeric Value" << endl;
			cout << endl;
			continue;
		}
		cout << endl;
		cout << "Enter Another Number: ";
		cin >> y;

		if (y == 0)
		{
			cout << "##############" << endl;
			cout << "ENDING PROGRAM" << endl;
			cout << "##############" << endl;
			break;
		}
		if (y > 9000)
		{
			cout << endl;
			cout << "ERROR 1: That number is too high" << endl;
			cout << endl;
			cout << "Enter Another Number:";
			cin >> y;
		}
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << endl;
			cout << "ERROR 2: Please Enter A Numeric Value" << endl;
			cout << endl;
			cout << "##################" << endl;
			cout << "RESTARTING PROGRAM" << endl;
			cout << "##################" << endl;
			cout << endl;
			continue;
		}

		cout << endl;
		cout << "GCD of " << x << " and "
			<< y << " is: " << GCD(x, y) << endl;
		cout << endl;

	}

	system("pause");
	return 0;
}