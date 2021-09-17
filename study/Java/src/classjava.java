import java.util.Scanner;

public class classjava {
    public static int input;
    public static void main(String[] atgs) {
        Scanner scan = new Scanner(System.in);

        System.out.print("아무거나 입력해라 후면");
        input = scan.nextInt();
        test(input);

    }

    public static void test(int a){
        System.out.println("이건 제곱이란다 " + a * a);
    }
}
