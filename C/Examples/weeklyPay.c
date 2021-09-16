#include <stdio.h>

int main (){

    //Challenge is that we can't use loops in this program. Hence, the complicated conditions

    float hoursWorked;
    
    printf("Enter the number of hours worked: ");
    scanf("%f", &hoursWorked);

    float totalPay;
    float overtimePay;
    float tax;
    float overtimeHours;
    overtimeHours = hoursWorked - 40;
    overtimePay = overtimeHours * 18;

    // Pay calculation

    if (hoursWorked <= 40){
             totalPay = hoursWorked * 12;
         }
    else if (hoursWorked > 40) {
             totalPay = 480 + overtimePay;
        }

     // Tax claculation  

   if (totalPay <= 300){
            tax = 300 * 0.15;
   }
    else if (totalPay > 300 && totalPay <= 450 ){
            tax = (totalPay * 0.2) - 45;
    }
    else if (totalPay > 450){
            tax  = (totalPay * 0.25) - 75;
    }

    printf("\nYour total pay is: $ %.2f ", totalPay);
    printf("\n Your overtime pay is: $ %.2f ", overtimePay);
    printf("\n Your to tax is: $ %.2f ",   tax);

    return 0;
}