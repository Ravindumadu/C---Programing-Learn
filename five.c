#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main () {

   int age = 0;
   float gpa = 0.0f;
   char grade = '\0';
   char name[30] = "";

   printf("What IS Your Age: ");
   scanf("%d", &age);

   printf("What Is You Gpa: ");
   scanf("%f", &gpa);

   printf("What Is Your Grade: ");
   scanf(" %c", &grade);

   getchar();
   printf("What is Your Name: ");
   fgets(name, sizeof(name), stdin );
     name[strcspn(name, "\n")] = '\0';

   printf("You Are Name Is %s.\n", name);
   printf("You Are Age Is %d Years Old.\n", age);
   printf("You Are Gpa IS %.f.\n", gpa);
   printf("You Are Grade Is %c .\n", grade);

}
