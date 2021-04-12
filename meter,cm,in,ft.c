#include,stdio.h>
int main()
{
float dis,meter,centimeter,inch,feet;
printf("Enter distance in km= ");
scanf("%f",&dis) ;

meter=dis*1000;
centimeter=meter*1000;
inch=centimeter*0.393700787;
feet=meter*3.280839895;

printf("Distance in\n meter:%f\n centimeter:%f\n inch:%f\n feet:%f",meter,centimeter,inch,feet);

return 0;
}
