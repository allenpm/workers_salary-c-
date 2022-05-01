/*Escribir un programa de sueldos usando un ciclo do while con señal de finalización. Para cada empleado, el programa debe solicitar el nombre, el sexo, las horas de trabajo y el sueldo por hora. La primera parte de la impresión debe dar el nombre de cada empleado, las horas de trabajo, el sueldo por hora y cuánto cobrará. La segunda parte deberá indicar el sueldo promedio de los hombres y el sueldo promedio de las mujeres.
*/
#include <stdio.h>
#include <math.h>

int main() {
  char name[40];
  int gender;
  float salary_h, work_h, salary_add;
  float women_salary, men_salary, nb_salary;
  float prom_men, prom_women, prom_nb;
  float add_men =0;
  float add_women = 0; 
  float add_nb = 0;
  float cant_men = 0;
  float cant_women = 0; 
  float cant_nb = 0;
  float cant_total= 0;
    int exit;
  
  
  do{
    printf("Please enter worker's name and second name: ");
    gets(name);
    printf("Insert number of worker gender. \n1 -Famale. \n2- Male. \n3- Other. \n\n ");
    scanf("%i", &gender);
    printf("How many hours did the employee work? ");
    scanf("%f", &work_h);
    printf("Enter hour salary: ");
    scanf("%f", &salary_h);
    salary_add = work_h*salary_h;

    if(gender == 1){
      add_women = add_women + salary_add;
      cant_women++;
    } else if(gender == 2){
      add_men = add_men + salary_add;
      cant_men++;
    } else{
      add_nb = salary_add + add_nb;
      cant_nb++;
    }
    printf("%s  - %.2f hs - $%.2f /h  - Salary: $%.2f.\n\n", name, work_h, salary_h, salary_add);
    
    cant_total++;
    printf("Exit? \n 1-No. \n 2-Yes. \n");
    scanf("%i", &exit);
  }while(exit != 2);

  prom_men = add_men/cant_men;
  prom_women = add_women/cant_women;
  prom_nb = add_nb/cant_nb;

  printf("The average salary for men is: $%.2f.\n The average salary for women is: $%.2f. \n The average salary for other gender's people is $%.2f", prom_men, prom_women, prom_nb);
  return 0;
}