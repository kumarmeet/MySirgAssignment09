#include <stdio.h>
#include <stdlib.h>

//global function declaration
double area_of_circle(double);
double circumference_of_circle(double);
void print_n_natural_number(int);
int first_n_natural_numbers(int);
int sum_first_n_natural_numbers(int);
int sum_of_square_first_n_natural_numbers(int);
int even_odd(int);
int factorial(int);
int number_of_permutations(int, int);
int number_of_combinations(int, int);
int prime_or_not(int);
int next_prime_number_of_given_number(int);
void prime_number_between_two_numbers(int, int);
int reverse_digit(int);
int number_remove_occurance(int, int);
void print_armstrong_number_given_range(int, int);
void armstrong_number(int);

int main()
{
//    int n1, n2;
//    printf("Enter two number -> ");
//    scanf("%d%d", &n1, &n2);
//    prime_number_between_two_numbers(n1,n2);

//    int n;
//    printf("Enter a number -> ");
//    scanf("%d", &n);
//    printf("%d", next_prime_number_of_given_number(n));

//    int n;
//    printf("Enter a number -> ");
//    scanf("%d", &n);
//    printf("%d", prime_or_not(n));

//    int n, r;
//    printf("Enter two value-> ");
//    scanf("%d%d", &n, &r);
//    printf("%d", number_of_combinations(n, r));

//    int n;
//    printf("Enter a integer -> ");
//    scanf("%d", &n);
//    printf("%d", factorial(n));

//    int n;
//    printf("Enter a integer -> ");
//    scanf("%d", &n);
//    printf("%d", even_odd(n));

//  int n;
//  printf("Enter a positive integer -> ");
//  scanf("%d", &n);
//  printf("%d", sum_of_square_first_n_natural_numbers(n));

//  int n;
//  printf("Enter a positive integer -> ");
//  scanf("%d", &n);
//  printf("%d", sum_first_n_natural_numbers(n));

//  int n;
//  printf("Enter a positive integer -> ");
//  scanf("%d", &n);
//  print_n_natural_number(n);

//    double radius; //actual argument
//    printf("Enter radius of circle -> ");
//    scanf("%lf", &radius);
//    printf("%.2lf", circumference_of_circle(radius));

//    double radius; //actual argument
//    printf("Enter radius of circle -> ");
//    scanf("%lf", &radius);
//    printf("%.2lf", area_of_circle(radius));
    return 0;
}

int number_remove_occurance(int num, int remove)
{
    int rev = 0, original = 0, hold = 0;

    while(num != 0)
    {
        rev = num % 10;

        if(remove != rev)
        {
            original =  original * 10 + rev;
        }

        num = num / 10;
    }

    rev = 0;

    while(original != 0)
    {
        rev = original % 10;
        hold =  hold * 10 + rev;
        original = original / 10;
    }

    return hold;
}

void armstrong_number(int n)
{
    int h, t = 0, rev = 0, count = 0, a = 1, j, k = 0;

    h = n;

    while(n != 0)
    {
        n = n / 10;
        count++;
    }

    t = h;

    while(h != 0)
    {
        rev = h % 10;

        for(j = 1; j <= count; j++)
        {
            a = a * rev;
        }

            k = k + a;
            a = 1;
            h = h / 10;
    }

    if(t == k)
        printf("%d is a armstrong number", t);
    else
        printf("%d is not a armstrong number", t);

}

void print_armstrong_number_given_range(int num1, int num2)
{
    int rev = 0, count = 0, a = 1, i, j, k = 0, l = 0, m = 0;

    for(i = num1; i <= num2; i++)
    {
        l = i;
        m = i;

        while(m != 0)
        {
            m = m / 10;
            count++;
        }

        while(l != 0)
        {
            rev = l % 10;

            for(j = 1; j <= count; j++)
            {
                a = a * rev;
            }

            k = k + a;
            a = 1;
            l = l / 10;
        }

        if(k == i)
        {
            printf("%d\n", i);
        }

        k = 0;
        count = 0;
    }
}

//reverse digit would be use for finding armstrong number or not
int reverse_digit(int n)
{
    int r = 0, t;

    while(n != 0)
    {
        t = n % 10;
        n = n / 10;
        r = r  * 10 + t;
    }
    return r;
}

void prime_number_between_two_numbers(int num1, int num2)
{
    int i, j, count = 0;

    for(i = num1; i <= num2; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d\t", i);
        }
        count = 0;
    }
}

int next_prime_number_of_given_number(int n)
{
    int i, j, count = 0;

    for(i = 1; i <= n; i++)
    {
        n++;

        for(j = 1; j <= n; j++)
        {
            if(n % j == 0)
            {
                count++;
                continue;
            }
        }
        if(count == 2)
        {
            return n;
        }
        count = 0;
    }
}

int prime_or_not(int n)
{
    int i, count = 0;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    return count == 2 ? 1 : 0;
}

int number_of_combinations(int n, int r)
{
    // formula of number of combination
    return factorial(n)/(factorial(r) * factorial(n - r));
}

int number_of_permutations(int n, int r)
{
    return factorial(n)/factorial(n-r); //formula of find number of permutation
}

int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int even_odd(int n)
{
    return (n % 2 == 0) ? 1 : 0;
}

int sum_of_square_first_n_natural_numbers(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    return sum;
}

int sum_first_n_natural_numbers(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

void print_n_natural_number(int n)
{
    int i;
    for(i = 1; i <= n; i++)
        printf("%d\t", i);
}

double circumference_of_circle(double r) //formal argument
{
    double pi = 3.1416;
    return (2 * pi * r);
}

double area_of_circle(double r) //formal argument
{
    double pi = 3.1416;
    return (pi * r * r);
}
