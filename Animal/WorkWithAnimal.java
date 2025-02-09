import java.util.concurrent.atomic.AtomicInteger;   

public class WorkWithAnimal {
    public static void main(String[] args){
        Dog fido = new Dog(); 
        
        fido.setName("Fido"); 
        System.out.println("Dog Name: " + fido.getName());
        
        fido.digHole();
        
        System.out.println("Dog Sound: " + fido.getSound());

        fido.setWeight(-20); 

        changeObjectName(fido); 

        System.out.println("Dog name after method call : " + fido.getName()); 

        int test = 10;
        Integer test1 = 100; 

        System.out.println("Integer Object: " + test1); 
        // System.out.println("test before function call " + test); 

        // changeTest(test);
        changeTestObject(test1);  

        // System.out.println("test after function call " + test); 
        System.out.println("test1 after function call " + test1); 
    }

    public static void changeObjectName(Dog fido){
        fido.setName("Kalu");
    }

    public static void changeTest(int test){
        test = 12; 

        System.out.println("test inside function " + test);
    }

    public static void changeTestObject(Integer test){
        test = 220; 
        System.out.println("test1 inside function : " + test); 
    }
}
