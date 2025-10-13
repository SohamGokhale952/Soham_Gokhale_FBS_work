package controller;

import java.time.LocalDate;

public class Transaction {
		
	int transactionId;
	LocalDate transactionDate;
	String transactionType;
	double transactionAmt;
	double balance;
	
	//constructor
	public Transaction(int transactionId, LocalDate transactionDate, String transactionType, double transactionAmt,
			double balance) {
	
		this.transactionId = transactionId;
		this.transactionDate = transactionDate;
		this.transactionType = transactionType;
		this.transactionAmt = transactionAmt;
		this.balance = balance;
	}
	
	//setters and getters
	public int getTransactionId() {
		return transactionId;
	}
	public void setTransactionId(int transactionId) {
		this.transactionId = transactionId;
	}
	public LocalDate getTransactionDate() {
		return transactionDate;
	}
	public void setTransactionDate(LocalDate transactionDate) {
		this.transactionDate = transactionDate;
	}
	public String getTransactionType() {
		return transactionType;
	}
	public void setTransactionType(String transactionType) {
		this.transactionType = transactionType;
	}
	public double getTransactionAmt() {
		return transactionAmt;
	}
	public void setTransactionAmt(double transactionAmt) {
		this.transactionAmt = transactionAmt;
	}
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
	
	// toString
	public String toString() {
		return "Transaction [transactionId=" + transactionId + ", transactionDate=" + transactionDate
				+ ", transactionType=" + transactionType + ", transactionAmt=" + transactionAmt + ", balance=" + balance
				+ "]";
	}
	
	
	
	
	
}
