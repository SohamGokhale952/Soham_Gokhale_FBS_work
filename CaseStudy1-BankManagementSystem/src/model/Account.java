package model;
import java.time.LocalDate;
import java.util.ArrayList;

import controller.Transaction;
public abstract class Account {
	int accountNumber;
	String accHolderName;
	String ifscCode;
	String branchName;
	String adress;
	long mobileNumber;
	double balance;
	LocalDate accOpeningDate;
	LocalDate accClosingDate;
	String accType;
	// transaction 
		static public ArrayList<Transaction> transactions =new ArrayList<Transaction>();
		
	
//	public Account() {
//		super();
//		this.accountNumber = 0;
//		this.accHolderName = "not provided";
//		this.ifscCode = "not provided";
//		this.branchName = "not provided";
//		this.adress = "not provided";
//		this.mobileNumber = 0;
//		this.balance =100;
//		this.accOpeningDate = LocalDate.of(2003, 10, 10);
//		this.accClosingDate = LocalDate.of(2003, 11, 9);
//		this.accType="not given";
//	}
	public Account(int accountNumber, String accHolderName, String ifscCode, String branchName, String adress,
			long mobileNumber, double balance, LocalDate accOpeningDate, LocalDate accClosingDate,	String accType) {
		super();
		this.accountNumber = accountNumber;
		this.accHolderName = accHolderName;
		this.ifscCode = ifscCode;
		this.branchName = branchName;
		this.adress = adress;
		this.mobileNumber = mobileNumber;
		this.balance = balance;
		this.accOpeningDate = accOpeningDate;
		this.accClosingDate = accClosingDate;
		this.accType=accType;
	}
	public int getAccountNumber() {
		return accountNumber;
	}
	public void setAccountNumber(int accountNumber) {
		this.accountNumber = accountNumber;
	}
	public String getAccHolderName() {
		return accHolderName;
	}
	public void setAccHolderName(String accHolderName) {
		this.accHolderName = accHolderName;
	}
	public String getIfscCode() {
		return ifscCode;
	}
	public void setIfscCode(String ifscCode) {
		this.ifscCode = ifscCode;
	}
	public String getBranchName() {
		return branchName;
	}
	public void setBranchName(String branchName) {
		this.branchName = branchName;
	}
	public String getAdress() {
		return adress;
	}
	public void setAdress(String adress) {
		this.adress = adress;
	}
	public long getMobileNumber() {
		return mobileNumber;
	}
	public void setMobileNumber(long mobileNumber) {
		this.mobileNumber = mobileNumber;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	public LocalDate getAccOpeningDate() {
		return accOpeningDate;
	}
	public void setAccOpeningDate(LocalDate accOpeningDate) {
		this.accOpeningDate = accOpeningDate;
	}
	public LocalDate getAccClosingDate() {
		return accClosingDate;
	}
	public void setAccClosingDate(LocalDate accClosingDate) {
		this.accClosingDate = accClosingDate;
	}
	
	public String getAccType() {
		return accType;
	}
	public void setAccType(String accType) {
		this.accType = accType;
	}
	public abstract boolean  withdraw(double withdrawAmount);
	
	public abstract boolean deposit(double depositAmount);
	
	public abstract double checkBalance();
	@Override
	public String toString() {
		return "Account [accountNumber=" + accountNumber + ", accHolderName=" + accHolderName + ", ifscCode=" + ifscCode
				+ ", branchName=" + branchName + ", adress=" + adress + ", mobileNumber=" + mobileNumber + ", balance="
				+ balance + ", accOpeningDate=" + accOpeningDate + ", accClosingDate=" + accClosingDate + ", accType="
				+ accType + "]";
	}

	
	
}