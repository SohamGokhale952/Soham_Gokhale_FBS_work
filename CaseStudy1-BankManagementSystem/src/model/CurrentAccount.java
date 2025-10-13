package model;

import java.time.LocalDate;
import controller.*;


public class CurrentAccount extends Account {

    static double overdraftLimit;
    boolean isOverdrafted;
    double overdraftedAmount;

    static {
        overdraftLimit = 50000;
    }

    // constructors
//    public CurrentAccount() {
//        super();
//        isOverdrafted = false;
//        overdraftedAmount = 0;
//    }


   
    public CurrentAccount(int accountNumber, String accHolderName, String ifscCode, String branchName, String adress,
 			long mobileNumber, double balance, LocalDate accOpeningDate, LocalDate accClosingDate, String accType) {
 		super(accountNumber, accHolderName, ifscCode, branchName, adress, mobileNumber, balance, accOpeningDate, accClosingDate,
 				accType);
 		isOverdrafted = false;
 		overdraftedAmount = 0;
 		transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"opening",balance,balance));
 	}
   
	// setters and getters
    public static double getOverdraftLimit() {
        return overdraftLimit;
    }

 

	public static void setOverdraftLimit(double limit) {
        overdraftLimit = limit;
    }

    public boolean getIsOverdrafted() {
        return isOverdrafted;
    }

    public void setIsOverdrafted(boolean flag) {
        isOverdrafted = flag;
    }

    // functions

    @Override
    public boolean withdraw(double withdrawAmount) {
        if (withdrawAmount <= getBalance()) {
            double newBalance = getBalance() - withdrawAmount;
            setBalance(newBalance);
            transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"withdrawl",withdrawAmount,newBalance));
            return true;
        } else {
            double required = withdrawAmount - getBalance();

            if (isOverdrafted == false && required <= overdraftLimit) {
                overdraftedAmount = required;
                setBalance(0);
                isOverdrafted = true;
                //automatic overdrafted when not overdrafted previously
                
                transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"withdrawl",withdrawAmount,0));
                return true;
            } else if (isOverdrafted == true && (overdraftedAmount + required) <= overdraftLimit) {
                overdraftedAmount = overdraftedAmount + required;
                setBalance(0);
                //give money from already overdrafted amount if it is lesser than overdraft limiut
                transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"withdrawl",withdrawAmount,0));
                return true;
            }
        }
        return false;
    }

    //repay
    public boolean deposit(double depositAmount) {
        if (depositAmount <= 0) {
            return false;
        }
//this is to repay the overdrafted amt first and then update the balance if remmaining
        if (isOverdrafted == true) {
            if (depositAmount >= overdraftedAmount) {
                depositAmount = depositAmount - overdraftedAmount;
                overdraftedAmount = 0;
                isOverdrafted = false;
                double newBalance = getBalance() + depositAmount;
                setBalance(newBalance);
                transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"deposit",depositAmount,newBalance));

            } else {
                overdraftedAmount = overdraftedAmount - depositAmount;
//                depositAmount=0;
                transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"deposit",depositAmount,0));

            }
        } else {
            double newBalance = getBalance() + depositAmount;
            setBalance(newBalance);
            transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"deposit",depositAmount,newBalance));

        }
        return true;
    }

    @Override
    public double checkBalance() {
        if (isOverdrafted == true) {
            System.out.println("Overdraft active. Outstanding overdraft: " + overdraftedAmount);
        }
        return getBalance();
    }

    public boolean grantOverdraft(double amount) {
        if (isOverdrafted == false && amount <= overdraftLimit) {
            overdraftedAmount = amount;
            double newBalance = getBalance() + amount;
            setBalance(newBalance);
            isOverdrafted = true;
            return true;
        }
        return false;
    }

    public boolean repayOverdraftedAmount(double repayAmount) {
        if (isOverdrafted == false || repayAmount <= 0) {
            return false;
        }

        if (repayAmount >= overdraftedAmount) {
            repayAmount = repayAmount - overdraftedAmount;
            overdraftedAmount = 0;
            isOverdrafted = false;
            double newBalance = getBalance() + repayAmount;
            setBalance(newBalance);
        } else {
            overdraftedAmount = overdraftedAmount - repayAmount;
        }
        return true;
    }

	@Override
	public String toString() {
		return "CurrentAccount [isOverdrafted=" + isOverdrafted + ", overdraftedAmount=" + overdraftedAmount
				+ ", accountNumber=" + accountNumber + ", accHolderName=" + accHolderName + ", ifscCode=" + ifscCode
				+ ", branchName=" + branchName + ", adress=" + adress + ", mobileNumber=" + mobileNumber + ", balance="
				+ balance + ", accOpeningDate=" + accOpeningDate + ", accClosingDate=" + accClosingDate + ", accType="
				+ accType + "]";
	}
    
    
}
