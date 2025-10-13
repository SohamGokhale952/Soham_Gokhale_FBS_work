	package model;
	
	import java.time.LocalDate;

import java.util.Scanner;

import controller.Transaction;


	
	public class SalaryAccount extends Account {
	
		LocalDate lastTransactionDate;
		boolean isFroze;
	
		// constructors
//		SalaryAccount() {
//			super();
//			this.lastTransactionDate = LocalDate.now();
//			this.isFroze = false;
//		}
	

		
		public SalaryAccount(int accountNumber, String accHolderName, String ifscCode, String branchName, String adress,
				long mobileNumber, double balance, LocalDate accOpeningDate, LocalDate accClosingDate, String accType,LocalDate lastTransactionDate, boolean isFroz) {
			super(accountNumber, accHolderName, ifscCode, branchName, adress, mobileNumber, balance, accOpeningDate, accClosingDate,
					accType);
			this.lastTransactionDate = lastTransactionDate;
			this.isFroze = isFroz;
			transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"opening",balance,balance));
		}
	
		LocalDate getLastTransactionDate() {
			return lastTransactionDate;
		}
	
	
		void setLastTransactionDate(LocalDate lastTransactionDate) {
			this.lastTransactionDate = lastTransactionDate;
		}
	
		boolean isFrozen() {
			return this.isFroze;
		}
	
		void setFrozen(boolean isFroze) {
			this.isFroze = isFroze;
		}
	
		// methods
	
		public void checkActivity() {
	
			if (lastTransactionDate.plusMonths(2).isBefore(LocalDate.now())) {
				this.isFroze = true;
				System.out.println("⚠ Account has been frozen due to inactivity.");
			} else {
				this.isFroze = false;
	
			}
	
		}
	
		public boolean withdraw(double withdrawAmount) {
			// TODO Auto-generated method stub
			checkActivity();
			if (this.isFroze == true) {
				System.out.println("account is frozen");
				return false;
			}
	
			if (withdrawAmount > getBalance()) {
	
				System.out.println("insuffecient balance");
				return false;
				
			} else {
				double finalAmt = getBalance() - withdrawAmount;
				setBalance(finalAmt);
				lastTransactionDate = LocalDate.now();
				System.out.println("Withdrawal successful!");
				transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"withdrawl",withdrawAmount,finalAmt));
				
	
			}
	
			return true;
		}
	
		public boolean deposit(double depositAmount) {
			// TODO Auto-generated method stub
			checkActivity();
			if (this.isFroze == true) {
				System.out.println("account is frozen");
				return false;
			}
			double finalAmt = getBalance() + depositAmount;
			setBalance(finalAmt);
			lastTransactionDate = LocalDate.now();
			transactions.add(new Transaction(transactions.size()+1,LocalDate.now(),"deposit",depositAmount,depositAmount));
			return true;
		}
	
		public double checkBalance() {
			checkActivity();
			if (this.isFroze == true) {
				System.out.println("account is frozen");
				return -1;
			}
			double bal = getBalance();
			return bal;
		}


		@Override
		public String toString() {
			return "SalaryAccount [lastTransactionDate=" + lastTransactionDate + ", isFroze=" + isFroze
					+ ", accountNumber=" + accountNumber + ", accHolderName=" + accHolderName + ", ifscCode=" + ifscCode
					+ ", branchName=" + branchName + ", adress=" + adress + ", mobileNumber=" + mobileNumber
					+ ", balance=" + balance + ", accOpeningDate=" + accOpeningDate + ", accClosingDate="
					+ accClosingDate + ", accType=" + accType + "]";
		}

	}
	
//	class TestSalary {
//		public static void main(String[] args) {
//			SalaryAccount sa = new SalaryAccount();
//			Scanner sc = new Scanner(System.in);
//			int choice;
//	
//			do {
//				System.out.println("\n===== Salary Account Menu =====");
//				System.out.println("1. Deposit");
//				System.out.println("2. Withdraw");
//				System.out.println("3. Check Balance");
//				System.out.println("4. Exit");
//				System.out.print("Enter your choice: ");
//				choice = sc.nextInt();
//	
//				switch (choice) {
//				case 1:
//					System.out.print("Enter the amount you want to deposit: ");
//					double amountToDeposit = sc.nextDouble();
//					if (sa.deposit(amountToDeposit)) {
//						System.out.println("Deposit successful!");
//					} else {
//						System.out.println("Deposit failed!");
//					}
//					break;
//	
//				case 2:
//					System.out.print("Enter the amount you want to withdraw: ");
//					double amountToWithdraw = sc.nextDouble();
//					if (!sa.withdraw(amountToWithdraw)) {
//	
//						System.out.println("Withdrawal failed!");
//					}
//					break;
//	
//				case 3:
//					System.out.println("Current Balance: " + sa.checkBalance());
//					break;
//	
//				case 4:
//					System.out.println("Exiting... Thank you!");
//					break;
//	
//				default:
//					System.out.println("Invalid choice. Try again!");
//				}
//			} while (choice != 4);
//	
//			sc.close();
//		}
//	}
