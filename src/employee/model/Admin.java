package employee.model;

public class Admin extends Employee
{
   
    double allowance;

  
    public  void setAllowance(double d) { allowance = d; }

    // getters
    
    public double getAllowance() { return allowance; }

    // display
   public void display() {
        super.display();
        System.out.println("Allowance: " + this.allowance);
        System.out.println("----------------------");
    }

    // default constructor
   public  Admin() {
       super();
        this.allowance = 1234.0;
        System.out.println("default constructor");
    }

    // parameterised constructor
   public  Admin(int id, String name, double salary, double d) {
		super(id,name,salary);

        this.allowance = d;
        System.out.println("parameterised constructor");
    }
    
    
public double calSal(){
		
		return salary+allowance;
		
	}
} // Class Admin ends here
