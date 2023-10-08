#pragma once
#include<stdlib.h>
#include<stdio.h>

/**
* @brief Determines the bigger number
* @param num1 the first number
* @param num2 the second number
*
* @return the biggest number
*/
int Max(int num1, int num2);
/**
* @brief Determines the smaller number
* @param num1 the first number
* @param num2 the second number
*
* @return the smallest number
*/
int Min(int num1, int num2);
typedef struct person_type
{
	char name[50];
	int age;
	int phone_number;
	int date_of_birth;
	char address[50];
} person;
typedef struct phone_book_type
{
	person persons[100];
} phone_book_type;

void add
(
	char name[50],
	int age,
	int phone_number,
	int date_of_birth,
	char address[50]
);
void delete(int phone_number);
void print(person p);
person find(char name[50]);
