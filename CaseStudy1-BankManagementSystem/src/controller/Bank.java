package controller;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Scanner;

import model.*;

public class Bank {
	
    static ArrayList<Account> accounts = new ArrayList<>();
    static {
        // ------------------------------
        // Hardcoded Accounts for Testing
        // ------------------------------

        // 1️⃣ Saving Accounts
        accounts.add(new SavingAccount(
                101, "Hariom Bijamwar", "IFSC123", "Main Branch", "Nagpur", 987654321, 
                5000, LocalDate.of(2025, 1, 1), LocalDate.of(2030, 1, 1), "Saving"
        ));
        accounts.add(new SavingAccount(
                102, "Shantisagar Chamle", "IFSC123", "Main Branch", "Pune", 912345678, 
                7000, LocalDate.of(2025, 2, 1), LocalDate.of(2030, 2, 1), "Saving"
        ));

        // 2️⃣ Current Accounts
        accounts.add(new CurrentAccount(
                103, "Vinod Kadwade", "IFSC123", "Main Branch", "Mumbai", 998877665, 
                10000, LocalDate.of(2025, 3, 1), LocalDate.of(2030, 3, 1), "Current"
        ));
        accounts.add(new CurrentAccount(
                104, "Anjali Sharma", "IFSC123", "Main Branch", "Nagpur", 987650123, 
                12000, LocalDate.of(2025, 4, 1), LocalDate.of(2030, 4, 1), "Current"
        ));

        // 3️⃣ Salary Accounts
        accounts.add(new SalaryAccount(
                105, "Rohit Patil", "IFSC123", "Main Branch", "Pune", 987651234, 
                15000, LocalDate.of(2025, 5, 1), null, "Salary", LocalDate.of(2025, 8, 1), false
        ));
        accounts.add(new SalaryAccount(
                106, "Sneha Kulkarni", "IFSC123", "Main Branch", "Mumbai", 998872345, 
                18000, LocalDate.of(2025, 6, 1), null, "Salary", LocalDate.of(2025, 8, 15), false
        ));

        // 4️⃣ Loan Accounts
        LoanAccount la1 = new LoanAccount(
                107, "Hariom Loan", "IFSC123", "Main Branch", "Nagpur", 987654320, 
                0, LocalDate.of(2025, 7, 1), null, "Loan"
        );
        la1.setLoanAmount(50000);
        la1.setWithdrawnAmount(20000);
        la1.setRepaidAmount(5000);
        accounts.add(la1);

        LoanAccount la2 = new LoanAccount(
                108, "Anjali Loan", "IFSC123", "Main Branch", "Pune", 912345670, 
                0, LocalDate.of(2025, 7, 15), null, "Loan"
        );
        la2.setLoanAmount(100000);
        la2.setWithdrawnAmount(40000);
        la2.setRepaidAmount(10000);
        accounts.add(la2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int mainChoice;

        do {
            // ===== MAIN MENU =====
            System.out.println("\n===== BANK EMPLOYEE MAIN MENU =====");
            System.out.println("1. Over the Counter Activities");
            System.out.println("2. Show All Transactions (Employee Only)");
            System.out.println("3. Display All Accounts Details");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            mainChoice = sc.nextInt();
            sc.nextLine(); // to avoid skipping input

            switch (mainChoice) {

                // ------------------------------
                // Option 1: Over the Counter
                // ------------------------------
                case 1:
                    int subChoice1;
                    do {
                        System.out.println("\n--- Over the Counter Activities ---");
                        System.out.println("1. Existing User");
                        System.out.println("2. New User Account Opening");
                        System.out.println("3. Close Existing Account");
                        System.out.println("4. Return to Main Menu");
                        System.out.print("Enter your choice: ");
                        subChoice1 = sc.nextInt();
                        sc.nextLine();

                        switch (subChoice1) {

                            // ========================
                            // Existing User
                            // ========================
                            case 1:
                                System.out.print("Enter Account Number: ");
                                int accNum = sc.nextInt();
                                sc.nextLine();

                                Account acc = null;

                                // Search account in list
                                for (Account a : accounts) {
                                    if (a.getAccountNumber() == accNum) {
                                        acc = a;
                                        break;
                                    }
                                }

                                if (acc == null) {
                                    System.out.println("Account not found.");
                                    break;
                                }

                                // Check type of account and show menu accordingly
                                if (acc instanceof SavingAccount) {
                                    int choice;
                                    do {
                                        System.out.println("\n--- Saving Account Menu ---");
                                        System.out.println("1. Deposit");
                                        System.out.println("2. Withdraw");
                                        System.out.println("3. Check Balance");
                                        System.out.println("4. Return");
                                        System.out.print("Enter your choice: ");
                                        choice = sc.nextInt();
                                        sc.nextLine();

                                        switch (choice) {
                                            case 1:
                                                System.out.print("Enter deposit amount: ");
                                                double dep = sc.nextDouble();
                                                if (acc.deposit(dep))
                                                    System.out.println("Deposit successful!");
                                                break;

                                            case 2:
                                                System.out.print("Enter withdraw amount: ");
                                                double w = sc.nextDouble();
                                                if (acc.withdraw(w))
                                                    System.out.println("Withdrawal successful!");
                                                else
                                                    System.out.println("Insufficient funds!");
                                                break;

                                            case 3:
                                                System.out.println("Current Balance: " + acc.checkBalance());
                                                break;

                                            case 4:
                                                break;

                                            default:
                                                System.out.println("Invalid choice!");
                                        }
                                    } while (choice != 4);

                                } else if (acc instanceof CurrentAccount) {
                                    CurrentAccount ca = (CurrentAccount) acc;
                                    int choice;
                                    do {
                                        System.out.println("\n--- Current Account Menu ---");
                                        System.out.println("1. Deposit");
                                        System.out.println("2. Withdraw");
                                        System.out.println("3. Check Balance");
                                        System.out.println("4. Grant Overdraft");
                                        System.out.println("5. Repay Overdraft");
                                        System.out.println("6. Return");
                                        System.out.print("Enter your choice: ");
                                        choice = sc.nextInt();
                                        sc.nextLine();

                                        switch (choice) {
                                            case 1:
                                                System.out.print("Enter deposit amount: ");
                                                double dep = sc.nextDouble();
                                                if (ca.deposit(dep))
                                                    System.out.println("Deposit successful!");
                                                break;

                                            case 2:
                                                System.out.print("Enter withdraw amount: ");
                                                double w = sc.nextDouble();
                                                if (ca.withdraw(w))
                                                    System.out.println("Withdrawal successful!");
                                                else
                                                    System.out.println("Insufficient funds or overdraft limit!");
                                                break;

                                            case 3:
                                                System.out.println("Current Balance: " + ca.checkBalance());
                                                break;

                                            case 4:
                                                System.out.print("Enter overdraft amount to grant: ");
                                                double od = sc.nextDouble();
                                                if (ca.grantOverdraft(od))
                                                    System.out.println("Overdraft granted!");
                                                else
                                                    System.out.println("Cannot grant overdraft!");
                                                break;

                                            case 5:
                                                System.out.print("Enter repayment amount for overdraft: ");
                                                double r = sc.nextDouble();
                                                if (ca.repayOverdraftedAmount(r))
                                                    System.out.println("Repayment successful!");
                                                break;

                                            case 6:
                                                break;

                                            default:
                                                System.out.println("Invalid choice!");
                                        }
                                    } while (choice != 6);

                                } else if (acc instanceof SalaryAccount) {
                                    SalaryAccount sa = (SalaryAccount) acc;
                                    int choice;
                                    do {
                                        System.out.println("\n--- Salary Account Menu ---");
                                        System.out.println("1. Deposit");
                                        System.out.println("2. Withdraw");
                                        System.out.println("3. Check Balance");
                                        System.out.println("4. Return");
                                        System.out.print("Enter your choice: ");
                                        choice = sc.nextInt();
                                        sc.nextLine();

                                        switch (choice) {
                                            case 1:
                                                System.out.print("Enter deposit amount: ");
                                                double dep = sc.nextDouble();
                                                sa.deposit(dep);
                                                System.out.println("Deposit done!");
                                                break;

                                            case 2:
                                                System.out.print("Enter withdraw amount: ");
                                                double w = sc.nextDouble();
                                                sa.withdraw(w);
                                                break;

                                            case 3:
                                                System.out.println("Current Balance: " + sa.checkBalance());
                                                break;

                                            case 4:
                                                break;

                                            default:
                                                System.out.println("Invalid choice!");
                                        }
                                    } while (choice != 4);

                                } else if (acc instanceof LoanAccount) {
                                    LoanAccount la = (LoanAccount) acc;
                                    int choice;
                                    do {
                                        System.out.println("\n--- Loan Account Menu ---");
                                        System.out.println("1. Approve Loan");
                                        System.out.println("2. Withdraw Loan Amount");
                                        System.out.println("3. Repay Loan");
                                        System.out.println("4. Check Balance (Outstanding)");
                                        System.out.println("5. Add Monthly Interest");
                                        System.out.println("6. Return");
                                        System.out.print("Enter your choice: ");
                                        choice = sc.nextInt();
                                        sc.nextLine();

                                        switch (choice) {
                                            case 1:
                                                la.approveLoan();
                                                break;

                                            case 2:
                                                System.out.print("Enter withdraw amount from loan: ");
                                                double w = sc.nextDouble();
                                                la.withdraw(w);
                                                break;

                                            case 3:
                                                la.repayLoan();
                                                break;

                                            case 4:
                                                System.out.println("Outstanding Balance: " + la.checkBalance());
                                                break;

                                            case 5:
                                                la.addMonthlyInterest();
                                                break;

                                            case 6:
                                                break;

                                            default:
                                                System.out.println("Invalid choice!");
                                        }
                                    } while (choice != 6);
                                }
                                break;

                            // ========================
                            // New Account Opening
                            // ========================
                            case 2:
                                System.out.print("Enter Account Number: ");
                                int newAccNum = sc.nextInt();
                                sc.nextLine();

                                System.out.print("Enter Account Holder Name: ");
                                String name = sc.nextLine();

                                System.out.print("Enter Address: ");
                                String addr = sc.nextLine();

                                System.out.print("Enter Mobile Number: ");
                                long mob = sc.nextLong();
                                sc.nextLine();

                                System.out.print("Enter Initial Balance: ");
                                double bal = sc.nextDouble();
                                sc.nextLine();

                                System.out.println("Select Account Type: 1. Saving 2. Current 3. Salary 4. Loan");
                                int type = sc.nextInt();
                                sc.nextLine();

                                switch (type) {
                                    case 1:
                                        accounts.add(new SavingAccount(newAccNum, name, "IFSC123", "Main Branch", addr, (int) mob, bal,
                                                LocalDate.now(), LocalDate.of(2030, 1, 1), "Saving"));
                                        System.out.println("Saving Account created successfully!");
                                        break;

                                    case 2:
                                        accounts.add(new CurrentAccount(newAccNum, name, "IFSC123", "Main Branch", addr, mob, bal,
                                                LocalDate.now(), LocalDate.of(2030, 1, 1), "Current"));
                                        System.out.println("Current Account created successfully!");
                                        break;

                                    case 3:
                                        accounts.add(new SalaryAccount(newAccNum, name, "IFSC123", "Main Branch", addr, mob, bal,
                                                LocalDate.now(), null, "Salary", LocalDate.now(), false));
                                        System.out.println("Salary Account created successfully!");
                                        break;

                                    case 4:
                                        LoanAccount la = new LoanAccount(newAccNum, name, "IFSC123", "Main Branch", addr, mob, 0,
                                                LocalDate.now(), null, "Loan");
                                        accounts.add(la);
                                        System.out.println("Loan Account created successfully!");
                                        break;

                                    default:
                                        System.out.println("Invalid type!");
                                        break;
                                }
                                break;

                            // ========================
                            // Close Account
                            // ========================
                            case 3:
                                System.out.print("Enter Account Number to close: ");
                                int closeNum = sc.nextInt();
                                sc.nextLine();
                                Account toRemove = null;

                                for (Account a : accounts) {
                                    if (a.getAccountNumber() == closeNum) {
                                        toRemove = a;
                                        break;
                                    }
                                }

                                if (toRemove != null) {
                                    accounts.remove(toRemove);
                                    System.out.println("Account closed successfully!");
                                } else {
                                    System.out.println("Account not found.");
                                }
                                break;

                            case 4:
                                break;

                            default:
                                System.out.println("Invalid choice!");
                        }

                    } while (subChoice1 != 4);
                    break;

                // ------------------------------
                // Option 2: Show all transactions
                // ------------------------------
                case 2:
                    System.out.println("\n--- ALL TRANSACTIONS ---");
                    for (Transaction t : Account.transactions) {
                        System.out.println(t);
                    }
                    break;

                // ------------------------------
                // Option 3: Display all accounts
                // ------------------------------
                case 3:
                    System.out.println("\n--- ALL ACCOUNTS ---");
                    for (Account a : accounts) {
                        System.out.println(a);
                    }
                    break;

                // ------------------------------
                // Exit
                // ------------------------------
                case 4:
                    System.out.println("Exiting Bank Management System. Goodbye!");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }

        } while (mainChoice != 4);

        sc.close();
    }



}

