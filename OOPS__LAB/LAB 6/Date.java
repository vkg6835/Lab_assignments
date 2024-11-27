class Data {
    int day;
    int month;
    int year;

    Data(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    void setday(int n) {
        day = n;
    }

    int getday() {
        return day;
    }

    void setmonth(int n) {
        month = n;
    }

    int getmonth() {
        return month;
    }

    void setyear(int n) {
        year = n;
    }

    int getyear() {
        return year;
    }

    void displayDate() {
        System.out.println("date is " + this.year + " / " + this.month + " / " + this.day);
    }
}

public class Date {
    public static void main(String[] args) {
        Data d1 = new Data(01, 10, 2024);
        Data d2 = new Data(27, 9, 2006);

        d1.displayDate();
        d2.displayDate();

    }
}