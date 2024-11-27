import java.util.Scanner; //lab 8.4

public class PatternCounter {
    public static int countPatternInRange(int start, int end, String pattern) {
        int count = 0;

        for (int i = start; i <= end; i++) {
            String numberStr = String.valueOf(i);

            if (numberStr.contains(pattern)) {
                count++;
            }
        }

        return count;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the range (a b): ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.print("Enter the pattern to search: ");
        String pattern = scanner.next();

        int occurrences = countPatternInRange(a, b, pattern);

        System.out.println(
                "The number of times " + pattern + " occurred between " + a + " and " + b + ": " + occurrences);

        scanner.close();
    }
}
