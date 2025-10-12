package employee.dao;
import java.util.Comparator;

import employee.model.Employee;

public class mySortBySalary implements Comparator <Employee>{

	@Override
	public int compare(Employee o1, Employee o2) {
		// TODO Auto-generated method stub
		return (int) (o1.salary-o2.salary);
	}

	
	
	
	
}
