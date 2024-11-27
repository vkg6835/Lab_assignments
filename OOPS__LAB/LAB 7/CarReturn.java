public class CarReturn { // lab 7.2
    private String model;

    public String check(String model) {
        if (model == "SUV") {
            return "TATA SAFARI";
        } else if (model == "SEDAN") {
            return "TATA INDIGO";
        } else if (model == "ECONOMY") {
            return "TATA INDICA";
        } else if (model == "MINI") {
            return "TATA NANO";
        } else {
            return "unknown model";
        }
    }

    public static void main(String[] args) {

        CarReturn car = new CarReturn();

        String offeredModel = car.check("MINI");
        System.out.printf("model you get is %s", offeredModel);
    }

}
