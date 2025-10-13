# Bank Management System

## Overview
This is a **Bank Management System** developed in **Java**, designed to simulate basic banking operations for employees and customers. The system allows employees to manage accounts, handle transactions, and provide services like deposits, withdrawals, and loan management. It supports multiple account types: **Saving**, **Current**, **Salary**, and **Loan Accounts**.

---

## Features

### Main Menu (Employee)
1. **Over the Counter Activities**  
   - Existing User Management  
     - Deposit, Withdraw, Check Balance  
     - Overdraft Management for Current Accounts  
     - Loan Approval and Repayment for Loan Accounts  
   - New Account Opening  
   - Close Existing Account  

2. **Show All Transactions (Employee Only)**  
   - Displays a list of all transactions performed on any account.

3. **Display All Accounts Details**  
   - View all existing accounts with their details.

4. **Exit**  
   - Closes the application.

---

### Account Types
- **Saving Account** – Basic deposit and withdrawal operations with balance checking.  
- **Current Account** – Deposit, withdrawal, balance check, and overdraft management.  
- **Salary Account** – Deposit, withdrawal, and balance checking for salaried users.  
- **Loan Account** – Approve loan, withdraw loan amount, repay loan, check balance, and add monthly interest.

---

## Technologies Used
- **Programming Language:** Java  
- **Input/Output Handling:** Scanner class for user input  
- **Date Management:** `LocalDate` class for account creation and validity  
- **Collections:** `ArrayList` for storing accounts and transactions  

---

## How to Run
1. Clone the repository:  
   ```bash
   git clone <repository-url>
