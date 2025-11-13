package mvc.model;

import mvc.interfaces.Switchable;

public abstract  class devices implements Switchable {

	String name;
	boolean isOn;
	long startTime;
	long totalTime;
	
	
	public devices() {
		this.name = "not given";
		this.isOn = false;
		this.startTime = 0;
		this.totalTime = 0;	
		}
	public devices(String name, boolean isOn, long startTime, long totalTime) {
		this.name = name;
		this.isOn = isOn;
		this.startTime = startTime;
		this.totalTime = totalTime;
	}
	public devices(String name) {
	    this(name, false, 0, 0); 
		}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public boolean isOn() {
		return isOn;
	}
	public void setOn(boolean isOn) {
		this.isOn = isOn;
	}
	public long getStartTime() {
		return startTime;
	}
	public void setStartTime(long startTime) {
		this.startTime = startTime;
	}
	public long getTotalTime() {
		return totalTime;
	}
	public void setTotalTime(long totalTime) {
		this.totalTime = totalTime;
	}
	
	public  abstract void turnOn() ;
	public abstract void turnOff();
	public abstract boolean getStatus();
	

	

	
	
}
