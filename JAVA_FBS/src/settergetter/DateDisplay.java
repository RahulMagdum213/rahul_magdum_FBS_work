
class Date{
	
	int day,month,year;
	String dow;
	
	void setDay(int d) {
		this.day=d;
	}
	void setMonth(int m) {
		this.month=m;
	}
	void setYear(int y) {
		this.year=y;
	}
	
	void setDow(String str) {
		dow=str;		
	}
	int getDay() {
		return day;
	}
	int getMonth() {
		
		return month;
	}
	int getYear() {
		return year;
	}
	String getDow() {
		return dow;
	}
	void display() {
		System.out.println(getDow()+"-"+getDay()+"/"+getMonth()+"/"+getYear());
	}
	
}

public class DateDisplay {

	public static void main(String[] args) {
		
		Date d1,d2;
		
		d1=new Date();
		d2=new Date();
	
		d1.setDay(7);
		d1.setMonth(4);
		d1.setYear(2026);
		d1.setDow("Monday");
		
		d2.setDay(8);
		d2.setMonth(4);
		d2.setYear(2026);
		d2.setDow("Tuesday");
		
		d1.display();
		d2.display();

		
	}

}
