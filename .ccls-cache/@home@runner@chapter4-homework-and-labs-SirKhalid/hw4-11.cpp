// Introductory11.cpp - displays ending balance
// Created/revised by <Khalid Sirelkhtim> on <7/7/24>

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double beginningBalance = 0.0;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double endingBalance = 0.0;

    // Prompt user for input
    cout << "Enter the beginning balance: ";
    cin >> beginningBalance;

    cout << "Enter the total deposits: ";
    cin >> totalDeposits;

    cout << "Enter the total withdrawals: ";
    cin >> totalWithdrawals;

    // Calculate the ending balance
    endingBalance = beginningBalance + totalDeposits - totalWithdrawals;

    // Display the ending balance
    cout << "Ending Balance: $" << endingBalance << endl;

    return 0;
} // end of main function