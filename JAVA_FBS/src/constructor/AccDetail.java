class BankAccount{
	int acc_no;
	String holder_name;	
	double balance;
	double intrest_rate;
	
	BankAccount(){
	
	this.acc_no=1022;
	this.holder_name="Abhi";
	this.balance=700000;
	this.intrest_rate=10;
	}

	BankAccount(int n,String abc,double b,double i){
	
	this.acc_no=n;
	this.holder_name=abc;
	this.balance=b;
	this.intrest_rate=i;
	}

	void setAccNo(int n){
		this.acc_no=n;
	}
	
	void setName(String abc){
		this.holder_name=abc;
	}

	void setBalance(double b){
		this.balance=b;
	}

	void setIntrest(double i){
		this.intrest_rate=i;
	}

	int getAccNo(){
		return this.acc_no;
	}
	
	String getName(){
		return this.holder_name;
	}

	double getBalance(){
		return this.balance;
	}

	double getIntrest(){
		return this.intrest_rate;
	}
	
	void display(){
	System.out.println("Account Number: "+getAccNo());
	System.out.println("Acc_Holder name: "+getName());
	System.out.println("Balance: "+getBalance());
	System.out.println("Intrest rate: "+getIntrest()+"%");
	System.out.println();
	}

}

public class AccDetail{
	
	public static void main(String [] args){
		BankAccount b1,b2,b3;

		b1 = new BankAccount();
	
		b1.setAccNo(1001);
		b1.setName("Rahul Magdum");
		b1.setBalance(300000);
		b1.setIntrest(9);
					
		b1.display();
	
		b2= new BankAccount();
		b2.display();
		b3= new BankAccount(1234,"Harshal Bade",324720,12);
		b3.display();


	}


}