
#include <iostream>

void task1(int numberProgres, int end);
void task2(int first1, int second2);
void task4(int number);
void task5(int number);

void task1(int numberProgres, int end)
{
    if (numberProgres < end)
    {
        std::cout << numberProgres;
        task1(numberProgres+1, end);
    }
    else
    {
        std::cout << numberProgres << "All";

    }
}
void task2(int firs1, int second2)
{
    if (firs1 > second2)
    {
        std::cout << firs1;
        task2(firs1 - 1, second2);
    }
    else if (firs1 < second2)
    {
        std::cout << second2;
        task2(firs1, second2 - 1);
    }
    else
    {
        std::cout << firs1;
    }
}

void task4(int number)
{
    int x1;
    int x2;
    int x3;

    x1 = number / 100 % 10;
    x2 = number / 10 % 10;
    x3 = number % 10;

    std::cout << x1 + x2 + x3;
}

void task5(int number)
{
    int x1;
    int x2;
    int x3;

    x1 = number / 100 % 10;
    x2 = number / 10 % 10;
    x3 = number % 10;

    std::cout << x3 << x2<< x1;
}

int main()
{
    //task1(1,10);
    //task2(5, 1);
    //task4(179);
    task5(179);
}
