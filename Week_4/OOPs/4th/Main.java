class Box {

    protected double length;
    protected double breadth;

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double area() {
        return length * breadth;
    }

    public void display() {
        System.out.println("Length = " + length);
        System.out.println("Breadth = " + breadth);
        System.out.println("Area = " + area());
    }
}

class Box3D extends Box {

    private double height;

    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public double volume() {
        return length * breadth * height;
    }

    @Override
    public void display() {
        super.display();
        System.out.println("Height = " + height);
        System.out.println("Volume = " + volume());
    }
}

public class Main {
    public static void main(String[] args) {

        Box b = new Box(10, 5);
        System.out.println("2D Box");
        b.display();

        System.out.println();

        Box3D b3 = new Box3D(10, 5, 8);
        System.out.println("3D Box");
        b3.display();
    }
}
