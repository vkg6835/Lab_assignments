import java.util.Scanner; // lab 8.1
import java.util.regex.Pattern;

public class PasswordValidator {

    public static boolean isValidPassword(String password) {
        if (password.length() < 5 || password.length() > 12) {
            return false;
        }

        // any uppercase or special characters
        if (!password.matches("[a-z0-9]+")) {
            return false;
        }

        // at least one lowercase letter and one digit
        if (!password.matches(".*[a-z].*") || !password.matches(".*[0-9].*")) {
            return false;
        }

        // immediate repeated patterns
        if (hasImmediateRepeatedPattern(password)) {
            return false;
        }

        return true;
    }

    // Method to check for immediate repeated patterns
    private static boolean hasImmediateRepeatedPattern(String password) {
        int length = password.length();
        for (int i = 0; i < length - 1; i++) {
            for (int j = 1; i + 2 * j <= length; j++) {
                String substring = password.substring(i, i + j);
                String nextSubstring = password.substring(i + j, i + 2 * j);
                if (substring.equals(nextSubstring)) {
                    return true;
                }
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter password: ");
        String password = scanner.nextLine();

        // Check if the password is valid
        if (isValidPassword(password)) {
            System.out.println("Password is acceptable.");
        } else {
            System.out.println("Password is not acceptable.");
        }

        scanner.close();
    }
}
