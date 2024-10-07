#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

  int main(){
        bool checker = true;
        int earliestYear=2025;
        int earliestMonth=12;
        int earliestDay=31;
        int a;
        int b;
        int c;

        do{
            puts("Enter a date (mm/dd/yyyy): ");
            int result = scanf("%d /%d /%d", &a, &b, &c);

            if (c<earliestYear && c!=0){
                earliestYear = c;
                earliestMonth = a;
                earliestDay = b;
            }

            if (c==earliestYear && c!=0){
                if (a<earliestMonth && a!=0){
                    earliestYear = c;
                    earliestMonth = a;
                    earliestDay = b;
                }
                if (a==earliestMonth && a!=0){
                    if(b<earliestDay && b!=0){
                        earliestYear = c;
                        earliestMonth = a;
                        earliestDay = b;
                    }
                }
            }

            if (result == EOF){
                checker = false;
                return EXIT_SUCCESS;
            }

            
            if (a==0 && b==0 && c==0){
                printf("The earliest valid date is: ");
                printf("%d /%d /%d", earliestMonth, earliestDay, earliestYear);
                checker=false;
            }

            if(result!=3){
                puts("invalid input");
                checker = false;
                return EXIT_FAILURE;
            }



        }while(checker);

        printf("\n");

        return EXIT_SUCCESS;
    }