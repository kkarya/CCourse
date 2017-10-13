# включить  " stdafx.h "
# включить  " math.h "


int  main ()
{
	int fib, x1, x2, x3 = 0 ;
	printf ( « Введите число фибоначи: » );
	scanf_s ( " % d " , & fib);
	x1 = 0 ;
	x2 = 1 ;
	для ( int i = 1 ; i <= fib; i ++)
	{
		x3 = x1 + x2;
		x1 = x2;
		x2 = x3;
	}
	printf ( " Результат =% d; \ n " , x1);


    return  0 ;
}
