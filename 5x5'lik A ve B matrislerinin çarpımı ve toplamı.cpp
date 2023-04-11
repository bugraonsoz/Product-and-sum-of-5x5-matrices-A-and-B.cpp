#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>
#include<locale.h>
#include<iomanip>

using namespace std;
int main()
{

	int continue = 0;

	do {
		int matris1[5][5];
		int matris2[5][5];
		int matrist[5][5];
		int matrisc[5][5];
	
		
		srand(time(NULL));
		cout << "the A matrix:" << endl;
		for (int i = 0; i < 5; i++)
		{
			
			for (int j = 0; j < 5; j++)
			{	
				matris1[i][j]=(rand()%11);
				cout << setw(5) << matris1[i][j];
			}
			cout << endl;
		}


		
		cout << "the B matrix" << endl;
		for (int i = 0; i < 5; i++)
		{
			
		for (int j = 0; j < 5; j++)
			{
				matris2[i][j] = (rand() % 11);
				cout << setw(5) << matris2[i][j];
				
			}
			cout << endl;
		}
		int c;
		do {

			cout << "Please enter a process:(1-Sum 2-Product)";

			cin >> c;
			if (c == 1)
			{
				cout << "the Sum of Matrices:" << endl;
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						matrist[i][j] = matris1[i][j] + matris2[i][j];
						cout << setw(5) << matrist[i][j];
					}
					cout << endl;
				}
			}
			else if (c == 2)
			{
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						matrisc[i][j] = 0;
					}
				}
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						for (int k = 0; k < 5; k++)
						{
							matrisc[i][j] += matris1[i][k] * matris2[k][j];
						}
					}
				}
				cout << "the Product of Matrices:" << endl;
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 5; j++)
					{
						cout << setw(5) << matrisc[i][j];
					}
					cout << endl;
				}
			}
			else
				cout << "You entered the wrong value. Please try again." << endl;

		} while (!(c == 1 || c == 2));


		

		char continue0;
		int continue1 = 0;
		cout << "Do you want continue?=(Y/N)" << endl;
		do {
			cin continue0;
			if (comtinue0 == 'Y' || continue0 == 'y')
			{
				conitnue1 = 1;
				continue = 0;
			}

			else if (continue0 == 'N' || continue0 == 'n')
			{
				continue1 = 1;
				continue = 1;
			}
			else {
				cout << "You entered the wrong value. Please try again.";
				continue1 = 0;
			}

		} while (continue1 == 0);

	} while (continue == 0);

	cout << "Good Bye...";

}

