#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, x, y, dr;
	int i = 1;
	while (scanf("%d%d%d", &a, &b, &c))
		if (a != 0)
		{
			i++;
			dr = b * b - 4 * a * c;
			if (dr == 0)
				{
                 x = -b/2a;
			     printf("Case 1 :\n  % lfx^2 + %lfx + %lf = 0\nonly one real root : %.6lf", a, b, c, x);
				}
			else if (dr > 0)
				{
                 x = (-b - sprt(dr)) / 2 a;
			     y = (-b + sprt(dr)) / 2 a;
			     printf("Case 2 :\n  % lfx^2 + %lfx + %lf = 0\ntwo real roots : %.6lf, %.6lf", a, b, c, x, y);
				}
			else if(dr<0)
			{
                 x = (-b - sprt(-dr)) / 2 a;
			     y = (-b + sprt(-dr)) / 2 a;
			     printf("Case 3 :\n  % lfx^2 + %lfx + %lf = 0\ntwo imaginary roots : %.6lf, %.6lf", a, b, c, x, y);
				}

		}
		else
            break;

}
