import java.util.Scanner;// lab 6.1

public class DrivingCostCalculator {

    public static double calculateDailyDrivingCost(double milesPerDay, double costPerGallon, double milesPerGallon,
            double parkingFees, double tollsPerDay)

    {
        double fuelCostPerDay = (milesPerDay / milesPerGallon) * costPerGallon;

        return fuelCostPerDay + parkingFees + tollsPerDay;
    }

    public static void main(String[] args) {
        Scanner calculator = new Scanner(System.in);

        System.out.print("Enter total miles driven per day: ");
        double milesPerDay = calculator.nextDouble();

        System.out.print("Enter cost per gallon of gasoline: ");
        double costPerGallon = calculator.nextDouble();

        System.out.print("Enter the average miles per gallon: ");
        double milesPerGallon = calculator.nextDouble();

        System.out.print("Enter average parking fees per day: ");
        double parkingFees = calculator.nextDouble();

        System.out.print("Enter tolls per day: ");
        double tollsPerDay = calculator.nextDouble();

        double dailyCost = calculateDailyDrivingCost(milesPerDay, costPerGallon, milesPerGallon, parkingFees,
                tollsPerDay);

        System.out.printf("Your daily driving cost is: Rs.%.2f%n", dailyCost);

        calculator.close();
    }
}
