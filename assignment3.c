//Write a program to calculate tax,surcharge,rebate,final tax,taxable amount and annual amount for the entered income

#include <stdio.h>
int main() {
    float income,a_ammount;           //These all values can be either decimal or non decimal values
    float tax,surcharge;
    float taxable_a,final_tax;

    printf("Enter the Income:");
    scanf("%f",&income);
   
    taxable_a = income - 50000;          //Taxable income is the income left after substracting 50,000 from the original income
    
    
    if (taxable_a < 250000) {              //There is no tax for incomes below 2,50,000
        tax = 0;
    }
    else if (taxable_a > 250000 && taxable_a <= 500000) {
        tax = 0.005 * income;
    }
    else if (taxable_a > 500000 && taxable_a <= 1000000) {
        tax = 0.2 * income;
    }
    else {
        tax = 0.3 * income;
    }
    //a_ammount = income;                       
    
    if (tax < 10000) {                      //This process is called rebate when a certain amount of price is returned when a given condition is satisfied
        tax=0;
    }
    if (income > 5000000) {                //Surcharge is extra charge added on top of tax for a certain amount of income
        surcharge = 0.1 * tax;
    }
    else {
        surcharge = 0;
    }
    final_tax = tax + surcharge;             //Final tax is the sum of tax and the added amount(Surcharge)

    printf("All the values are......\n");
    printf("Annual Ammount : %.2f\n",income);
    printf("Taxable Ammount : %.2f\n",taxable_a);
    printf("Tax before surcharge/rebate : %.2f\n",tax);
    printf("Surcharge : %.2f\n",surcharge);
    printf("Final tax : %.2f\n",final_tax);
    return 0;
}   





