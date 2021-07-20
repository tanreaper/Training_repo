class Employee:

    pay_raise = 0.4
    count = 0
    
    def __init__(self, fname, lname, id, pay):
        self.fname = fname
        self.lname = lname
        self.id = id
        self.pay = pay
        Employee.count += 1

    def display(self):
        return "{} {}".format(self.fname, self.lname)

    def raise_amount(self):
        return (self.pay + self.pay * self.pay_raise)

    @classmethod
    def change_raise_percent(cls, percent):
        cls.pay_raise = percent

    @classmethod
    def create_employee_record(cls, emp_str):
        fname, lname, id, pay = emp_str.split('_')
        return cls(fname, lname, id, pay)

class Developer(Employee):
    pay_raise = 0.5
    def __init__(self, fname, lname, id, pay, role):
        super().__init__(fname, lname, id, pay)
        self.role = role
# print(Employee.count)

class Manager(Employee):
    def __init__(self, fname, lname, id, pay, employees=None):
        super().__init__(fname, lname, id, pay)
        if employees is None:
            self.employees = []
        else:
            self.employees = employees

    def add_emp(self, emp):
        if emp not in self.employees:
            self.employees.append(emp)
    
    def remove_emp(self, emp):
        if emp in self.employees:
            self.employees.remove(emp)

    def print_emps(self):
        for emp in self.employees:
            # print(emp)
            print("-->", emp.display())

# print(dev_emp1.display())
# print(dev_emp1.raise_amount())

dev_emp1 = Developer("Bhanu", "kalvala", 1, 85000, "senior_developer" )
dev_emp2 = Developer("test", "Paul", 2, 65000, "junior_developer" )



mgr_1 = Manager('Sue', 'Smith', 3, 90000, [dev_emp1])
mgr_1.add_emp(dev_emp2)
mgr_1.print_emps()


# print(Employee.count)
# print(help(Developer))
# print(emp1.raise_amount())
# print(emp1.__dict__)
# print(emp1.pay_raise)
# print(emp2.pay_raise)
# print(Employee.pay_raise)
# emp1.pay_raise = 0.5
# print("--------------------------------------")
# print(emp1.pay_raise)
# print(emp2.pay_raise)
# print(Employee.pay_raise)
# print(emp1.__dict__)
# print(emp1.raise_amount())
# Employee.change_raise_percent(0.5)
# print(Employee.pay_raise)
# print(emp2.pay_raise)

# in_str = "Bhanu_kalvala_3_85000";
# fname, lname, id, pay = in_str.split('_')
# emp3 = Employee(fname, lname, id, pay)
# emp3 = Employee.create_employee_record("Bhanu_kalvala_3_85000")
# print(emp3.__dict__)
# emp1.fname = "Bhanu"
# emp1.lname = "kalvala"
# emp1.id = 1
# emp1.pay = 85000
# emp2.fname = "test"
# emp2.lname = "Paul"
# emp2.id = 2
# emp2.pay = 65000
# print(emp1.display())
# print(emp2.display())x