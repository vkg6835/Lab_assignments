import java.util.Scanner;

public class DrivingCost_perTrip {
    // double totalMiles_driven;// total fuel cost = (total miles/miles per
    // gallon)*cost of gallon
    // double totalGallon_cost;// ==> (cost of gallon * total miles)/total fuel cost
    // = miles per gallon

    public static void main(String[] args) {

        Scanner calculate = new Scanner(System.in);

        System.out.println("enter total miles driven");
        double totalMiles_driven = calculate.nextDouble();

        System.out.println("enter how much gasoline is used");
        double totalGallon_cost = calculate.nextDouble();

        System.out.println("enter cost of gallon");
        double costOfGallon = calculate.nextDouble();

        // System.out.println("miles per gallon", (costOfGallon * totalMiles_driven) /
        // totalGallon_cost);

        calculate.close();

    }

}
