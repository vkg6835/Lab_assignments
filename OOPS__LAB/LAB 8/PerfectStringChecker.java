import java.util.Scanner;// lab 8.3

public class PerfectStringChecker {

    public static boolean isPerfectString(String input) {
        boolean[] seen = new boolean[256];

        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);

            if (seen[ch]) {
                return false;
            }

            seen[ch] = true;
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String input = scanner.nextLine();

        if (isPerfectString(input)) {
            System.out.println("The string is a perfect string.");
        } else {
            System.out.println("The string is not a perfect string.");
        }

        scanner.close();
    }
}
