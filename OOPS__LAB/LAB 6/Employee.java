class Employee_Details {
    String name;
    String lastName;
    double monthlySalary;

    Employee_Details(String name, String lastName, double monthlySalary) {
        this.name = name;
        this.lastName = lastName;
        this.monthlySalary = monthlySalary;
    }

    void setname(String n) {
        name = n;
    }

    String getname() {
        return name;
    }

    void setlastname(String n) {
        lastName = n;
    }

    String getlastname() {
        return lastName;
    }

    void setSalary(double n) {
        if (n < 0) {
            monthlySalary = 0;
        } else {
            monthlySalary = n;
        }
    }

    double getSalary() {
        return monthlySalary;
    }
}

public class Employee {
    public static void main(String[] args) {
        Employee_Details e1 = new Employee_Details("Pavan", "chandra", 300000);
        Employee_Details e2 = new Employee_Details("Mukunda", "Sai", 400000);

        System.out.println("salary of e1 is " + e1.getSalary());
        System.out.println("salary of e2 is " + e2.getSalary());

        System.out.println("");

        System.out.println("salary of e1 after hike isis " + (e1.getSalary() + (e1.getSalary() / 10)));
        System.out.println("salary of e2 after hike isis " + (e2.getSalary() + (e2.getSalary() / 10)));

    }
}