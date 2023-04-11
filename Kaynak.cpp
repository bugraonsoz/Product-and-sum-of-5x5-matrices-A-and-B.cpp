
#include <iostream>
#include <string>
#include <cstdlib>
#include<ctime>
#include<locale.h>
#include<iomanip>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int devam = 0;

	do {
		int matris1[5][5];
		int matris2[5][5];
		int matrist[5][5];
		int matrisc[5][5];
	
		
		srand(time(NULL));
		cout << "A matrisi:" << endl;
		for (int i = 0; i < 5; i++)
		{
			
			for (int j = 0; j < 5; j++)
			{	
				matris1[i][j]=(rand()%11);
				cout << setw(5) << matris1[i][j];
			}
			cout << endl;
		}

		
		
		cout << "B matrisi:" << endl;
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

			cout << "Bir islem seciniz:(1-Toplam 2-Carpma)";

			cin >> c;
			if (c == 1)
			{
				cout << "Matrisler Toplami:" << endl;
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
				cout << "Matris Carpimi:" << endl;
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
				cout << "Tanimli olmayan bir deger girdiniz. Lutfen tekrar deneyin." << endl;

		} while (!(c == 1 || c == 2));



		char devam0;
		int devam1 = 0;
		cout << "devam etmek istiyor musun?=(E/H)" << endl;
		do {
			cin >> devam0;
			if (devam0 == 'E' || devam0 == 'e')
			{
				devam1 = 1;
				devam = 0;
			}

			else if (devam0 == 'H' || devam0 == 'h')
			{
				devam1 = 1;
				devam = 1;
			}
			else {
				cout << "Tanimli olmayan bir deger girdiniz. Lutfen tekrar giriniz.";
				devam1 = 0;
			}

		} while (devam1 == 0);

	} while (devam == 0);

	cout << "Hosca kalin...";

}

