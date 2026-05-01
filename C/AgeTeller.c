//I have not build this, it is built with the help of chatgpt and now i'm learning how it Worked.
#include <stdio.h>
#include <time.h>

int main() {
    int day, month, year;
    int currentDay, currentMonth, currentYear;
    int age;

    // Get the current date
    time_t now;
    struct tm *local;

    time(&now);
    local = localtime(&now);

    currentDay = local->tm_mday;
    currentMonth = local->tm_mon + 1;  // tm_mon is 0-based
    currentYear = local->tm_year + 1900;  // tm_year is years since 1900

    // Prompt the user for their date of birth
    printf("Enter your date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    // Calculate the age
    age = currentYear - year;

    // Adjust age if the birthday has not occurred yet this year
    if (month > currentMonth || (month == currentMonth && day > currentDay)) {
        age--;
    }

    // Display the result
    printf("You are %d years old.\n", age);

    return 0;
}
