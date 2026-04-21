
class Student{
	int roll_no;
	String name;
	double distance_covered;
	
	Student(){

		this.roll_no=21;
		this.name="Rahul Magdum";
		this.distance_covered=20;

	}

	Student(int n,String str,double d){

		this.roll_no=n;
		this.name=str;
		this.distance_covered=d;

	}


	void setRollNo(int n) {
		this.roll_no=n;
	}
	
	void setName(String str) {
		this.name=str;
	}
	
	void setDisCov(double d) {
		this.distance_covered=d;
	}
	
	int getRollNo() {
		return roll_no;
	}
	
	String getName() {
		return name;
	}
	
	double getDisCov() {
		return distance_covered;
	}
	
	void display() {
		System.out.println("Roll_no:"+getRollNo());
		System.out.println("Name:"+getName());
		System.out.println("Distance covered in km:"+getDisCov());
		System.out.println();
	
	}

}
public class StudDisplay {

	public static void main(String[] args) {
		Student s1,s2,s3;
		s1 = new Student();
		
		s1.setRollNo(1);
		s1.setName("Rahul");
		s1.setDisCov(5);
		
		s1.display();

		s2 = new Student();
		System.out.println("Default Constructor:");
		s2.display();

		s3= new Student(45,"Rohit",7);
		System.out.println("Parameterized Constructor:");

		s3.display();

	}

}
