# включить  " stdafx.h "
# включить  " math.h "


int  main ()
{
	int number, degree = 0 ;
	printf ( « Входное число, степень: » );
	scanf_s ( " % d,% d " , & number, & degree);
	int result = number;
	for ( int i = 1 ; i <степень; i ++)
	{
		result = result * number;
	}
	printf ( " Результат =% d; \ n " , результат);


    return  0 ;
}
