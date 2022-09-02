/* 11. WAP to take time as an input in below given format and
convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute” */

#include <conio.h>
#include <conio.h>

int main()
{
    int Hours, Minute;
    printf("Enter Time in HH:MM format :\n");
    scanf("%d:%d", &Hours, &Minute);

    printf("%d Hour and %d Minute", Hours,Minute);
    return 0;
}

//completed//
