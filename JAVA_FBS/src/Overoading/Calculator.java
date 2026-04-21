class Operations{
    //Addition

    int add(int a,int b){
        return a+b;
    }

    double add(double a,double b){
        return a+b;
    }

    double add(int a,double b){
        return a+b;
    }

    double add(double a,int b){
        return a+b;
    }

    //Substraction

    int sub(int a,int b){
        return a-b;
    }

    double sub(double a,double b){
        return a-b;
    }

    double sub(int a,double b){
        return a-b;
    }

    double sub(double a,int b){
        return a-b;
    }

    //Multiplication

    int mul(int a,int b){
        return a*b;
    }

    double mul(double a,double b){
        return a*b;
    }

    double mul(int a,double b){
        return a*b;
    }

    double mul(double a,int b){
        return a*b;
    }
    
    //Division

    int div(int a,int b){
        return a/b;
    }

    double div(double a,double b){
        return a/b;
    }

    double div(int a,double b){
        return a/b;
    }

    double div(double a,int b){
        return a/b;
    }

}

public class Calculator{
    public static void main(String[] args){

        Operations c = new Operations();

        
        System.out.println("Add int: " + c.add(10, 5));
        System.out.println("Add double: " + c.add(10.5, 5.5));
        System.out.println("Add int-double: " + c.add(10, 5.5));
        System.out.println("Add double-int: " + c.add(10.5, 5));

        System.out.println("Sub int: " + c.sub(10, 5));
        System.out.println("Mul double: " + c.mul(2.5, 4.0));
        System.out.println("Div int: " + c.div(10, 3));  // int division
        System.out.println("Div double: " + c.div(10.0, 3));

    }

}