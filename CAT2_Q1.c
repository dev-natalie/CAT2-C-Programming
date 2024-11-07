//C structures
#include<stdio.h>
#include<string.h>
struct employee{
	char name[25];
	char department[20];
	int id;
	char email[50];
	float salary;
	} employee1;
int main () {
	//struct employee,employee1;
	strcpy(employee1.name,"John Doe");
	strcpy(employee1.department,"Human Resources");
	employee1.id=12345;
	strcpy(employee1.email,"john.doe@company.com");
	employee1.salary=55000.50;
	
	printf("the name is:%s\n",employee1.name);
	printf("the department is:%s\n",employee1.department);
	printf("the id is:%d\n",employee1.id);
	printf("the email is:%s\n",employee1.email);
	printf("the salary is:%f\n",employee1.salary);
	
	return 0;
	}