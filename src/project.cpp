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
    printf ("���� ���������\n1.�������� � ����� ������\n2.�������� � ����� �������\n3.����� �� ���������\n�������� ����� ���� � ������� Enter\n");
    Dei = getch();
    switch (Dei)
	{
    	case '1': 
		{
    		printf ("\n1.��������� �����\n2.��������� �������\n3.��������� ���������� ������\n4.�������� � �������\n5.�������� � ���\n6.���������� ����������\n�������� �������� � ������� Enter\n");
    		Dei1 = getch();
    		switch(Dei1)
			{
    			case '1':
	    		{	printf ("������� �����:  ");
	    			scanf ("%f", &x);
	    			y=sin(x);
	    			printf ("����� %0.3f = %0.3f\n", x,y);
	    			break;
	    		}
    			case '2':
	    		{	printf ("������� �����:  ");
	    			scanf ("%f", &x);
	    			y=cos(x);
	    			printf ("������� %0.3f = %0.3f\n", x,y);
	    			break;
	    		}
    			case '3':
	    		{	printf ("������� �����:  ");
	    			scanf ("%f", &x);
	    			y=sqrt(x);
	    			printf ("������ �� %0.3f = %0.3f\n", x,y);
	    			break;
	    		}
    			case '4':
    			{	printf ("������� �����:  ");
	    			scanf ("%f", &x);
	    			y=pow(x,2);
	    			printf ("%0.3f � �������� = %0.3f\n", x,y);
	    			break;
    			}
    			case '5':
    			{	printf ("������� �����:  ");
	    			scanf ("%f", &x);
	    			y=pow(x,3);
	    			printf ("%0.3f � ���� = %0.3f\n", x,y);
	    			break;
    			}
    			case '6':
    			{	printf ("������� �����:  ");
	    			scanf ("%f", &x);
	    			y=Fact(x);
	    			printf ("��������� %0.3f = %0.3f\n", x,y);
	    			break;
    			}
    		}
    		break;
		}
		case '2': 	
		{
    		printf ("\n1.�����\n2.��������\n3.���������\n4.�������\n5.���������� � �������\n6.���������� �����\n�������� �������� � ������� Enter\n");
        	Dei1 = getch();
			switch(Dei1)
			{
				case '1':
				{   printf ("������� ������ ���������: ");
	                scanf ("%f", &x);
				    printf ("������� ������ ���������: ");
	                scanf ("%f", &y);
	                printf ("%f + %f = %f", x, y, Summa(x,y));
	                x=Summa(x,y);
				    break;
				}
				case '2':
				{   printf ("������� �����������: ");
	                scanf ("%f", &x);
				    printf ("������� ����������: ");
	                scanf ("%f", &y);
					printf ("%f - %f = %f", x, y, Minus(x,y));
					x=Minus(x,y);
					break;
				}
				case '3':
				{   printf ("������� ������ ���������: ");
	                scanf ("%f", &x);
				    printf ("������� ������ ���������: ");
	                scanf ("%f", &y);
					printf ("%f * %f = %0.3f", x, y, Product(x,y));
					x=Product(x,y);
					break;
				}
				case '4':
				{   printf ("������� �������: ");
	                scanf ("%f", &x);
				    printf ("������� ��������: ");
	                scanf ("%f", &y);
					printf ("%f / %f = %0.3f", x, y, Divit(x,y));
					x=Divit(x,y);
					break;
				}	
				case '5':
				{   printf ("������� �����: ");
	                scanf ("%f", &x);
				    printf ("������� �������: ");
	                scanf ("%f", &y);
					printf ("%f � %f ������� = %0.3f", x, y, pow(x,y));
					x=pow(x,y);
					break;
				}	
				case '6':
				{   printf ("������� �����: ");
	                scanf ("%f", &x);
				    printf ("������� ������� �����: ");
	                scanf ("%f", &y);
					printf ("������ %f ������� �� %f = %0.3f", y, x, pow(x,1/y));
					x=pow(x,1/y);
					break;
				}	
			}
			printf ("\n����� ���������� ������ � ������, ������� 1, ���� �� ������ ����� � ����, ������� 0");
			exit1 = getch();
		    while (exit1 == '1')	
				{
		    	printf ("\n1.�����\n2.��������\n3.���������\n4.�������\n5.���������� � �������\n6.���������� �����\n�������� �������� � ������� Enter\n");
		        Dei1 = getch();
					switch(Dei1)
					{
						case '1':
						{   printf ("������� ���������: ");
		                	scanf ("%f", &y);
		                	printf ("%f + %f = %f", x, y, Summa(x,y));
		                	x=Summa(x,y);
					    	break;
						}
						case '2':
						{   printf ("������� ����������: ");
		                	scanf ("%f", &y);
							printf ("%f - %f = %f", x, y, Minus(x,y));
							x=Minus(x,y);
							break;
						}
						case '3':
						{   printf ("�������  ���������: ");
			                scanf ("%f", &y);
							printf ("%0.3f * %0.3f = %f", x, y, Product(x,y));
							x=Product(x,y);
							break;
						}
						case '4':
						{   printf ("������� ��������: ");
			                scanf ("%f", &y);
							printf ("%f / %f = %f", x, y, Divit(x,y));
							x=Divit(x,y);
							break;
						}	
						case '5':
						{   printf ("������� �����: ");
			                scanf ("%f", &x);
						    printf ("������� �������: ");
			                scanf ("%f", &y);
							printf ("%f � %f ������� = %f", x, y, pow(x,y));
							x=pow(x,y);
							break;
						}	
						case '6':
						{   printf ("������� �����: ");
			                scanf ("%f", &x);
						    printf ("������� ������� �����: ");
			                scanf ("%f", &y);
							printf ("������ %f ������� �� %f = %f", y, x, pow(x,1/y));
							x=pow(x,1/y);
							break;
						}	
					}
				printf ("\n����� ���������� ������ � ������, ������� 1, ���� �� ������ �����, ������� 0");
				exit1 = getch();
		    	}
		
		}
		case '3': break;
 	}
	return 0;
}
