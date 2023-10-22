
  // Area of Triangle ----------------


   #include<stdio.h>
   int main ()
   {

    float base,height,area;
    printf("Enter Base : ");
    scanf("%f",&base);

    printf("Enter height : ");
    scanf("%f",&height);

    area = 0.5 * base *height;
    printf("Area of tryangle = %.2f\n",area);
   }



  // Area of tryangle ------------------

       #include<stdio.h>
       int main()
   {
     double a,b,c,s,area;
     printf("Enter a 3 values : ");
     scanf("%lf %lf %lf",&a,&b,&c);

      s = (a+b+c)/2;

     area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Tryangle : %.2lf\n",area);

    return 0;
  }












            