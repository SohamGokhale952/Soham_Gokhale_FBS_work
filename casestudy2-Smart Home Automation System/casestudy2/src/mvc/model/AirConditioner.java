package mvc.model;

import mvc.interfaces.TempControlable;

public class AirConditioner extends devices implements TempControlable {

	int temprature;

	 public AirConditioner(String name, int temperature) {
	        super(name);
	        this.temprature = temperature;
	    }

	public AirConditioner() {
		temprature = 30;
	}

	public AirConditioner(String name, boolean isOn, long startTime, long totalTime) {
		super(name, isOn, startTime, totalTime);
		// TODO Auto-generated constructor stub
	}

	@Override
	public void turnOn() {
		// TODO Auto-generated method stub
		if (isOn != true) {
			System.out.println("AC turned on");
			setOn(true);
		}

	}

	@Override
	public void turnOff() {
		// TODO Auto-generated method stub
		if (isOn == true) {
			setOn(false);
			System.out.println("AC turned off");

		}

	}

	@Override
	public boolean getStatus() {

		boolean status = isOn();
		return status;
	}

	@Override
	public void setTemprature(int temp) {
		this.temprature = temp;
		System.out.println("temp is set to" + temp);

	}

	@Override
	public int getTemprature() {
		// TODO Auto-generated method stub
		return temprature;
	}

}
