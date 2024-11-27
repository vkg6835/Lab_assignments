import java.util.Scanner;//lab 8.2

public class CharacterCount {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String input = scanner.nextLine();

        System.out.print("Enter the threshold value n: ");
        int n = scanner.nextInt();

        int[] frequency = new int[256];

        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            frequency[ch]++;
        }

        System.out.println("Characters with frequency greater than " + n + ":");
        for (int i = 0; i < frequency.length; i++) {
            if (frequency[i] > n) {
                System.out.println((char) i + ": " + frequency[i]);
            }
        }

        scanner.close();
    }
}
