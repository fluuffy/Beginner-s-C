#include <stdio.h>

enum dept_cod {consulting,managing,accounting,intern};

typedef enum dept_cod DEPT;

struct human {
    int age, salary;
    DEPT department;
    char name[16];
    char address[6][26];
};

typedef struct human EMPLOYEE;

void parse(char Str[]){
    int i = 0;
    char next;
    while ((next=getchar()) != '\n'){
        Str[i] = next;
        i++;
    }
    Str[i] = 0;
}

void print_employee(EMPLOYEE Emp){
    int i;
    printf(" %d %d %d \n", Emp.age, Emp.salary, Emp.department);
    printf("%s\n", Emp.name);
    for(i=0; i<=5; i++) printf("%s\n", Emp.address[i]);
    
}

void main() {
EMPLOYEE This_Employee;
    int i;
    scanf("%d",&This_Employee.age);
    scanf("%d",&This_Employee.salary);
    scanf("%d\n",&This_Employee.department);
    parse(This_Employee.name);
    for(i=0; i<=5; i++) parse(This_Employee.address[i]);
    print_employee(This_Employee);
}
