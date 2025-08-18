//To Get The Minimum Number Among Four Numbers

#include <stdio.h>
int main()
{

  int a, b, c, d, minimumNumber;
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("Accessing the numbers: %d, %d, %d, %d\n", a, b, c, d);


    minimumNumber = a;

    if (b < minimumNumber)
    {
        minimumNumber = b;
    }

    if (c < minimumNumber)
    {
        minimumNumber = c;
    }

    if (d < minimumNumber)
    {
        minimumNumber = d;
    }


    printf("The numbers are: %d, %d, %d, %d\n", a, b, c, d);
    printf("The minimum number among these is: %d\n", minimumNumber);

    return 0;
}
