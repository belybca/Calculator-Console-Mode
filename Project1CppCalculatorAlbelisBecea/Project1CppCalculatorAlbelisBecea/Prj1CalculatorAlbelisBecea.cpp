#include<iostream>

using namespace std;

void main()

{
	//Variable Declaration
	float uservalue, sum, mult, result, value1, value2;
	char confirm;
	short choice, aditionval, multiplicationval;

	//Loop to go back to the main screen
	do {
		cin.ignore();
		/*---------------------------------------------------------------------------------------------------------------------
		MAIN SCREEN
		---------------------------------------------------------------------------------------------------------------------*/
		system("cls");
		cout << "\t     NUMERIC CALCULATOR\n\t Main Menu Operators Choice\n\t----------------------------\n\n";
		cout << " 1 - ADDITION\n";
		cout << " 2 - DIVISION\n";
		cout << " 3 - MULTIPLICATION\n";
		cout << " 4 - SUBTRACTION\n";
		cout << " 5 - QUIT\n\n";

		do
		{
			cout << "MAKE YOUR CHOICE (1 - 5): ";
			cin >> choice;
		} while (choice < 1 || choice>5);

		/*---------------------------------------------------------------------------------------------------------------------
		CHOICE NUMBER 5 QUIT
		---------------------------------------------------------------------------------------------------------------------*/
		if (choice == 5)
		{

			system("cls");
			cout << "\n\n\n\t    This program was build by Albelis Becea\n\n\n\n\t\t Thank you for using my program\n\n\n\n\t  All the rigth belong to Albelis Becea ID 2110083\n\n\n\n";

			system("pause");
		}
		/*---------------------------------------------------------------------------------------------------------------------
		CHOICE NUMBER 1 ADDITION
		---------------------------------------------------------------------------------------------------------------------*/
		else if (choice == 1)
		{

			do {
				system("cls");
				sum = 0;
				cout << "\tADDITION OPERATION\n\t-------------------\n\n";

				cout << "Enter the number of Values to add : ";
				cin >> aditionval;
				while (aditionval < 2 || aditionval>20)
				{
					cout << "Enter the number of Values to add (Min 2 - Max 20): ";
					cin >> aditionval;
				}



				for (short counter = 1; counter <= aditionval; counter += 1)
				{
					cout << "  Enter Value " << counter << " :  ";
					cin >> uservalue;
					sum = uservalue + sum;
				}

				cout << "                 ------\n";
				cout << "  The Result is    " << sum << "\n\n";

				do
				{
					cout << "Do you want to do another addition ? (y/n) : ";
					cin >> confirm;
				} while (confirm != 'n' && confirm != 'N' && confirm != 'y' && confirm != 'Y');

			} while (confirm == 'y' || confirm == 'Y');
		}
		/*---------------------------------------------------------------------------------------------------------------------
		CHOICE NUMBER 2 DIVISION
		---------------------------------------------------------------------------------------------------------------------*/
		else if (choice == 2)
		{

			do {
				system("cls");
				cout << "\tDIVISION OPERATION\n\t-------------------\n\n";

				cout << "  Enter the value to divide :    ";
				cin >> value1;
				
				cout << "  Enter the divider:    ";
				cin >> value2;
				while (value2 == 0)
				{
					cout << "  Enter the divider (not 0) :    ";
					cin >> value2;
				} 
				
				result = value1 / value2;
				cout << "                              ------\n";
				cout << "            The Result is     " << result << "\n\n";

				do
				{
					cout << "Do you want to do another division ? (y/n) : ";
					cin >> confirm;
				} while (confirm != 'n' && confirm != 'N' && confirm != 'y' && confirm != 'Y');

			} while (confirm == 'y' || confirm == 'Y');
		}
		/*---------------------------------------------------------------------------------------------------------------------
		CHOICE NUMBER 1 MULTIPLICATION
		---------------------------------------------------------------------------------------------------------------------*/
		else if (choice == 3)
		{
			do {
				system("cls");
				mult = 1;
				cout << "\tMULTIPLICATION OPERATION\n\t-------------------\n\n";

				cout << "Enter the number of Values to multiply : ";
				cin >> multiplicationval;

				while (multiplicationval < 2 || multiplicationval>20) {
					cout << "Enter the number of Values to multiply (Min 2 - Max 20): ";
					cin >> multiplicationval;
				}


				for (short counter = 1; counter <= multiplicationval; counter += 1)
				{
					cout << "  Enter Value " << counter << " :  ";
					cin >> uservalue;
					mult = uservalue * mult;
				}
				cout << "                 ------\n";
				cout << "  The Result is    " << mult << "\n\n";

				do
				{
					cout << "Do you want to do another multiplication ? (y/n) : ";
					cin >> confirm;
				} while (confirm != 'n' && confirm != 'N' && confirm != 'y' && confirm != 'Y');

			} while (confirm == 'y' || confirm == 'Y');

		}
		/*---------------------------------------------------------------------------------------------------------------------
		CHOICE NUMBER 4 SUBSTRACTION
		---------------------------------------------------------------------------------------------------------------------*/
		else if (choice == 4)
		{

			do {
				system("cls");
				cout << "\tSUBTRACTION OPERATION\n\t-------------------\n\n";

				cout << "  Enter the first value :      ";
				cin >> value1;

				cout << "  Enter value to subtract :    ";
				cin >> value2;

				result = value1 - value2;
				cout << "                             ------\n";
				cout << "           The Result is       " << result << "\n\n";

				do
				{
					cout << "Do you want to do another subtraction ? (y/n) : ";
					cin >> confirm;
				} while (confirm != 'n' && confirm != 'N' && confirm != 'y' && confirm != 'Y');

			} while (confirm == 'y' || confirm == 'Y');
		}


	} while (confirm == 'n' || confirm == 'N');


}