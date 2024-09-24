#include <stdio.h>
#include <locale.h>
void main()
{
	void res1(); {
		setlocale(LC_ALL, "RUS");
		int a = 11, b = 3;
		int x = a / b;
		float y = a / b;
		double z = a / b;
		printf("x = %d\n", x);
		printf("y = %f\n", y);
		printf("z = %lf\n", z);
	};
	void res2(); {
		int a = 11, b = 3;
		printf("a/b = %f\n", (float)a/b);
		printf("a/b = %lf\n", (double)a/b);



	}
}