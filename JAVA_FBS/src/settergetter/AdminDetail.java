

class Admin {
	double allowance;
	int id;
	String name;
	double salary;
	
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
	
	void setAllowance(int a) {
		this.allowance=a;
	}
	
	double getAllowance() {
		return allowance;
	}
	
	void display() {
		System.out.println("Id:"+getId());
		System.out.println("Name:"+getName());
		System.out.println("Salary:"+getSal());
		System.out.println("Allowance:"+getAllowance());
		System.out.println("Total Income:"+ (getAllowance()+getSal()));
	}
}
public class AdminDetail {

	public static void main(String[] args) {
		Admin a1;
		a1=new Admin();
		
		a1.setId(102);
		a1.setName("Abhi");
		a1.setSal(50000);
		a1.setAllowance(5000);
		
		a1.display();

	}

}
