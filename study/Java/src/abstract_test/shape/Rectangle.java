package abstract_test.shape;

public class Rectangle extends shape{
    private int Lenght;
    private int width;
    public Rectangle (String name, int Lenght, int width){
        this.name = name;
        this.Lenght = Lenght;
        this.width = width;
    }

    @Override
    public int getArea() {
        return (Lenght*width);
    }

    public static void main(String[] args){
        Rectangle myRect = new Rectangle("MY R", 5,3);
        System.out.println("사각형의 넓이 : " + myRect.getArea());
    }
}
