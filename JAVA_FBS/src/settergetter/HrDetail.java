



class Hr {
	
	int id;
	String name;
	double salary;
	double commission;
	
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
	
	void setCommission(int c) {
		this.commission=c;
	}
	
	double getCommission() {
		return commission;
	}
	
	void display() {
		System.out.println("Id:"+getId());
		System.out.println("Name:"+getName());
		System.out.println("Salary:"+getSal());
		System.out.println("Commission:"+getCommission());
		System.out.println("Total Income:"+ (getCommission()+getSal()));
	}
}
public class HrDetail {

	public static void main(String[] args) {
		Hr a1;
		a1=new Hr();
		
		a1.setId(102);
		a1.setName("Abhi");
		a1.setSal(50000);
		a1.setCommission(5000);
		
		a1.display();

	}

}
