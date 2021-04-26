#include <stdio.h>
#include <string.h>

int main() {

   char smallest[20], largest[20];
   int i = 0;
   char temp[20];

   while(1)
   {
       printf("Enter word: ");
       scanf("%s", temp);
       if(i == 0)   /* Move first word to smallest and largest */
       {
           strcpy(smallest, temp);
           strcpy(largest, temp);
       }
       else
       {
           if(strcmp(temp, smallest) < 0)   /* If current word is shorter than smallest replace smallest word */
           {
               strcpy(smallest, temp);
           }
           if(strcmp(temp, largest) > 0)    /* If current word is longer than largest replace largest word */
           {
               strcpy(largest, temp);
           }
       }
       if(strlen(temp) == 4)    /* If word is 4 characters long break code */
       {
           break;
       }
       i++;
   }

   printf("\nSmallest word: %s\n", smallest);
   printf("Largest word: %s\n", largest);
}