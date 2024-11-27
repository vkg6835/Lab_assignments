class Info {
    String partNumber;
    String partDescription;
    int quantity;
    double price;

    Info(String partNumber, String partDescription, int quantity, double price) {
        this.partNumber = partNumber;
        this.partDescription = partDescription;
        this.quantity = quantity;
        this.price = price;
    }

    void setpartNumber(String n) {
        partNumber = n;
    }

    String getpartNumber() {
        return partNumber;
    }

    void setpartDescription(String n) {
        partDescription = n;
    }

    String getpartDescription() {
        return partDescription;
    }

    void setquantity(int n) {
        quantity = n;
        if (n < 0)
            quantity = 0;
    }

    int getquantity() {
        return quantity;
    }

    void setprice(double n) {
        price = n;
        if (n < 0)
            price = 0;
    }

    double getprice() {
        return price;
    }

    double getInvoiceAmount() {
        return quantity * price;
    }

}

public class Invoice {
    public static void main(String[] args) {
        Info i1 = new Info("22", "abcd", 3, 5.9);
        Info i2 = new Info("23", "efgh", 4, 7.7);
        Info i3 = new Info("24", "ijkl", 8, 9.1);

        System.out.println("the details of item 1 are " + i1.getpartNumber() + " and " + i1.getpartDescription());
        System.out.println("the details of item 2 are " + i2.getpartNumber() + " and " + i2.getpartDescription());
        System.out.println("the details of item 3 are " + i3.getpartNumber() + " and " + i3.getpartDescription());

        double total = i1.getInvoiceAmount() + i2.getInvoiceAmount() + i3.getInvoiceAmount();

        System.out.println("totl amount is " + total);

    }
}