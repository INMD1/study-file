import java.util.Scanner;

public class classjava {
    public static String test;

    public static void main(String[] atgs) {
        Scanner scan = new Scanner(System.in);

        System.out.print("아무거나 입력해라 후면");
        test = scan.next();
        student kim = new student();
        student jang = new student(test);

        System.out.println("학생이름은 " + kim + "입니다");
        System.out.print("학생이름은 " + jang + "입니다");

    }
}
class student{
    String name;
    public student(){};
    public student(String n){ name = n;}
}
