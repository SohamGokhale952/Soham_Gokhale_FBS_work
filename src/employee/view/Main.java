package employee.view;

import java.util.Scanner;

import employee.dao.EmployeeDoa;
import employee.model.Admin;
import employee.model.Employee;
import employee.model.Hr;
import employee.model.SalesManager;

public class Main {
	 public static void main(String[] args) {
	        Scanner sc = new Scanner(System.in);
	        EmployeeDoa dao = new EmployeeDoa();
	        dao.defaultEmployees(); 

	        int choice;
	        do {
	            System.out.println("--- Employee Management ---");
	            System.out.println("1. Display All Employees");
	            System.out.println("2. Add Employee");
	            System.out.println("3. Remove Employee by ID");
	            System.out.println("4. Search Employee by ID");
	            System.out.println("5. Search Employee by Name");
	            System.out.println("6. Sort Employees by ID");
	            System.out.println("7. Sort Employees by Salary (Descending)");
	            System.out.println("0. Exit");
	            System.out.print("Enter your choice: ");
	            choice = sc.nextInt();
	            sc.nextLine(); // consume newline

	            switch (choice) {
	                case 1:
	                    dao.displayEmployees();
	                    break;

	                case 2:
	                    System.out.println("Select Employee Type: 1-SalesManager 2-Hr 3-Admin");
	                    int type = sc.nextInt();
	                    sc.nextLine(); 
	                    System.out.print("Enter ID: ");
	                    int id = sc.nextInt();
	                    sc.nextLine();
	                    System.out.print("Enter Name: ");
	                    String name = sc.nextLine();
	                    System.out.print("Enter Salary: ");
	                    double salary = sc.nextDouble();

	                    Employee e = null ;
	                    if (type == 1) {
	                        System.out.print("Enter Target: ");
	                        int target = sc.nextInt();
	                        System.out.print("Enter Incentive: ");
	                        double incentive = sc.nextDouble();
	                        e = new SalesManager(id, name, target, salary, incentive);
	                    } else if (type == 2) {
	                        System.out.print("Enter C: ");
	                        double c = sc.nextDouble();
	                        e = new Hr(id, name, salary, c);
	                    } else if (type == 3) {
	                        System.out.print("Enter D: ");
	                        double d = sc.nextDouble();
	                        e = new Admin(id, name, salary, d);
	                    }

	                    dao.addEmp( e);
	                    break;

	                case 3:
	                    System.out.print("Enter Employee ID to remove: ");
	                    int rid = sc.nextInt();
	                    dao.removeEmpbyId(rid);
	                    break;

	                case 4:
	                    System.out.print("Enter Employee ID to search: ");
	                    int sid = sc.nextInt();
	                    Employee found = dao.searchyEmpById(sid);
	                    if (found != null)
	                        found.display();
	                    else
	                        System.out.println("Employee not found");
	                    break;

	                case 5:
	                    System.out.print("Enter Employee Name to search: ");
	                    String sname = sc.next();
	                    dao.searchByEmpName(sname);
	                    break;

	                case 6:
	                    dao.sortEmpById();
	                    System.out.println("Employees sorted by ID.");
	                    break;

	                case 7:
	                    dao.sortBySalaryDesc();
	                    break;

	                case 0:
	                    System.out.println("Exiting...");
	                    break;

	                default:
	                    System.out.println("Invalid choice!");
	            }

	        } while (choice != 0);

	        sc.close();
	    }
}
