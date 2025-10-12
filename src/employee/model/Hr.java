package employee.model;

public class Hr extends Employee
{

double commission;

//setter

public void setCommission(double e)
{
	commission=e;
}

//getters
	
public double getCommission()
{
return commission;	
}

public void display()
{
super.display();
System.out.println("commission is"+this.commission);



}


	 // default constructor
public Hr() {
    super();
    this.commission = 0.0;
    System.out.println("default constructor");
	}

	// parameterized constructor
public	Hr(int id, String name, double salary, double c) {
  	super(id,name,salary);

    this.commission = c;
    System.out.println("parameterised constructor");
	 }
	
public double calSal(){
		
		return salary+commission;
		
	}

}




