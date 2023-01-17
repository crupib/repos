// Your First C++ Program

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int daysinmonth(int month, int year);

int main() {
    int day, month, year, seq_count;
  
    int days_in_months[13];
    printf("Enter month (01-12) ... \n");
    scanf_s("%d", &month);
    printf("Enter day (01-31) ... \n");
    scanf_s("%d", &day);
    printf("Enter year (1800 ->) ... \n");
    scanf_s("%d", &year);

    for (int i = 1; i <= 12; i++)
        days_in_months[i] = daysinmonth(i, year);
    seq_count = 0;
    for (int i = 1; i <= (month - 1); i++)
        seq_count += days_in_months[i];
    seq_count += day;
    printf("Today is the %d sequential day of the year\n", seq_count);
    return 0;
}

int daysinmonth(int month, int year)
{
    int days;
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0)
            days = 29;
        else days = 28;
    }
    else
    {
        if ( (month == 4 ) || (month == 6) ||( month == 9) || (month = 11))
            days = 30;
        else
            days = 31;
    }
    return (days);
}