package mvc.model;

import mvc.interfaces.TempControlable;

public class Shower extends devices implements TempControlable {

    private int temperature;

    public Shower(String name, int temperature) {
        super(name);
        this.temperature = temperature;
    }

    @Override
    public void turnOn() {
        if (!isOn) {
            setOn(true);
            System.out.println(name + " Shower turned ON.");
        } else {
            System.out.println(name + " Shower is already ON.");
        }
    }

    @Override
    public void turnOff() {
        if (isOn) {
            setOn(false);
            System.out.println(name + " Shower turned OFF.");
        } else {
            System.out.println(name + " Shower is already OFF.");
        }
    }

    @Override
    public boolean getStatus() {
        return isOn();
    }

    @Override
    public void setTemprature(int temperature) {
        this.temperature = temperature;
        System.out.println(name + " water temperature set to " + temperature + "°C");
    }

    @Override
    public int getTemprature() {
        return temperature;
    }
}
