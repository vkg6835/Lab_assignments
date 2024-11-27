package FigPackage;

public class Cone extends Figure {
    private double s;
    private double h;


    public Cone(double r, double s, double h) {
        this.r = r;
        this.s = s;
        this.h = h;
        calcArea();
        calcVolume();
    }


    @Override
    public void calcArea() {

        a = (pi * r * s) + (pi * r * r);
    }

    @Override
    public void calcVolume() {

        v = (pi * r * r * h) / 3;
    }

    @Override
    public void dispArea() {
        System.out.println("Cone Area: " + a);
    }

    @Override
    public void dispVolume() {
        System.out.println("Cone Volume: " + v);
    }
}
