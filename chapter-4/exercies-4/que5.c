/*Write a program that requests the user's first name and then the user's last
name. Have it print the entered names on one line and the number of letters in
each name on the following line. Align each letter count with the end of the
corresponding name, as in the following:
Melissa Honeybee
      7        8
Next, have it print the same information, but with the counts aligned with the
beginning of each name.
Melissa Honeybee
7       8 */   
#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[40];
    char last[40];
    
    printf("Enter your First name: \n");
    scanf("%s", name);
    printf("Enter your Last name: \n");
    scanf("%s", last);

   
    printf("%s %s \n",name,last);
    //right justified
    printf("%*lu %*lu\n", (int) strlen(name), strlen(name),
                          (int) strlen(last), strlen(last));
    //left justified
    printf("%s %s\n",name, last);
    printf("%-*lu %-*lu\n", (int) strlen(name), strlen(name),
                            (int) strlen(last), strlen(last));

return 0;

}