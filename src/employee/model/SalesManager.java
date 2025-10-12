package employee.model;

public class SalesManager extends Employee {
	int target;
	double incentive;

	// Default constructor
	public SalesManager() {
		super();
		target = 0;
		incentive = 0.0;
	}

	// Parameterized constructor
	public SalesManager(int id, String name, int target, double salary, double incentive) {
		super(id, name, salary);
		this.target = target;

		this.incentive = incentive;
	}

	public	void setTarget(int t) {
		target = t;
	}

	public void setIncentive(double ins) {
		incentive = ins;
	}

	// Getters

	public	int getTarget() {
		return this.target;
	}

	public	double getIncentive() {
		return this.incentive;
	}

	public void display() {

		super.display();
		System.out.println("Target is: " + this.target);

		System.out.println("Incentive is: " + this.incentive);
	}

	public double calSal() {

		return salary + incentive;

	}
}
