#include <stdio.h>


void main()
{
    /*char can only be used with characters ..e.g M, T , W ..etc and not Fri, Sat, Th
    Due to this reason, we would have to resort to using array of chars (strings) instead*/

    char day[2]; //initialize char array of 2, index starts from 0 in c

    printf("Enter the short name of day :\t");
    scanf("%s", day);

    switch(day[0]) //note again that switch quantities should be integers and Fri woudn't have been correctly resolved...
    {
        case 'M': //Monday
            printf("Monday");
            break;

        case 'T': //Test the T character for Thursday and Tuesday
            switch (day[1]){ //we could have equally used strlen(day[1]) and made a case with the length of the input char arrays

                case 'h': //if the second character after index 0 of Th is an h the we consider the day to be Thursday
                    printf("Thursday");
                    break;

                case '\0': //if there isn't any second index, then its a Tuesday
                    printf("Tuesday");
                    break;
            }

          break; //break the main switch case to break the program from proceeding with wednesday's case

        case 'W': // Wednesday
          printf("Wednesday");
          break;
        case 'F': //if we encounter an F in the first index
          switch (day[1]){
                case 'r': //and an r in the second index
                    switch (day[2]){
                        case 'i': //and an in the last or 3rd index,then ...
                            printf("Friday"); //its a night Friday night huurrraaayyy
                            break;
                            }
            }
          break; //break out of the major switch statement

        case 'S': //Test for Sunday and Saturday
          switch (day[1]){
                case 'a': //if an 'a' follows the S in the char array ...
                    switch (day[2]){ //check for what follows next
                        case 't': //and a 't' follows the 'a'

                            printf("Saturday"); //day is Saturday
                            break;
                            }
                case 'u': //on the other hand,if a 'u' follows the S in the char array ....
                    switch (day[2]){ //check for what follows next at index 2
                        case 'n': //if an 'n' is what follows ...
                            printf("Sunday"); //its sunday
                            break;
                    }

            }
          break;

        default:
            printf("This day does not exist on the calender, please try again !");

      }
}
