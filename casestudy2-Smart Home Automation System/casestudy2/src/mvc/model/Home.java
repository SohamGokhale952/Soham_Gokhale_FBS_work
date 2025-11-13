package mvc.model;

import java.util.ArrayList;

public class Home {

    String homeName;
    ArrayList<Room> rooms = new ArrayList<Room>();

    // constructor
    public Home(String name) {
        homeName = name;
        rooms = new ArrayList<>();
        System.out.println("Home created: " + homeName);
    }

    public void addRoom(Room r) {
        rooms.add(r);
        System.out.println("room added : " + r.getRoomName());
    }

    public void removeRoom(String name) {
        Room temp = getRoom(name);
        if (temp != null) {
            rooms.remove(temp);
            System.out.println("room removed : " + name);
        } else {
            System.out.println("room not found");
        }
    }

    public Room getRoom(String name) {
        for (Room r : rooms) {
            if (r.getRoomName().equalsIgnoreCase(name)) {
                System.out.println("room found : " + r.getRoomName());
                return r;
            }
        }
        System.out.println("no such room found : " + name);
        return null;
    }

    public void showAllRooms() {
        if (rooms.size() == 0) {
            System.out.println("no rooms in home " + homeName);
        } else {
            System.out.println("rooms inside home : ");
            for (int i = 0; i < rooms.size(); i++) {
                System.out.println((i + 1) + ". " + rooms.get(i).getRoomName());
            }
        }
    }

    public void showHomeStatus() {
        System.out.println("===== " + homeName + " =====");
        if (rooms.size() == 0) {
            System.out.println("no rooms yet...");
        } else {
            for (Room r : rooms) {
                System.out.println("Room : " + r.getRoomName());
                r.showAllDevices();
            }
        }
    }

    public String getHomeName() {
        return homeName;
    }

    public void setHomeName(String newName) {
        homeName = newName;
    }
}
