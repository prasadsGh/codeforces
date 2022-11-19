import java.util.*;
class digitMin{
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the table name: ");
    String tabl = sc.next(); 
    System.out.println("enter your roll no: ");
    int rollno= sc.nextInt();
    
    System.out.println("enter your name: ");
    String name= sc.next();
    System.out.println("insert into "+tabl+ " values "+"("+rollno+",\""+name+"\""+");");


    
}
};