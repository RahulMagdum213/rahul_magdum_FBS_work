	

class Employee {
	
	int id;
	String name;
	double salary;
	
	Employee(){

		this.id=1;
		this.name="Rahul";
		this.salary=20000;
	}

	Employee(int i,String n,double d){

		this.id=i;
		this.name=n;
		this.salary=d;
	}



	void setId(int i) {
		this.id=i;
	}
	void setName(String str) {
		this.name=str;
	}
	void setSal(double rs) {
		this.salary=rs;
	}
	
	int getId() {
		return this.id;
	}
	
	String getName() {
		return this.name;
	}
	double getSal() {
		return this.salary;
	}
	
	void display() {
		System.out.println("Id:"+getId()+"| Name:"+getName()+"| Salary:"+getSal()+"|");
	}


	
	
}
public class EmpDetail {
	public static void main(String[] args) {
		Employee emp1,emp2,emp3;
		
		
		emp1 = new Employee();
		emp2 = new Employee();
		emp3 = new Employee(201,"Sanket",30000);
		System.out.println("Hash Code emp1:"+emp1);
		System.out.println("Hash Code emp2:"+emp2);
		
		emp1.setId(101);
		emp1.setName("Harshal Bade");
		emp1.setSal(30000);
		
		//emp2.setId(102);
		//emp2.setName("Shubham Wagh");
		//emp2.setSal(40000);
		
		emp1.display();
		emp2.display();
		emp3.display();
	}

}
