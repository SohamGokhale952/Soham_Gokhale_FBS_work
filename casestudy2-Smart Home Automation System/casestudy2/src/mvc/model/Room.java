package mvc.model;

import java.util.ArrayList;

public class Room {

	int id;
	String roomName;

	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public String getRoomName() {
		return roomName;
	}

	public void setRoomName(String roomName) {
		this.roomName = roomName;
	}

	ArrayList<devices> devList;

	// constructor
	public Room(int id, String roomName) {
		this.id = id;
		this.roomName = roomName;

		devList = new ArrayList<devices>();
	}

	public void addDevice(devices de) {

		devList.add(de);
		System.out.println("device added successfully");

	}

	public devices getDevice(String name) {
		for (devices devices : devList) {
			
			if (devices.getName().equals(name)) {
				
				System.out.println(devices.getName() + " found in " + roomName);
			return devices;	
			}
		}
		return null;
		
	}
	
	public void removeDevice(String name) {
		devices d =getDevice(name);

		if (d!=null) {
			devList.remove(d);
			
	        System.out.println(d.getName() + " removed successfully from " + roomName);
		}
			
		
	}
	
	public void showAllDevices() {
	    if (devList.isEmpty()) {
	        System.out.println("No devices found in " + roomName);
	        return;
	    }

	    System.out.println("\nDevices in " + roomName + ":");
	    for (devices d : devList) {
	        String status = d.getStatus() ? "ON" : "OFF";
	        System.out.println(" - " + d.getName() + " [" + status + "]");
	    }
	}

	public void turnOnDevice(String name) {
	    devices d = getDevice(name);
	    if (d != null) {
	        d.turnOn();
	    } else {
	        System.out.println("Device " + name + " not found in " + roomName);
	    }
	}

	public void turnOffDevice(String name) {
	    devices d = getDevice(name);
	    if (d != null) {
	        d.turnOff();
	    } else {
	        System.out.println("Device " + name + " not found in " + roomName);
	    }
	}

}