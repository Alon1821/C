
//program to solver quadratic equation ax² + bx + c = 0
#include <stdio.h>
#include <math.h>
int main() {
  double a;
  double b;
 double c;
 double Discriminant, root1, root2;
 //Taking input from the user
 printf("Solve: ax² + bx + c = 0\n");
   printf("enter a:");
   scanf("%lf", &a);
   printf("enter b:");
   scanf("%lf", &b);
   printf("enter c:");
   scanf("%lf", &c);
   //calculating discriminant
  Discriminant = b * b- 4 * a * c;
  //checking program exist 
  if(Discriminant < 0) {
      printf("no real soultion");
  }
  else if(Discriminant == 0) {
      root1= -b/(2*a);
      printf("one solution: %f\n",root1);
  }
  else {
      root1 = (-b - sqrt(Discriminant))/(2*a);
      root2 = (-b + sqrt(Discriminant))/(2*a);
      printf("Two solutions: %f, %f\n", root1, root2);
  }
  return 0;
}

#include <stdio.h>
#include <math.h>
    int main() {
        double a, b, c;
        double sumofroots, productofroots;
        printf("enter a:");

    Input from the user
    scanf("%d", &


        #include <stdio.h>
        #include <math.h>
            int main() {
                w