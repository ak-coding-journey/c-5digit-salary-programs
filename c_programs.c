#include <stdio.h>

int main() {
    // 10. Gross Salary
    float bs, da, hr, gross;
    printf("Enter basic salary: \n");
    scanf("%f", &bs);
    da = bs * 0.4;
    hr = bs * 0.2;
    gross = bs + da + hr;
    printf("Gross salary = %.2f\n\n", gross);

    // 11. Sum of all 5-digit number digits
    int no, a, b, c, d, e, sum;
    printf("Enter a 5-digit number: \n");
    scanf("%d", &no);
    e = no % 10; no /= 10;
    d = no % 10; no /= 10;
    c = no % 10; no /= 10;
    b = no % 10; no /= 10;
    a = no;
    sum = a + b + c + d + e;
    printf("Sum of individual digits = %d\n\n", sum);

    // 12. Sum of 1st, 3rd, and last digit
    printf("Enter a 5-digit number: \n");
    scanf("%d", &no);
    e = no % 10; no /= 10;
    d = no % 10; no /= 10;
    c = no % 10; no /= 10;
    b = no % 10; no /= 10;
    a = no;
    sum = a + c + e;
    printf("Sum of 1st, 3rd, and last digits = %d\n\n", sum);

    // 13. Sum of 1st and last digit
    printf("Enter a 5-digit number: \n");
    scanf("%d", &no);
    e = no % 10; no /= 10;
    d = no % 10; no /= 10;
    c = no % 10; no /= 10;
    b = no % 10; no /= 10;
    a = no;
    sum = a + e;
    printf("Sum of 1st and last digits = %d\n\n", sum);

    // 14. Reverse 5-digit number
    printf("Enter a 5-digit number: \n");
    scanf("%d", &no);
    e = no % 10; no /= 10;
    d = no % 10; no /= 10;
    c = no % 10; no /= 10;
    b = no % 10; no /= 10;
    a = no;
    int reverse = e*10000 + d*1000 + c*100 + b*10 + a;
    printf("Reverse = %d\n\n", reverse);

    return 0;
}
