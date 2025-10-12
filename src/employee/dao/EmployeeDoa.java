package employee.dao;

import java.util.ArrayList;
import java.util.Collections;

import employee.model.Admin;
import employee.model.Employee;
import employee.model.Hr;
import employee.model.SalesManager;

public class EmployeeDoa {
//	int count = 0;
//public 	Employee[] earr = new Employee[100];
	
	ArrayList<Employee> earr = new ArrayList<Employee>();

	public void defaultEmployees() {

//		earr[count++] = new SalesManager(201, "Arjun", 50, 45000, 5000);
//		earr[count++] = new SalesManager(202, "Meera", 70, 52000, 7000);
//		earr[count++] = new SalesManager(203, "Karan", 40, 40000, 4500);
//
//		earr[count++] = new Hr(301, "Riya", 38000, 2000);
//		earr[count++] = new Hr(302, "Amit", 42000, 2500);
//		earr[count++] = new Hr(303, "Neha", 40000, 2200);
//
//		earr[count++] = new Admin(401, "Karan", 35000, 1200);
//		earr[count++] = new Admin(402, "Meera", 37000, 1500);
//		earr[count++] = new Admin(403, "Anil", 39000, 1800);
		
		earr.add(new SalesManager(201, "Arjun", 50, 45000, 5000));
		earr.add(new SalesManager(202, "Meera", 70, 52000, 7000));
		earr.add(new SalesManager(203, "Karan", 40, 40000, 4500));

		earr.add(new Hr(301, "Riya", 38000, 2000));
		earr.add(new Hr(302, "Amit", 42000, 2500));
		earr.add(new Hr(303, "Neha", 40000, 2200));

		earr.add(new Admin(401, "Karan", 35000, 1200));
		earr.add(new Admin(402, "Meera", 37000, 1500));
		earr.add(new Admin(403, "Anil", 39000, 1800));
		//earr.add(10, new Hr(302, "Amit", 42000, 2500));

	}

	public void displayEmployees() {
		for (int i = 0; i < earr.size(); i++) {
			Employee e= earr.get(i);
			e.display();
		}
	}

	public void searchByEmpName(String name) {
		for (int i = 0; i < earr.size(); i++) {
			Employee e1= earr.get(i);
			if (e1.getName().equals(name)) {

				e1.display();
				break;

			}
		}

	}

	public Employee searchyEmpById(int id) {

		for (int i = 0; i < earr.size(); i++) {
			Employee e1= earr.get(i);
			if (e1.getId() == id) {

				// earr[i].display();
				return e1;

			}
		}
		return null;
	}

	public int addEmp(Employee e) {
		
		earr.add(e);
		System.out.println("Employee added successfully");
		return 1;

	}

	public boolean removeEmpbyId(int id) {
//		int x = 0;
		for (int i = 0; i < earr.size(); i++) {
			Employee e1= earr.get(i);
			if (e1.getId() == id) {

//				earr[x] = earr[i];
				earr.remove(i);
				System.out.println("employee removed ssuccessfully");

				return true;
//				x++;
			}
			
		//instead of above methos i can do like
			//earr.remove(e); after receibving the emp

		}
//		count=x;                         
		return false;
	}

	public void sortEmpById() {
		
		Collections.sort(earr);
		
//		
//
//		for (int i = 0; i < earr.size(); i++) {
//			for (int j = 0; j <  earr.size() - i - 1; j++) {
////				
//				if (earr.get(j).getId() > earr.get(i).getId()) {
//					Employee temp = earr.get(j);
//					earr.set(j, earr.get(j + 1));
//		            earr.set(j + 1, temp);
//				}
//			}
//		}

	}

	public void sortBySalaryDesc() {
		mySortBySalary s = new mySortBySalary();
		
		Collections.sort(earr,s);

		
//		
//		
//		for (int i = 0; i < earr.size() - 1; i++) {
//		    for (int j = 0; j < earr.size() - i - 1; j++) {
//		        if (earr.get(j).getSalary() < earr.get(j + 1).getSalary()) {
//		            Employee temp = earr.get(j);
//		            earr.set(j, earr.get(j + 1));
//		            earr.set(j + 1, temp);
//		        }
//		    }
//		}
//
//	}

	}}
