
//	Student of Inland Norway University of Applied Sciences [2020/2021]
//  Made by Hans Ola Hoftun

#include <iostream>
#include <string>
#include <conio.h>

// I thought i would complete all the tasks in a single .cpp file. 
// I don't know if this is worse for preformance, but it was much easier to work on,
// aswell as handing, because a few of the projects use the same #include's. 
//
// I went about solving this using Functions to keep the main() all nice and tidy lookin.
// And using a switchcase to detect which-one to select next.

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
		_getch();
		

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
		_getch();


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
		_getch();
		
		return 0;
	}

	//Task 4
	int Task04()
	{





		//end procedure
		std::cin.clear();
		std::cout << "-----------------------------------------------------------------------------\n";
		std::cout << "This was task 4 \n";
		std::cout << "Press any key to continue to the next task \n";
		_getch();


		return 0;
	}

	//Task 5
	int Task05()
	{
		std::cin.clear();
		std::cout << "-----------------------------------------------------------------------------\n";
		std::cout << "That was the last task. hope this would\n" << "be a passing grade in a compulsary, Just very overcomplicated! ";
		_getch();
		

		return 0;
	}

	


	//Main
	int main()
	{
		
		index = Task01();
		std::cout << std::endl << std::endl;
		index = Task02();
		std::cout << std::endl << std::endl;
		
		index = Task03();
		std::cout << std::endl << std::endl;
		index = Task04();
		std::cout << std::endl << std::endl;
		index = Task05();
		std::cout << std::endl << std::endl;

	}
