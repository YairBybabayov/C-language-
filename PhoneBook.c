#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"PhoneBook.h"
static int index = 0;
void add
(
	phone_book_type p,
	char name[50],
	int age,
	int phone_number,
	int date_of_birth,
	char address[50]
) 
{
	strcpy_s(p.persons[index].name,50*sizeof(char), name);
	p.persons[index].age = age;
	p.persons[index].phone_number = phone_number;
	p.persons[index].date_of_birth = date_of_birth;
	strcpy_s(p.persons[index].address, 50 * sizeof(char), address);
	++index;

}
void delete(phone_book_type p,int phone_number) 
{
	strcpy_s(p.persons[index].name, 50 * sizeof(char), "\0");
	//p.persons[index].name = "NOT IN USE"; //need to check
	p.persons[index].age = 0;
	p.persons[index].phone_number = 0;
	p.persons[index].date_of_birth = 0;
	strcpy_s(p.persons[index].address, 50 * sizeof(char), "\0");
	//p.persons[index].address = "NOT IN USE"; //need to check
	--index;
}
void print(person person) 
{
	printf("Name: %s", person.name); //need to check
	printf("Age: %d", person.age);
	printf("Phone number: %d", person.phone_number);
	printf("Date of birth: %d", person.date_of_birth);
	printf("Address: %s", person.address); //need to check
}
person find(phone_book_type p, char name[50]) 
{
	for (size_t i = 0; i < 100; ++i) 
	{
		if (p.persons[i].name == name)
		{
			return p.persons[i];
		}
	}
}
int main(void) 
{
	phone_book_type pb;
	unsigned int loader = 1;
	while (loader != 0)
	{
		printf("Welecom To The Phone Book\n");
		printf("> Press 0 to leave\n");
		printf("> Press 1 to add\n");
		printf("> Press 2 to delete\n");
		printf("> Press 3 to find\n");


		scanf_s("%d", &loader);
		if (loader == 0)
		{
			printf("> Goodbye\n");
			return 0;
		}
		else if (loader != 0 && loader != 1 && loader != 2 && loader != 3)
		{
			printf("> invalid number, try again later\n");
		}
		else if (loader == 1)
		{
			char name[50];
			int age;
			int phone_number;
			int date_of_birth;
			char address[50];
			printf("> Enter a name\n");
			scanf_s("%s", name,49*sizeof(char));
			printf("> Enter an age\n");
			scanf_s("%d", &age);
			printf("> Enter a phone_number\n");
			scanf_s("%d", &phone_number);
			printf("> Enter a date_of_birth\n");
			scanf_s("%d", &date_of_birth);
			printf("> Enter an address\n");
			scanf_s("%s", address, 49 * sizeof(char));
			add(pb, name, age, phone_number, date_of_birth, address);
		}
		else if (loader == 2)
		{
			int phone_num;
			printf("> Enter a phone_number\n");
			scanf_s("%d", &phone_num);
			delete(pb, phone_num);
			printf("> Phone number deleted\n");

		}
		else if (loader == 3)
		{
			char name[50];
			printf("> Enter a name\n");
			scanf_s("%s", name, 49 * sizeof(char));
			print(find(pb, name));
		}
	}

}