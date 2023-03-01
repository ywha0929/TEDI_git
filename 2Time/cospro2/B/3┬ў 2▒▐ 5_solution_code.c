#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int member_age[], int member_age_len, char* transportation) {
	int answer = 0;

	int total_transportation_expenses = 0;
	int adult_expense = 0;
	int child_expense = 0;

	if(!strcmp(transportation, "Bus"))
	{
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if(!strcmp(transportation, "Ship"))
	{
		adult_expense = 30000;
		child_expense = 13000;
	}
	else if(!strcmp(transportation, "Airplane"))
	{
		adult_expense = 70000;
		child_expense = 45000;
	}

	if(member_age_len >= 10)
	{
		adult_expense = adult_expense / 10 * 9;
		child_expense = child_expense / 10 * 8;
	}

	for(int i = 0; i < member_age_len; ++i) 
	{
		if(member_age[i] > 19)
			total_transportation_expenses += adult_expense;
		else
			total_transportation_expenses += child_expense;
	}
	
	answer = total_transportation_expenses;
	return answer;
}