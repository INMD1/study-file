import java.util.Scanner;

public class circle
{
    public static void main(String args[])
    {
        final double PI = 3.14;

        Scanner scan = new Scanner(System.in);
        System.out.print("반지름 입력: ");
        double radius = scan.nextDouble();

        System.out.println("원의 둘레: " + (2*PI*radius));
        System.out.println("원의 넓이: " + (PI*radius*radius));
    }
}