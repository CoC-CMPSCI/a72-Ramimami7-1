#include "main.hpp"

int main()
{
    int number[SIZE];
    int equal[SIZE];
    int last;

    last = makearray(number);
    printout(number, last);

    swapfold(number, last);
    printout(number, last);

    sumfold(number, last);
    printout(number, static_cast<int>(ceil(last / 2.0)));

    last = makearray(number);
    printout(number, last);

    equalfold(number, equal, last);
    printout(equal, static_cast<int>(ceil(last / 2.0)));
}
