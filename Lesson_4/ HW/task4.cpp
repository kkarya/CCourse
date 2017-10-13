# включить  " stdafx.h "
# включить  " math.h "


int  main ()
{
	int fact = 0 ;
	int result = 1 ;
	printf ( « Входной факториальный номер: » );
	scanf_s ( " % d " , & fact);
	for ( int i = 1 ; i <= fact; i ++)
	{
		result = result * i;
	}
	printf ( " Результат =% d; \ n " , результат);


    return  0 ;
}
