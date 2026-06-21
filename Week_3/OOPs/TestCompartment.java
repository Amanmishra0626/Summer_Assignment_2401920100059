package Week_3;
import java.util.Random;

abstract class Compartment{
    public abstract String notice();
}
class FirstClass extends Compartment {
    public String notice() {
        return "First class:- Premium and spacious.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment:- Only for ladies.";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment:- Available for all.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment:- For luggage only.";
    }
}

public class TestCompartment {
     public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random assign = new Random();

        for (int i = 0; i < 10; i++) {
            int choice = assign.nextInt(4) + 1; 
            switch (choice) {
                case 1:
                    compartments[i] = new Luggage();
                    break;
                case 2:
                    compartments[i] = new General();
                    break;
                case 3:
                    compartments[i] = new FirstClass();
                    break;
                case 4:
                    compartments[i] = new Ladies();
                    break;
            }
        }
        for (int i = 0; i < 10; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + compartments[i].notice());
        }
    }
}
