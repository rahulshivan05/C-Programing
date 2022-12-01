#include <stdio.h>

// condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

/*
    if unit is = 250

    50*0.50 => 25;
    100*0.75 => 75;
    100*1.20 => 120;

    amt = 220
    sur_charge = 220 * 20% => 264

*/

int main(int argc, char const *argv[])
{
    int unit;
    float amt, total_amt, sur_charge;

    // Take input Unit consumed by User
    printf("Enter Unit Consumed by User: ");
    scanf("%d", &unit);

    // Calculate electricity bill

    if (unit <= 50)
    {
        amt = unit * 0.50; // 50*0.5 = 25
    }
    else if (unit <= 150)
    {
        amt = 25 + ((unit - 50) * 0.75); // 100*0.75 = 75
    }
    else if (unit <= 250)
    {
        amt = 100 + ((unit - 150) * 1.20); // 100*1.20 = 120
    }
    else // 25+75+120 = 220
    {
        amt = 220 + ((unit - 250) * 1.50);
    }

    // Your Electricity bill before surcharge and taxes
    printf("Electricity Bill Before taxes and surcharge = Rs. %.2f\n", amt);

    // Calculating total electricity bill after adding surcharge
    sur_charge = amt * 0.20;
    printf("\nYour Tax and Surcharge of Electricity Bill = Rs. %.2f\n", sur_charge);
    total_amt = amt + sur_charge;

    printf("\nYour Total Electricity Bill = Rs. %.2f\n", total_amt);

    return 0;
}
