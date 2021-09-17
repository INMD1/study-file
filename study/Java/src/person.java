import java.util.Scanner;

public class person {

    public static void main(String args[]){
        String lastname, firstname;
        Scanner scan = new Scanner(System.in);
        System.out.print("성을 먼저 입력해 주세요. : ");
        firstname= scan.next();
        System.out.print("이름을 입력해 주세요. : ");
        lastname = scan.next();
        name js = new name(lastname, firstname);

        System.out.println("성: " + js.getFirstname());
        System.out.println("이름: " + js.getLastname());

        System.out.print("이름 숫자: " + js.getData());
    }
}
class name{
    String lastname, firstname;
    int data;
    public name(String last, String first){
        this.lastname =  last;
        this.firstname = first;
    }

    public String getLastname(){return lastname; }
    public String getFirstname(){ return firstname; }
    public int getData(){return (lastname + firstname).length(); }
}



