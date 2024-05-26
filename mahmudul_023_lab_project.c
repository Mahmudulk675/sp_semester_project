#include<stdio.h>

int main(){
    int d1,d2,m1,m2,y1,y2,r1,r2,r3;

    printf("-------------------------------------------------------------\n");
    printf("                           Age Calculator                    \n");
    printf("--------------------------------------------------------------\n");


    //Input for birthday
    printf("Enter your Birthday date: ");
    scanf("%d", &d1);
    printf("Enter your Birthday month: ");
    scanf("%d", &m1);
    printf("Enter your Birthday year: ");
    scanf("%d", &y1);

    //Input for current day
    printf("Enter your current date: ");
    scanf("%d", &d2);
    printf("Enter your current month: ");
    scanf("%d", &m2);
    printf("Enter your current year: ");
    scanf("%d", &y2);

    //Check valid date
    if((d1 > 31 || d1 < 1) || (d2 > 31 || d2 < 1) || (m1 > 12 || m1 < 1) || (m2 > 12 || m2 < 1) || (y1 < 0 && y2 <0))
        {
            printf("You entred wrong date, try again!");
        }
    else
        {
            //calculate year
            r3 = y2 - y1;

            //calculate day
            if(d2>=d1){
                r1 = d2-d1;
            }
            else{
                //if current date's number is less then birthday date's number
                m2 = m2-1;
                d2 = d2 + 30;
                r1 = d2-d1;
            }

            //calculate month
            if(m2>=m1){
                r2 = m2-m1;
            }
            else{
                //if current month's number is less then birthday month's number
                r3 = r3-1;
                m2 = m2 + 12;
                r2 = m2-m1;
            }


        }

        printf("Your age is %d day %d month %d year", r1, r2, r3);

}