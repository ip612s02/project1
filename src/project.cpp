#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "func.h"



main()
{
	float x,y;
    char Dei, Dei1, exit1;
    printf ("Меню программы\n1.Операции с одним числом\n2.Операции с двумя числами\n3.Выход из программы\nВыберите пункт меню и нажмите Enter\n");
    Dei = getch();
    switch (Dei)
	{
    	case '1': 
		{
    		printf ("\n1.Вычислить синус\n2.Вычислить косинус\n3.Вычислить квадратный корень\n4.Возвести в квадрат\n5.Возвести в куб\n6.Вычисление факториала\nВыберите действие и нажмите Enter\n");
    		Dei1 = getch();
    		switch(Dei1)
			{
    			case '1':
	    		{	printf ("Введите число:  ");
	    			scanf ("%f", &x);
	    			y=sin(x);
	    			printf ("Синус %0.3f = %0.3f\n", x,y);
	    			break;
	    		}
    			case '2':
	    		{	printf ("Введите число:  ");
	    			scanf ("%f", &x);
	    			y=cos(x);
	    			printf ("Косинус %0.3f = %0.3f\n", x,y);
	    			break;
	    		}
    			case '3':
	    		{	printf ("Введите число:  ");
	    			scanf ("%f", &x);
	    			y=sqrt(x);
	    			printf ("Корень из %0.3f = %0.3f\n", x,y);
	    			break;
	    		}
    			case '4':
    			{	printf ("Введите число:  ");
	    			scanf ("%f", &x);
	    			y=pow(x,2);
	    			printf ("%0.3f в квадрате = %0.3f\n", x,y);
	    			break;
    			}
    			case '5':
    			{	printf ("Введите число:  ");
	    			scanf ("%f", &x);
	    			y=pow(x,3);
	    			printf ("%0.3f в кубе = %0.3f\n", x,y);
	    			break;
    			}
    			case '6':
    			{	printf ("Введите число:  ");
	    			scanf ("%f", &x);
	    			y=Fact(x);
	    			printf ("Факториал %0.3f = %0.3f\n", x,y);
	    			break;
    			}
    		}
    		break;
		}
		case '2': 	
		{
    		printf ("\n1.Сумма\n2.Разность\n3.Умножение\n4.Деление\n5.Возведение в степень\n6.Извлечение корня\nВыберите действие и нажмите Enter\n");
        	Dei1 = getch();
			switch(Dei1)
			{
				case '1':
				{   printf ("Введите первое слагаемое: ");
	                scanf ("%f", &x);
				    printf ("Введите второе слагаемое: ");
	                scanf ("%f", &y);
	                printf ("%f + %f = %f", x, y, Summa(x,y));
	                x=Summa(x,y);
				    break;
				}
				case '2':
				{   printf ("Введите уменьшаемое: ");
	                scanf ("%f", &x);
				    printf ("Введите вычитаемое: ");
	                scanf ("%f", &y);
					printf ("%f - %f = %f", x, y, Minus(x,y));
					x=Minus(x,y);
					break;
				}
				case '3':
				{   printf ("Введите первый множитель: ");
	                scanf ("%f", &x);
				    printf ("Введите второй множитель: ");
	                scanf ("%f", &y);
					printf ("%f * %f = %0.3f", x, y, Product(x,y));
					x=Product(x,y);
					break;
				}
				case '4':
				{   printf ("Введите делимое: ");
	                scanf ("%f", &x);
				    printf ("Введите делитель: ");
	                scanf ("%f", &y);
					printf ("%f / %f = %0.3f", x, y, Divit(x,y));
					x=Divit(x,y);
					break;
				}	
				case '5':
				{   printf ("Введите число: ");
	                scanf ("%f", &x);
				    printf ("Введите степень: ");
	                scanf ("%f", &y);
					printf ("%f в %f степени = %0.3f", x, y, pow(x,y));
					x=pow(x,y);
					break;
				}	
				case '6':
				{   printf ("Введите число: ");
	                scanf ("%f", &x);
				    printf ("Введите степень корня: ");
	                scanf ("%f", &y);
					printf ("корень %f степени из %f = %0.3f", y, x, pow(x,1/y));
					x=pow(x,1/y);
					break;
				}	
			}
			printf ("\nЧтобы продолжить работу с числом, введите 1, если вы хотите выйти в меню, введите 0");
			exit1 = getch();
		    while (exit1 == '1')	
				{
		    	printf ("\n1.Сумма\n2.Разность\n3.Умножение\n4.Деление\n5.Возведение в степень\n6.Извлечение корня\nВыберите действие и нажмите Enter\n");
		        Dei1 = getch();
					switch(Dei1)
					{
						case '1':
						{   printf ("Введите слагаемое: ");
		                	scanf ("%f", &y);
		                	printf ("%f + %f = %f", x, y, Summa(x,y));
		                	x=Summa(x,y);
					    	break;
						}
						case '2':
						{   printf ("Введите вычитаемое: ");
		                	scanf ("%f", &y);
							printf ("%f - %f = %f", x, y, Minus(x,y));
							x=Minus(x,y);
							break;
						}
						case '3':
						{   printf ("Введите  множитель: ");
			                scanf ("%f", &y);
							printf ("%0.3f * %0.3f = %f", x, y, Product(x,y));
							x=Product(x,y);
							break;
						}
						case '4':
						{   printf ("Введите делитель: ");
			                scanf ("%f", &y);
							printf ("%f / %f = %f", x, y, Divit(x,y));
							x=Divit(x,y);
							break;
						}	
						case '5':
						{   printf ("Введите число: ");
			                scanf ("%f", &x);
						    printf ("Введите степень: ");
			                scanf ("%f", &y);
							printf ("%f в %f степени = %f", x, y, pow(x,y));
							x=pow(x,y);
							break;
						}	
						case '6':
						{   printf ("Введите число: ");
			                scanf ("%f", &x);
						    printf ("Введите степень корня: ");
			                scanf ("%f", &y);
							printf ("корень %f степени из %f = %f", y, x, pow(x,1/y));
							x=pow(x,1/y);
							break;
						}	
					}
				printf ("\nЧтобы продолжить работу с числом, введите 1, если вы хотите выйти, введите 0");
				exit1 = getch();
		    	}
		
		}
		case '3': break;
 	}
	return 0;
}
