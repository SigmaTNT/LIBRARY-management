// Syed Adeen Ashraf Ali Roll Number L1F20BSSE0080
// Muhammad Hamza Roll Number L1F20BSSE0074
// SECTION = N
#include<Windows.h>

#include <iostream>
#include<string>

using namespace std;

int main()
{


	cout << endl;
	cout << endl;

	cout << "			**Welcome to UCP Library**\n";

	cout << endl;
	cout << endl;

	int ms = 2000;
	int reply;

	int roll;
	string gender;
	int age;
	bool hope;

	int num;

	string name[13] = { "Ahmed faraz" , "Black Beauty","ABSAlOM,ABSALOM","East of EDEN","Number the stars","The Fault in Our Stars","The Kite Runner","A Thousand Splendid Suns","It all end with Us","Harry Potter", "Forty Rules of Love","Dare to Go!","The Great Gatsby" };
	string author[13] = { "Ahmed Sahib","Emily","William Faulkner","John Steinbeck","Lois Rolly","John Green","Khalid Hussaini","Khalid Hussaini","Collen Hoover","J.k.Rowling","Alif Shafaq","Kiran Baidi","F.Scott" };
	int year[13] = { 2001,2002,1939,1952,1989,2012,2017,2000,2006,1990,2015,1997,2000 };
	int edition[13] = { 2,1,1,3,1,2,1,2,1,2,1,3,4 };
	int quant[13] = { 1,3,3,2,5,2,4,3,2,3,5,5,1 };
	int ibn[13] = { 45,46,47,48,49,50,51,52,53,65,66,67,70 };

	int price[13] = { 500,450,700,800,900,200,250,350,420,430,1000,870,980 };

	int allage[10];
	int allroll[10];
	string allgend[10];
	int end;

	for (int i = 0; i < 10; i++)
	{
		allage[i] = 0;
	}


	for (int rep = 0; rep < 10; rep++)
	{
		for (int k = 0; k <= 1; k++)
		{
			Sleep(1000);

			cout << "Please enter your roll number\n";
			cin >> roll;
			if (roll > 9999)
			{
				cout << "Invalid Roll number\n";
				cout << "Roll number must be less than 5 characters\n";
				k = 0;

			}
			else
			{
				k = 1;
				allroll[rep] = roll;
			}


		}

		cout << "			Hi Roll Number " << roll << "\n";

		for (int b = 0; b <= 1; b++)
		{
			Sleep(1000);
			cout << "Please enter your gender (male/female)\n";
			cin >> gender;
			if (gender == "Male" || gender == "Female" || gender == "male" || gender == "female" || gender == "FEMALE" || gender == "MALE")
			{
				b = 1;
				allgend[rep] = gender;

			}
			else
			{
				cout << "Please enter the correct gender\n";
				b = 0;

			}
		}


		cout << "Please enter your age\n";
		cin >> age;

		allage[rep] = age;


		for (int a = 0; a <= 1; a++)
		{

			Sleep(ms);

			cout << "Please Enter the IBAN number of the book\n";
			cin >> num;
			cout << endl;

			cout << "We are Checking Please wait\n";
			Sleep(1000);

			bool flag = true;

			for (int i = 0; i < 13; i++)
			{
				if (num == ibn[i])
				{
					flag = true;
					break;
				}

				else
				{
					flag = false;
				}
			}


			if (flag == false)
			{
				cout << "IBAN number do not matches to any book in the library\n";
			}


			else
			{
				for (int i = 0; i < 13; i++)
				{
					if (num == ibn[i])
					{
						cout << "Your IBAN number which is " << ibn[i] << ", has been matched\n";
					}
				}

				cout << endl;
				cout << endl;

				cout << "		To Issue the Book enter '1' and to return the Book type '2'\n";
				int input;
				cin >> input;

				for (int j = 0; j <= 1; j++)
				{
					if (input == 1);

					else if (input == 2);

					else
					{

						cout << "Wrong Input\n";

						cout << "	To Issue the Book press '1' and to return the Book press '2'\n";

						cin >> input;
						j = 0;
						continue;

					}
				}

				if (input == 1)
				{
					for (int i = 0; i < 13; i++)

					{
						if (i == 0)
						{

							cout << "		Issuing the book\n";
							cout << endl;
							cout << "Please wait while we are checking\n";

						}
						Sleep(1000);


						if (num == ibn[i])
						{
							cout << "Quantity of the book = " << quant[i];
							cout << endl;
							if (quant[i] > 1)
							{


								cout << "	*** Book has been issued ***\n";
								Sleep(1000);
								cout << "Book name = " << name[i] << endl;
								Sleep(1000);
								cout << "Author: " << author[i] << endl;
								Sleep(1000);
								cout << "Edition = " << edition[i] << endl;;
								Sleep(1000);
								cout << "Published year = " << year[i] << endl;
								Sleep(1000);
								cout << "Price of this book = " << price[i] << endl;;
								quant[i] = quant[i] - 1;
								break;
							}
							else if (quant[i] <= 1)
							{

								cout << "Book Quantity is limited so Book cannot be issued\n";
								cout << endl;

							}

						}
					}

				}
				else if (input == 2)
				{
					for (int i = 0; i < 13; i++)
					{
						if (i == 0)
						{

							cout << "		Returning the book\n";
							cout << endl;
							cout << "Please wait while we are checking\n";

						}
						Sleep(ms);

						if (num == ibn[i])
						{
							cout << "Quantity of the book = " << quant[i];
							cout << endl;
							Sleep(1000);
							cout << "	*** Book has been returned ***\n";
							Sleep(1000);
							cout << "Book name = " << name[i] << endl;
							Sleep(1000);
							cout << "Author: " << author[i] << endl;
							Sleep(1000);
							cout << "Edition = " << edition[i] << endl;;
							Sleep(1000);
							cout << "Published year = " << year[i] << endl;
							Sleep(1000);
							cout << "Price of this book = " << price[i] << endl;
							quant[i] = quant[i] + 1;
							break;
						}

					}


				}
				cout << "Do you want to enter The IBAN number of another book\n";
				cout << "If yes than press '1' and if no then press '2'\n";
				cin >> reply;
				if (reply == 1)
				{
					a = 0;
				}
				else
				{
					a = 1;

				}
			}

		}
		if (rep < 10)
		{
			cout << "If You want to rerun the program then press 1 otherwise press any key and click enter" << endl;
			cin >> end;

			if (end == 1)
			{
				hope = true;
			}
			else
			{
				hope = false;
			}


		}
		if (hope == false)
		{
			break;
		}
		else
		{

			continue;
		}
	}


	for (int j = 0; j < 13; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			if (price[i + 1] < price[i])
			{
				int temp;
				temp = price[i + 1];
				price[i + 1] = price[i];
				price[i] = temp;

				int a;
				a = year[i + 1];
				year[i + 1] = year[i];
				year[i] = a;

				int b;
				b = edition[i + 1];
				edition[i + 1] = edition[i];
				edition[i] = b;

				int c;
				c = quant[i + 1];
				quant[i + 1] = quant[i];
				quant[i] = c;

				int d;

				d = ibn[i + 1];
				ibn[i + 1] = ibn[i];
				ibn[i] = d;

				string e;

				e = name[i + 1];
				name[i + 1] = name[i];
				name[i] = e;


				string f = "duyufub";

				f = author[i + 1];
				author[i + 1] = author[i];
				author[i] = f;

			}
		}

	}


	cout << "			************\n\n";

	cout << "	***Sorting The Details of Books of Library with Respect to their prices in Accending order***\n\n\n";

	for (int i = 0; i < 13; i++)
	{
		Sleep(1000);

		cout << "Price of book =" << price[i] << endl;
		cout << "Published in " << year[i] << endl;
		cout << "Edition of book is " << edition[i] << endl;
		cout << "Quantity in library = " << quant[i] << endl;
		cout << "IBAN number of the book = " << ibn[i] << endl;
		cout << "Name of book is " << name[i] << endl;
		cout << "Author: " << author[i] << endl;

		cout << endl;
		cout << endl;
	}

	Sleep(1500);

	cout << "Sorting Details of Users on basis of their ages in accending order\n\n";

	Sleep(ms);

	// For checking purpose

	cout << endl;

	//Bubble sort for age in accending order
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 9; i++)
		{

			if (allage[i] >allage[i+1])
			{
				int temp;
				temp = allage[i+1];
				allage[i+1] = allage[i];
				allage[i] = temp;
				
				string a;
				a = allgend[i+1];
				allgend[i + 1] = allgend[i];
				allgend[i] = a;

				int b;
				b = allroll[i+1];
				allroll[i + 1] = allroll[i];
				allroll[i] = b;
			}

		}

	}


	for (int i = 0; i < 10; i++)
	{
		if (allage[i] == 0)
		{
			continue;

		}

		else

		{
			Sleep(1000);

			cout << "Age of the user = " << allage[i] << endl;
			cout << "Roll Number of the user = " << allroll[i] << endl;
			cout << "Gender of the user = " << allgend[i] << endl;
			cout << endl;
			cout << endl;

		}

	}

	system("pause");
	return 0;

}



