import java.util.Scanner; //lab 7.3

public class CrapsGame {
    enum Status {
        WON, LOST, CONTINUE
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int myPoint = 0;
        Status gameStatus;

        int sumOfDice = rollDice(scanner);

        switch (sumOfDice) {
            case 7:
            case 11:
                gameStatus = Status.WON;
                break;
            case 2:
            case 3:
            case 12:
                gameStatus = Status.LOST;
                break;
            default:
                gameStatus = Status.CONTINUE;
                myPoint = sumOfDice;
                System.out.printf("Point is set to %d%n", myPoint);
                break;
        }

        while (gameStatus == Status.CONTINUE) {
            sumOfDice = rollDice(scanner);

            if (sumOfDice == myPoint) {
                gameStatus = Status.WON;
            } else if (sumOfDice == 7) {
                gameStatus = Status.LOST;
            }
        }

        if (gameStatus == Status.WON) {
            System.out.println("Player wins!");
        } else {
            System.out.println("Player loses!");
        }

        scanner.close();
    }

    public static int rollDice(Scanner scanner) {
        System.out.print("Enter the value of the first die (1-6): ");
        int die1 = scanner.nextInt();

        System.out.print("Enter the value of the second die (1-6): ");
        int die2 = scanner.nextInt();

        if (die1 < 1 || die1 > 6 || die2 < 1 || die2 > 6) {
            System.out.println("Invalid input! Please enter values between 1 and 6.");
            return rollDice(scanner);
        }

        int sum = die1 + die2;

        System.out.printf("Player rolled %d + %d = %d%n", die1, die2, sum);
        return sum;
    }
}
