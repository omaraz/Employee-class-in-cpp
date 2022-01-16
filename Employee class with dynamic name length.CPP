#include <stdio.h>
#include <iostream.h>
#include <string.h>
#include <conio.h>


class Employee{
//class data by default is private

int Id;
float Salary;
char* Name; //pointer to array of characters to deal with name length variance

public:
	//Setters
	void setId(int i){
		Id =i ;}

	void setSalary(float s){
		Salary = s;}

	void setName(char n[]){
		if(Name){
			delete(Name);}
			Name = new char[strlen(n)+1]; //Dynamic allocation
			strcpy(Name,n); //copy string not to use( = operator) 
		 }
	//Getters
	int getId(){
		return Id;
		}
	float getSalary(){
		return Salary;}

	char* getName(){//return a pointer to array of characters
		return Name;}

	//Prototypes of possible Class Constructors
	Employee();
	Employee(int i);
	Employee(char* n);
	Employee(int i, float s);
	Employee(int i, char* n);
	Employee(float s, char* n);
	Employee(int i ,float s, char* n);

};

//Prototypes
Employee FillEmp();//using setters
void PrintEmp(Employee e); //using getters

int main(){
	clrscr();

	Employee e;//create an object
	cout<<e.getId()<<endl<<e.getSalary()<<endl<<e.getName(); //using getters to know default data
	e =FillEmp();//fill employee data
	PrintEmp(e); //print Employee data

	getch();

	return 0;}
//default Constructor
Employee::Employee(){
setId(0);
setSalary(0);
setName("A");}


//parameterized constructors
Employee::Employee(int i){
setId(i);
setSalary(0);
setName("A");}

//parameterized constructors
Employee::Employee(char s[]){
setId(0);
setSalary(0);
setName(s);}

//parameterized constructors
Employee::Employee(int i,float s){
setId(i);
setSalary(s);
setName("A");}

//parameterized constructors
Employee::Employee(int i, char n[]){
setId(i);
setSalary(0);
setName(n);}

//parameterized constructors
Employee::Employee(float s, char n[]){
setId(0);
setSalary(s);
setName(n);}


//parameterized constructors
Employee::Employee(int i,float s, char n[]){
setId(i);
setSalary(s);
setName(n);}

//function to fill object employee
Employee FillEmp(){
	Employee e;
	int i;
	float s;
	char* n;
	cout<<"Enter user Id= ";
	cin>>i;
	e.setId(i);
	cout<<"Enter user Name= ";
	cin>>n;
	e.setName(n);
	cout<<"Enter user Salary= ";
	cin>>s;
	e.setSalary(s);
	return e;}

//function to print object employee
void PrintEmp(Employee e){
	cout<<"Employee Name is "<<e.getName()<<endl;
	cout<<"Employee Id is = "<<e.getId()<<endl;
	cout<<"Employee Salary is "<<e.getSalary()<<endl;
			}
