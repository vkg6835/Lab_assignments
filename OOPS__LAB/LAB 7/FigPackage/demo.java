import FigPackage.Cone;
import FigPackage.Sphere;
import FigPackage.Cylinder;

public class demo {

    public static void main(String[] args) {

        Cone cone = new Cone(5, 12, 10);
        Sphere sphere = new Sphere(7);
        Cylinder cylinder = new Cylinder(4, 10);

        
        cone.dispArea();
        cone.dispVolume();

        sphere.dispArea();
        sphere.dispVolume();

        cylinder.dispArea();
        cylinder.dispVolume();
    }
}
