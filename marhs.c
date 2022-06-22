include <stdio.h>
double fact(double x)
{
if(x == 0)
return 1;
return x*fact(x-1);
}
double NFor(double a[][8], double x, int n)
{
double y = a[0][1], z, p;
for(int i = 2; i <= n; i++)
{
for(int j = 0; j < n-i+1; j++)
a[j][i] = a[j+1][i-1] - a[j][i-1];
}
printf("\nNewton Forward Interpolation\n\nTable -:\n\n");
for(int i = 0; i < n; i++)
{
for(int j = 0; j < n-i+1; j++)
printf("%.8f\t", a[i][j]);
printf("\n");
}
z = (x - a[0][0]) / (a[1][0] - a[0][0]);
for(int i = 2; i <= n; i++)
{
p = z;
for(int j = 1; j < i-1; j++)
p *= (z - j);
y += (p*a[0][i])/fact(i-1);
}
return y;
}
double NBack(double a[][8], double x, int n)
{
double y = a[n-1][1], z, p;
for(int i = 2; i <= n; i++)
{
for(int j = n-1; j >= i-1; j--)
a[j][i] = a[j][i-1] - a[j-1][i-1];
}
printf("\nNewton Backward Interpolation\n\nTable -:\n\n");
for(int i = 0; i < n; i++)
{
for(int j = 0; j <= i+1; j++)
printf("%.8f\t", a[i][j]);
printf("\n");
}
z = (x - a[n-1][0]) / (a[1][0] - a[0][0]);
for(int i = 2; i <= n; i++)
{
p = z;
for(int j = 1; j < i-1; j++)
p *= (z + j);
y += (p*a[n-1][i])/fact(i-1);
}
return y;
}
void main()
{
int n = 4;
double xa = 8.4, a[][8] = {{8.1, 16.94410}, {8.3, 17.56492}, {8.5, 18.50515}, {8.7, 
18.82091}};
printf("\nFind the values of f(x) using Newton forward & backward interpolation -
:\n\n1. x = %.1f\nGiven value of x is midway between upper & lower limit.\n", xa);
printf("\nf(x) = %.5f\n", NFor(a,xa,n));
double xb = 0.25, b[][8] = {{0.1, 0.62049958}, {0.2, -0.28398668}, {0.3, 0.00660095}, 
{0.4, 0.24842440}};
printf("\n2. x = %.2f\nGiven value of x is midway between upper & lower limit.\n", 
xb);
printf("\nf(x) = %.8f\n", NFor(b,xb,n));
double xc = 0.43, c[][8] = {{0, 1}, {0.25, 1.64872}, {0.5, 2.71828}, {0.75, 4.48169}};
printf("\n3. x = %.2f\nGiven value of x is more close to upper limit than lower 
limit.\n", xc);
printf("\nf(x) = %.5f\n", NBack(c,xc,n));
n = 6;
double xd = 38, d[][8] = {{15, 0.2588910}, {20, 0.3420201}, {25, 0.4226138}, {30, 0.5}, 
{35, 0.5735764}, {40, 0.6427876}};
printf("\n4. x = %.0f\nGiven value of x is more close to upper limit than lower 
limit.\n", xd);
printf("\nf(x) = %f\n", NBack(d,xd,n));
}