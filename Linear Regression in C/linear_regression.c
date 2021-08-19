#include <stdio.h>
int main()
{
	int n,i;
	float c,m;
	float x[100], y[100],x2[100],y2[100],xy[100];
	float sum_of_x = 0, sum_of_y = 0, sum_of_x2 = 0, sum_of_y2 = 0, sum_of_xy = 0;
	printf("Enter the number of variables : ");
	scanf("%d", &n);
	printf("\nEnter the values for x : ");
	for(i = 0; i < n; i++)
	{
		scanf("%f",&x[i]);
		sum_of_x += x[i];
		x2[i] = x[i] * x[i];
		sum_of_x2 += x2[i];
	}
	printf("\nSum of x = %f\n",sum_of_x);
	printf("\nEnter the values for y : ");
	for(i = 0; i < n; i++)
	{
		scanf("%f", &y[i]);
		sum_of_y += y[i];
		y2[i] = y[i] * y[i];
		sum_of_y2 += y2[i];
		xy[i] = x[i] * y[i];
		sum_of_xy += xy[i];
	}
	printf("\nSum of y = %f\n",sum_of_y);
	printf("\nx^2 column = \t");
	for(i=0;i<n;i++)
    {
        printf("%f\t",x2[i]);
    }
    printf("\nSum of x^2 = %f",sum_of_x2);
	printf("\ny^2 column = \t");
	for(i=0;i<n;i++)
    {
        printf("%f\t",y2[i]);
    }
    printf("\nSum of y^2 = %f",sum_of_y2);
	printf("\nx*y column = \t");
	for(i=0;i<n;i++)
    {
        printf("%f\t",xy[i]);
    }
    printf("\nSum of x*y = %f\n",sum_of_xy);
    c = ((sum_of_y*sum_of_x2)-(sum_of_x*sum_of_xy))/((n*sum_of_x2)-(sum_of_x*sum_of_x));
    m = ((n*sum_of_xy)-(sum_of_x*sum_of_y))/((n*sum_of_x2)-(sum_of_x*sum_of_x));
    printf("\n'c' Coefficient = %f",c);
    printf("\n'm' Coefficient = %f\n",m);
    printf("\nStraight line equation => y = %f*x + %f\n",m,c);
}
