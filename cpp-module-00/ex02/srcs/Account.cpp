/**
 * @file Account.cpp
 * @author Jisu Kim (hellojs242@gmail.com)
 * @date 2022-06-22
 * @brief
 *
 */
#include "Account.hpp"

#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void PrintTime(void) { std::cout << "[timestamp] "; }

/**
 * @brief Construct a new Account:: Account object
 * @details [19920104_091532] index:1;amount:785;created
 * @param initial_deposit real initial deposit
 */
Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts),
      _amount(initial_deposit),
      _nbDeposits(0),
      _nbWithdrawals(0) {
  ++_nbAccounts;
  _totalAmount += initial_deposit;
  PrintTime();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount
            << ";created\n";
}

Account::~Account(void) {
  std::cout << "index:" << _accountIndex << ";amount:" << _amount
            << ";closed\n";
}

int Account::getNbAccounts(void) { return _nbAccounts; }

int Account::getTotalAmount(void) { return _totalAmount; }

int Account::getNbDeposits(void) { return _totalNbDeposits; }

int Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

/**
 * @brief
 * @details
 * [19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
 */
void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals << '\n';
}

/**
 * @brief
 * @details [19920104_091532]
 * index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
 * @param deposit
 */
void Account::makeDeposit(int deposit) {
  _amount = checkAmount() + deposit;
  _totalAmount += deposit;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit
            << ";deposit:" << deposit << ";amout:" << _amount
            << ";nb_deposit:" << _nbDeposits << '\n';
}

/**
 * @brief
 * @details
 * [19920104_091532]
 * index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
 *
 * @param withdrawal
 * @return true
 * @return false
 */
bool Account::makeWithdrawal(int withdrawal) {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
            << ";withdrawal:";
  int amount = checkAmount() - withdrawal;
  // total amount - withdrawal when result is true.
  bool result = true;
  if (amount < 0) {
    result = false;
    _amount = result;
  }
  if (result)
    std::cout << withdrawal << ";amout:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals << '\n';
  else
    std::cout << "refused\n";
  return result;
}

int Account::checkAmount(void) const { return (_amount); }

/**
 * @brief
 * @details
 * [19920104_091532] index:7;amount:16576;deposits:0;withdrawals:0
 *
 */
void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount
            << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
            << '\n';
}

void Account::_displayTimestamp(void) { std::cout << "[19920104_091532] "; }
