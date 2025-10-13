package model;

import java.time.LocalDate;

import java.util.Scanner;

import controller.Transaction;

public class LoanAccount extends Account {

	public static double irRate;
	double loanAmount; // sanctioned loan
	double withdrawnAmount; // how much taken
	double repaidAmount; // how much paid back
	int cibilScore; // cibil score
	Scanner sc = new Scanner(System.in);

	static {
		irRate = 0.08; // 8% interest rate
	}

	// constructors
//    public LoanAccount() {
//        super();
//        loanAmount = 0;
//        withdrawnAmount = 0;
//        repaidAmount = 0;
//        cibilScore = 0;
//    }

	public LoanAccount(int accountNumber, String accHolderName, String ifscCode, String branchName, String adress,
			long mobileNumber, double balance, LocalDate accOpeningDate, LocalDate accClosingDate, String accType) {
		super(accountNumber, accHolderName, ifscCode, branchName, adress, mobileNumber, balance, accOpeningDate,
				accClosingDate, accType);
		this.loanAmount = 0;
		this.withdrawnAmount = 0;
		this.repaidAmount = 0;
		this.cibilScore = 0;
		transactions.add(new Transaction(transactions.size() + 1, LocalDate.now(), "openning", balance, balance));

	}
	// getters and setters

	public static double getIrRate() {
		return irRate;
	}

	public static void setIrRate(double irRate) {
		LoanAccount.irRate = irRate;
	}

	public double getLoanAmount() {
		return loanAmount;
	}

	public void setLoanAmount(double loanAmount) {
		this.loanAmount = loanAmount;
	}

	public double getWithdrawnAmount() {
		return withdrawnAmount;
	}

	public void setWithdrawnAmount(double withdrawnAmount) {
		this.withdrawnAmount = withdrawnAmount;
	}

	public double getRepaidAmount() {
		return repaidAmount;
	}

	public void setRepaidAmount(double repaidAmount) {
		this.repaidAmount = repaidAmount;
	}

	public int getCibilScore() {
		return cibilScore;
	}

	public void setCibilScore(int cibilScore) {
		this.cibilScore = cibilScore;
	}

	// approve loan
	public double approveLoan() {
		System.out.print("Enter your CIBIL score (1-10): ");
		cibilScore = sc.nextInt();

		double maxLoanAmount = 0;
		if (cibilScore >= 7 && cibilScore <= 10) {
			maxLoanAmount = 100000; // 1lakh
		} else if (cibilScore >= 4 && cibilScore <= 6) {
			maxLoanAmount = 50000;
		} else {
			System.out.println("Low cibil score, not eligible for loan.");
			return 0;
		}

		System.out.println("You can get loan up to: " + maxLoanAmount);
		System.out.print("Enter loan amount you want: ");
		double requestedLoan = sc.nextDouble();

		if (requestedLoan > maxLoanAmount) {
			System.out.println("Requested amount is more than eligible.");
		} else {
			loanAmount = requestedLoan;
			withdrawnAmount = 0;
			repaidAmount = 0;
			// here only loan is approved
			setBalance(0);
			transactions.add(new Transaction(transactions.size() + 1, LocalDate.now(), "loanApproval", loanAmount, 0));

//            System.out.println("Loan of " + loanAmount + " sanctioned.");
		}
		return loanAmount;
	}

	// withdraw from loan
	public boolean withdraw(double withdrawAmount) {
		if (withdrawAmount <= 0) {
			System.out.println("Invalid withdrawal amount.");
			return false;
		}
		if (loanAmount <= 0) {
			System.out.println("No loan sanctioned yet.");
			return false;
		}
		if (withdrawnAmount + withdrawAmount > loanAmount) {
			System.out.println("Exceeds sanctioned loan limit.");
			System.out.println("You can withdraw only: " + (loanAmount - withdrawnAmount));
			return false;
		}

		withdrawnAmount = withdrawnAmount + withdrawAmount;
		double outstanding = withdrawnAmount - repaidAmount;
		setBalance(-outstanding);
		transactions.add(
				new Transaction(transactions.size() + 1, LocalDate.now(), "withdrawl", withdrawAmount, getBalance()));

		System.out.println("Withdrawal successful. Withdrawn = " + withdrawAmount);
		System.out.println("Total withdrawn = " + withdrawnAmount + " and Outstanding = " + outstanding);
		return true;
	}

