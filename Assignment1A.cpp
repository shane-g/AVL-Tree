// Assignment1A.cpp : Defines the entry point for the console application.
//Shane Grimes Assignment1A 18/09/2018 -- AVL Tree
//K00215516
#include "stdafx.h"
#include "AVL.h"
#include <iostream>
#include <string>
using namespace std;
TreeType<string> a;

int main()
{
	system("color 3F");
	cout << "\tAVL Tree Menu" << endl;
	cout << "\n\tSelect an option from the menu." << endl;
	int option;
	string word;
	do
	{
		cout << "\t1)Insert into an AVL Tree." << endl;
		cout << "\t2)Print the contents of the AVL Tree." << endl;
		cout << "\t3)Exit from the application." << endl;
		cout << "\tSelected menu option: ";
		cin >> option;
		cout << "\n";
		switch (option)
		{
			case 1: //Insert into tree
				cout << "\tPlease enter words into AVL Tree." << endl;
				cout << "\t";
				cin >> word;
				cout << "\n";
				a.InsertItem(word);
				break;

			case 2: //display AVL Tree
				cout << "\tThe AVL  Tree as follows:" << endl;
				a.Print();
				break;

			case 3: //exit application
				cout << "\tExiting from the AVL Tree application..\n" << endl;
				break;

			default:
				cout << "\tInvalid Menu Option!" << endl;
				cout << "\tPlease select an option from the menu." << endl;
		}
	} while (option != 3);
    return 0;
}

