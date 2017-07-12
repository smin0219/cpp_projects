#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>
#include <limits>
#include <ios>

using namespace std;

typedef struct{
	int accountNumber;
	long balance;
 	string customerName;
	bool isEmpty;
}Account;

//Account userAccounts[100];

void maintainUserAccount();

/* Print Menu for account program */
void printMenu();

/* Get option from user and execute functions accordingly */
void selectOption();

/* Create account for the user with info */
Account createAccount();

/* Save account to the data array */
void saveAccount(Account account);

/* Print all the accounts from the database */
void printEntireAccounts();

/* Wrong Type Handler */
void wrongTypeHandler();

#endif