	// repay loan manually
	public void repayLoan() {
		double outstanding = checkOutstandingBalance();
		if (outstanding <= 0) {
			System.out.println("No loan to repay.");
			return;
		}
		System.out.print("Enter repay amount: ");
		double repayAmt = sc.nextDouble();

		if (repayAmt <= 0 || repayAmt > outstanding) {
			System.out.println("Invalid repayment. Enter between 1 and " + outstanding);
			return;
		}
		deposit(repayAmt);
	}

	public boolean deposit(double depositAmount) {
		if (depositAmount <= 0) {
			System.out.println("Invalid deposit amount.");
			return false;
		}

		repaidAmount = repaidAmount + depositAmount;
		// we are paying extra money than withdrawn amt when we are repaying more than
		// withdrwn amt (loan amt)
//        then outstanding balance becomes negative that why inside if we are substracting it because its extra balance
		double outstanding = withdrawnAmount - repaidAmount;

		if (outstanding <= 0) {
			setBalance(0);
			double overpay = -outstanding;
			if (overpay > 0) {
				System.out.println("Loan repaid. Extra paid = " + overpay);
			} else {
				System.out.println("Loan fully repaid.");
			}
			transactions
					.add(new Transaction(transactions.size() + 1, LocalDate.now(), "deposite", overpay, getBalance()));

		} else {
			setBalance(-outstanding);
			System.out.println("Repayment done: " + depositAmount);
			System.out.println("Remaining outstanding: " + outstanding);
		}
		return true;
	}

	// check balance (negative means outstanding)
	@Override
	public double checkBalance() {
		return getBalance();
	}

	// check outstanding
	public double checkOutstandingBalance() {
		return -getBalance();
	}

	// add monthly interest
	public void addMonthlyInterest() {
		double outstanding = checkOutstandingBalance();
		if (outstanding > 0) {
			double monthlyRate = irRate / 12;
			double interest = outstanding * monthlyRate;

			withdrawnAmount = withdrawnAmount + interest;
			double newOutstanding = withdrawnAmount - repaidAmount;
			setBalance(-newOutstanding);

			System.out.println("Interest added = " + interest);
			System.out.println("New outstanding = " + newOutstanding);
		} else {
			System.out.println("No outstanding, no interest applied.");
		}
	}

	// show details
//    public void showAccountDetails() {
//        System.out.println("----- Loan Account Details -----");
//        System.out.println("Account Number: " + getAccountNumber());
//        System.out.println("Account Holder: " + getAccHolderName());
//        System.out.println("Sanctioned Loan: " + loanAmount);
//        System.out.println("Total Withdrawn (incl. interest): " + withdrawnAmount);
//        System.out.println("Total Repaid: " + repaidAmount);
//        System.out.println("Outstanding: " + checkOutstandingBalance());
//        System.out.println("CIBIL Score: " + cibilScore);
//        System.out.println("--------------------------------");
//    }
	@Override
	public String toString() {
		return "LoanAccount [loanAmount=" + loanAmount + ", withdrawnAmount=" + withdrawnAmount + ", repaidAmount="
				+ repaidAmount + ", cibilScore=" + cibilScore + ", accountNumber=" + accountNumber + ", accHolderName="
				+ accHolderName + ", ifscCode=" + ifscCode + ", branchName=" + branchName + ", adress=" + adress
				+ ", mobileNumber=" + mobileNumber + ", balance=" + balance + ", accOpeningDate=" + accOpeningDate
				+ ", accClosingDate=" + accClosingDate + ", accType=" + accType + "]";
	}
}
