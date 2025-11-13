package mvc.model;

public class Fan extends devices  {

	double speed;
	
	public double getSpeed() {
		return speed;
	}

	public void setSpeed(double speed) {
		this.speed = speed;
		System.out.println(" the currnet speed is "+ this.speed);
	}

	public Fan( String name,double speed) {
		super(name);
		this.speed = speed;
	}

	@Override
	public void turnOn() {
		// TODO Auto-generated method stub
		if (isOn != true) {
			System.out.println("FAN turned on");
			setOn(true);
		}

	}

	@Override
	public void turnOff() {
		// TODO Auto-generated method stub
		if (isOn == true) {
			setOn(false);
			System.out.println("FAN turned off");

		}

	}

	@Override
	public boolean getStatus() {

		boolean status = isOn();
		return status;
	}

	public double incSpeed() {
	    if (!isOn) {
	        System.out.println(name + " Fan is OFF. Turn it ON first.");
	        return speed;
	    }

	    if (speed < 5) {
	        setSpeed(speed + 1); // ✅ centralized logic
	    } else {
	        System.out.println(name + " Fan is already at maximum speed (" + speed + ").");
	    }

	    return speed;
	}

	public double decSpeed() {
	    if (!isOn) {
	        System.out.println(name + " Fan is OFF. Turn it ON first.");
	        return speed;
	    }

	    if (speed > 0) {
	        setSpeed(speed - 1); // ✅ centralized logic
	    } else {
	        System.out.println(name + " Fan is already at maximum speed (" + speed + ").");
	    }

	    return speed;
	}


}
