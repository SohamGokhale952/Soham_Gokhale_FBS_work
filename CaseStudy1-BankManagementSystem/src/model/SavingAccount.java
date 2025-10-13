package model;
import java.time.LocalDate;

import java.time.temporal.ChronoUnit;
import controller.*;

public class SavingAccount extends Account
{
	 static double minBalance;
	 static double iRate;
	 static
	 {
		minBalance=1000;
		iRate=5;
	 }
	
	
//	
//	public SavingAccount() {
//		super();
//	
//	}
	public SavingAccount(int accountNumber, String accHolderName, String ifscCode, String branchName, String adress,
			int mobileNumber, double balance, LocalDate accOpeningDate,LocalDate accClosingDate, String accType) {
		super(accountNumber,  accHolderName,  ifscCode, branchName,  adress,
				 mobileNumber,  balance,  accOpeningDate,  accClosingDate,accType);
		transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"opening",balance,balance));
		
	}
	//	public static double getMinBalance() {
//		return minBalance;
//	}
	public static void setMinBalance(double minBalance) {
		SavingAccount.minBalance = minBalance;
	}
//	public static double getiRate() {
//		return iRate;
//	}
	public static void setiRate(double iRate) {
		SavingAccount.iRate = iRate;
	}
	
	
	
	//also check closing date before adding money or debiting money
	
	public  boolean deposit(double depositAmount)
	{
		if(depositAmount>0)
		{
		double totalAmount=depositAmount+this.getBalance();
		this.setBalance(totalAmount);
		transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"deposit",depositAmount,totalAmount));
		return true;
		
		}

			return false;
		
	}
	public boolean withdraw(double withdrawAmount)
	{
		if(this.getBalance()-withdrawAmount>minBalance)
		{
			double totalAmount=this.getBalance()-withdrawAmount;
			this.setBalance(totalAmount);
			transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"withdraw",withdrawAmount,totalAmount));
			return true;
		}
		return false;
	}
	public double checkBalance()
	{
		if (this.getAccOpeningDate().isBefore(LocalDate.now()))
		{
		long daysBetween = ChronoUnit.DAYS.between(this.getAccOpeningDate(),LocalDate.now());
		double interestAmount = this.getBalance() * iRate / 100 * daysBetween / 365;
		return (this.getBalance()+interestAmount);
		}
		
		return this.getBalance();
	}
	@Override
	public String toString() {
		return "SavingAccount [accountNumber=" + accountNumber + ", accHolderName=" + accHolderName + ", ifscCode="
				+ ifscCode + ", branchName=" + branchName + ", adress=" + adress + ", mobileNumber=" + mobileNumber
				+ ", balance=" + balance + ", accOpeningDate=" + accOpeningDate + ", accClosingDate=" + accClosingDate
				+ ", accType=" + accType + "]";
	}
}

//class TestSavingAccount
//{
//		public static void main(String [] args)
//		{
//			SavingAccount account = new SavingAccount(101, "Hariom Bijamwar", "IFSC12345", "Main Branch", "Nagpur, India", 987654321, 1500, LocalDate.of(2025, 9, 30),  "Saving");
//			
//			
//			account.deposit(500);
//	        account.withdraw(200);
//	        double totalBalance = account.checkBalance();
//
//	        System.out.println("Account Holder: " + account.getAccHolderName());
//	        System.out.println("Current Balance (with interest): " + totalBalance);
//	        
//	        
//	        
//	        //throwing error for default adjust month day year to valid values
////	        SavingAccount account1 = new SavingAccount();
////	        account.deposit(500);
////	        account.withdraw(200);
////	        double totalBalance1 = account.checkBalance();
////
////	        System.out.println("Account Holder: " + account1.getAccHolderName());
////	        System.out.println("Current Balance (with interest): " + totalBalance1);
////	        
//
//		}
//	
//}