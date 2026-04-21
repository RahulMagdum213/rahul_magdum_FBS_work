
class PlacedStudent{
	int roll_no;
	String name;
	double distance_covered;
	String company_name;
	String role;
	
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
	void setComName(String str) {
		this.company_name=str;
	}
	
	void setRole(String str) {
		this.role=str;
	}
	
	String getComName() {
		return company_name;
	}
	
	String getRole() {
		return role;
	}
	void display() {
		System.out.println("Roll_no:"+getRollNo());
		System.out.println("Name:"+getName());
		System.out.println("Distance covered in km:"+getDisCov());
		System.out.println("Company Name:"+getComName());
		System.out.println("Role:"+getRole());
	}

}
public class PlacedDetail {

	public static void main(String[] args) {
		PlacedStudent p1;
		p1 = new PlacedStudent();
		
		p1.setRollNo(1);
		p1.setName("Rahul");
		p1.setDisCov(5);	
		p1.setComName("Amazon");
		p1.setRole("SDE");
		p1.display();
    }
}
