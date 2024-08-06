class Employee
{
private:
string name;
double salary;
public:
Employee();
Employee(string n, double s);
string getName();
double getSalary();
};
Employee::Employee() : name(""), salary(0) {}
Employee::Employee(string n, double s): name(n), salary(s) {}
string Employee::getName() {
return name;
}
double Employee::getSalary() {
return salary;
}
class Boss
{
private:
Employee e;
public:
Boss();
void giveRaise(double amount);
};
Boss::Boss() {}
void Boss::giveRaise(double amount)
{
e.salary = e.salary + amount;
cout << e.salary << endl;
}
class Employee
{
private:
friend class Boss;
string name;
double salary;
public:
Employee();
Employee(string n, double s);
string getName();
double getSalary();
};
