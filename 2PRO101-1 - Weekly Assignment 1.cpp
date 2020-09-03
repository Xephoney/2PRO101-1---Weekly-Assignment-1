
//	Student of Inland Norway University of Applied Sciences [2020/2021]
//  Made by Hans Ola Hoftun

#include <iostream>
#include <string>
#include <conio.h>

// I thought i would complete all the tasks in a single .cpp file. 
// I don't know if this is worse for preformance, but i thought it would be nice for learning Functions.
//
// I went about solving this using Functions to keep the main() all nice and tidy lookin.
// And using a 

int Task01();


int index;

	//Task 1
	int Task01() 
	{
		std::string FullName;
		char Initial = 's';
		short Age = 0;
		long phone_number;
		std::string Birthday;

		//Introduction and name
		std::cout << "Hi there! I would love to get to know you some more! \n";
		std::cout << "What is your full name? " << ": ";
		std::getline(std::cin, FullName);

		//Initial
		std::cout << "Very nice to meet you " << FullName << "\n";
		std::cout << "Whats your initial? (I.E : J for Jason.) \n";
		std::cin >> Initial;

		//Age
		std::cout << "Awesome, How old are you? \n";
		std::cin >> Age;

		//phone number
		std::cout << "What is your phone number? \n";
		std::cin >> phone_number;

		//Birthday
		std::cout << "Great! Last, but not least, When is your birthday? \n";
		std::cout << "(Day/Month/Year) : ";
		std::cin.ignore();
		std::getline(std::cin, Birthday);

		//Summary
		std::cout << "Great! let me just see if got all that correct: \n";
		std::cout << "||---------------------------------- \n";
		std::cout << "||---------| Current Info |--------- \n";
		std::cout << "||---------------------------------- \n";
		std::cout << "|| Name		 | " << FullName << "\n";
		std::cout << "|| Initial	 | " << Initial << "\n";
		std::cout << "|| Age		 | " << Age << "\n";
		std::cout << "|| Phone	 | " << phone_number << "\n";
		std::cout << "|| Birthday	 | " << Birthday << "\n";
		std::cout << "||---------------------------------- \n";
		std::cout << "||----------| Very Nice |----------- \n";
		std::cout << "||---------------------------------- \n" << std::endl;
		

		std::cin.clear();
		std::cout << "-----------------------------------------------------------------------------\n";
		std::cout << "That was task 1 \n";
		std::cout << "Press any key to continue to the next task \n";
		int blue = _getch();
		

		return 0;
	}

	//Task 2
	int Task02()
	{
		std::string name;
		int age; 
		char answer;
		std::string prefrence;

		std::cout << "Whats your name? :  \n";
		std::getline(std::cin, name);

		std::cout << "Cool, How old are you? \n";
		std::cin >> age;

		std::cout << "Okay, now that the formalities are out of the way, here comes the real question!\n";
		std::cout << "Do you like Coffee? You know, the beverage? \n" << "(y/n) : ";
		std::cin.ignore();
		std::cin >> answer;

		if (answer == 'y')
		{
			prefrence = "And yet, it seems you like coffee. Incredible";
		}
		else if (answer == 'n')
		{
			prefrence = "And yet, it seems as though you don't like the beverage used by the people who make the world go 'round... Curious";
		}

		//Summary
		std::cout << "Your name is " << name << std::endl;
		std::cout << "You are a total of " << age << " years old" << std::endl;
		std::cout << prefrence << std::endl << std::endl << std::endl;

		std::cin.clear();
		std::cout << "-----------------------------------------------------------------------------\n";
		std::cout << "That was task 2 \n";
		std::cout << "Press any key to continue \n";
		int blue = _getch();


		return 0;
	}

	//Task 3
	int Task03()
	{
		int age;
		std::cout << "Hello there! Whats your age? \n";
		std::cin >> age;
		if (age < 20)
		{
			std::cout << "You are young \n";
		}
		else if (age >= 20 && age <= 40)
		{
			std::cout << "You are a grown up! \n";
		}
		else if (age > 40 && age < 60)
		{
			//Kinda old
			std::cout << "You are old \n";
		}
		else if (age >= 60)
		{
			//old.. 4real
			std::cout << "You ARE really old \n";
		}

		std::cin.clear();
		std::cout << "-----------------------------------------------------------------------------\n";
		std::cout << "That was task 3 \n";
		std::cout << "Press any key to continue to the next task \n";
		int blue = _getch();
		
		return 0;
	}

	//Task 4
	int Task04()
	{
		int beverageChoice;
		//What is your favorite beverage? 
		std::cout << "Hi! What is your preferred beverage of choice? \n";
		std::cout << "Just select the number that corresponds with your choise : \n";
		std::cout << "1. Coffee \n" << "2. Tea \n" << "3. Coca Cola \n";
		std::cin >> beverageChoice;

		switch (beverageChoice)
		{
		case 1 :
			std::cout << "Coffee is delicious! \n";
			break;
		case 2 : 
			std::cout << "Tea gives you peace of mind. \n";
			break;
		case 3 :
			std::cout << "Coke will give you a white smile. \n";
		default:
			break;
		}

		//End procedure
		std::cin.clear();
		std::cout << " \n-----------------------------------------------------------------------------\n";
		std::cout << "This was task 4 \n";
		std::cout << "Press any key to continue to the next task \n";
		int blue = _getch();

		return 0;
	}

	//Task 5 - Print a grid
	int Task05()
	{
		/*
		//std::cout << "-------------------";
		//std::cout << "på samme linje";
		std::cout << "		1	2	3	4	5	6		" << std::endl;
		std::cout << "	   =======================" << std::endl;
		std::cout << " A  | * | * | * | * | * | * |";
		std::cout << "	   =======================" << std::endl;
		std::cout << " B  | * | * | * | * | * | * |";
		std::cout << "	   =======================" << std::endl;
		std::cout << " C  | * | * | * | * | * | * |" << std::endl;
		std::cout << "	   =======================" << std::endl;
		std::cout << " D  | * | * | * | * | * | * |" << std::endl;
		std::cout << "	   =======================" << std::endl;
		
		
		*/
		int tall[] = { 1,2,3,4,5,6 };
		std::string bokstaver[] = { "A","B","C","D" };
		
		int tallLengde = sizeof(tall)/sizeof(tall[0]);
		int bokstaverLengde = sizeof(bokstaver)/sizeof(bokstaver[0]);



		std::cout << tallLengde << std::endl; 
		std::cout << bokstaverLengde ;


		

		/*
		std::cin.clear();
		std::cout << "-----------------------------------------------------------------------------\n";
		std::cout << "That was the last task. hope this would\n" << "be a passing grade in a compulsary, Just very overcomplicated! ";
		int blue = _getch();
		
		*/
		return 0;
	}

	


	//Main
	int main()
	{
		
		/*index = Task01();
		std::cout << std::endl << std::endl;
		index = Task02();
		std::cout << std::endl << std::endl;
		index = Task03();
		std::cout << std::endl << std::endl;
		index = Task04(); 
		std::cout << std::endl << std::endl; */
		index = Task05();
		std::cout << std::endl << std::endl;
		

	}	