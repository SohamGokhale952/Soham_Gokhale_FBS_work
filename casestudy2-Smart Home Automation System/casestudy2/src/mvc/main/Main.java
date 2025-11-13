package mvc.main;

import java.util.Scanner;
import mvc.model.*;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Home home = new Home("My Smart Home");
        int ch = 0;

        while (ch != 8) {
            System.out.println("\n==== SMART HOME MENU ====");
            System.out.println("1. Add Room");
            System.out.println("2. Add Device to Room");
            System.out.println("3. Turn ON Device");
            System.out.println("4. Turn OFF Device");
            System.out.println("5. Access Device Features");
            System.out.println("6. Show Home Status");
            System.out.println("7. Remove Device");
            System.out.println("8. Exit");
            System.out.print("Enter choice: ");
            ch = sc.nextInt();
            sc.nextLine();

            // 1️⃣ Add Room
            if (ch == 1) {
                System.out.print("Enter Room ID: ");
                int id = sc.nextInt();
                sc.nextLine();
                System.out.print("Enter Room Name: ");
                String name = sc.nextLine();
                Room room = new Room(id, name);
                home.addRoom(room);
            }

            // 2️⃣ Add Device
            else if (ch == 2) {
                home.showAllRooms();
                System.out.print("Enter Room Name: ");
                String roomName = sc.nextLine();
                Room room = home.getRoom(roomName);

                if (room == null) {
                    System.out.println("Room not found");
                } else {
                    System.out.println("1. Light");
                    System.out.println("2. Fan");
                    System.out.println("3. Air Conditioner");
                    System.out.println("4. Television");
                    System.out.println("5. Shower");
                    System.out.print("Enter device type: ");
                    int t = sc.nextInt();
                    sc.nextLine();

                    System.out.print("Enter Device Name: ");
                    String dName = sc.nextLine();
                    devices d = null;

                    if (t == 1) {
                        System.out.print("Enter Brightness (0-100): ");
                        int b = sc.nextInt();
                        d = new Lights(dName, b);
                    } else if (t == 2) {
                        System.out.print("Enter Speed (1-5): ");
                        int s = sc.nextInt();
                        d = new Fan(dName, s);
                    } else if (t == 3) {
                        System.out.print("Enter Temperature: ");
                        int temp = sc.nextInt();
                        d = new AirConditioner(dName, temp);
                    } else if (t == 4) {
                        System.out.print("Enter Volume: ");
                        int vol = sc.nextInt();
                        System.out.print("Enter Channel: ");
                        int chh = sc.nextInt();
                        d = new TeleVision(dName, vol, chh);
                    } else if (t == 5) {
                        System.out.print("Enter Water Temperature: ");
                        int w = sc.nextInt();
                        d = new Shower(dName, w);
                    } else {
                        System.out.println("Invalid Type");
                    }

                    if (d != null) {
                        room.addDevice(d);
                        System.out.println(d.getName() + " added in " + room.getRoomName() + " [Status: " + (d.getStatus() ? "ON" : "OFF") + "]");
                    }
                }
            }

            // 3️⃣ Turn ON Device
            else if (ch == 3) {
                System.out.print("Enter Room Name: ");
                String rName = sc.nextLine();
                Room r = home.getRoom(rName);
                if (r != null) {
                    System.out.print("Enter Device Name to Turn ON: ");
                    String dName = sc.nextLine();
                    r.turnOnDevice(dName);
                } else {
                    System.out.println("Room not found");
                }
            }

            // 4️⃣ Turn OFF Device
            else if (ch == 4) {
                System.out.print("Enter Room Name: ");
                String rName = sc.nextLine();
                Room r = home.getRoom(rName);
                if (r != null) {
                    System.out.print("Enter Device Name to Turn OFF: ");
                    String dName = sc.nextLine();
                    r.turnOffDevice(dName);
                } else {
                    System.out.println("Room not found");
                }
            }

            // 5️⃣ Access Device Features
            else if (ch == 5) {
                System.out.print("Enter Room Name: ");
                String rName = sc.nextLine();
                Room r = home.getRoom(rName);
                if (r == null) {
                    System.out.println("Room not found");
                    continue;
                }
                System.out.print("Enter Device Name: ");
                String dName = sc.nextLine();
                devices d = r.getDevice(dName);
                if (d == null) {
                    System.out.println("Device not found");
                    continue;
                }

                if (d instanceof Lights) {
                    Lights l = (Lights) d;
                    System.out.print("Enter new Brightness (0-100): ");
                    int b = sc.nextInt();
                    l.setBrightness(b);
                } else if (d instanceof Fan) {
                    Fan f = (Fan) d;
                    System.out.println("1. Increase Speed  2. Decrease Speed");
                    int s = sc.nextInt();
                    if (s == 1) f.incSpeed();
                    else f.decSpeed();
                } else if (d instanceof AirConditioner) {
                    AirConditioner ac = (AirConditioner) d;
                    System.out.print("Enter Temperature: ");
                    int t = sc.nextInt();
                    ac.setTemprature(t);
                } else if (d instanceof TeleVision) {
                    TeleVision tv = (TeleVision) d;
                    System.out.println("1. Change Channel");
                    System.out.println("2. Increase Volume");
                    System.out.println("3. Decrease Volume");
                    System.out.println("4. Set Brightness");
                    int opt = sc.nextInt();
                    if (opt == 1) {
                        System.out.print("Enter Channel: ");
                        int c = sc.nextInt();
                        tv.setChannel(c);
                    } else if (opt == 2) tv.increaseVolume(5);
                    else if (opt == 3) tv.decreaseVolume(5);
                    else if (opt == 4) {
                        System.out.print("Enter Brightness: ");
                        int b = sc.nextInt();
                        tv.setBrightness(b);
                    }
                } else if (d instanceof Shower) {
                    Shower s = (Shower) d;
                    System.out.print("Enter Temperature: ");
                    int t = sc.nextInt();
                    s.setTemprature(t);
                } else {
                    System.out.println("No extra features for this device");
                }
            }

            // 6️⃣ Show Home Status (with ON/OFF)
            else if (ch == 6) {
                home.showHomeStatus();
            }

            // 7️⃣ Remove Device
            else if (ch == 7) {
                System.out.print("Enter Room Name: ");
                String rName = sc.nextLine();
                Room r = home.getRoom(rName);
                if (r != null) {
                    System.out.print("Enter Device Name to Remove: ");
                    String dName = sc.nextLine();
                    r.removeDevice(dName);
                } else {
                    System.out.println("Room not found");
                }
            }

            // 8️⃣ Exit
            else if (ch == 8) {
                System.out.println("Exiting Smart Home...");
            }

            else {
                System.out.println("Invalid choice");
            }
        }

        sc.close();
    }
}
