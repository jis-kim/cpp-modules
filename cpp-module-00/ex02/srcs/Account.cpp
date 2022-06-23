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
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";amount:" << _amount
            << ";created\n";
}

Account::~Account(void) {
  _displayTimestamp();
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
  _nbDeposits++;
  _totalNbDeposits++;
  _displayTimestamp();
  std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit
            << ";deposit:" << deposit << ";amount:" << _amount
            << ";nb_deposits:" << _nbDeposits << '\n';
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
  int result = checkAmount() - withdrawal;
  bool ret = true;
  if (result < 0) {
    ret = false;
    std::cout << "refused\n";
  } else {
    _amount = result;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals << '\n';
  }
  return ret;
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

void Account::_displayTimestamp(void) {
  std::time_t t = std::time(NULL);
  if (t == -1) exit(1);
  char mbstr[20];
  if (!std::strftime(mbstr, sizeof(mbstr), "[%Y%m%d_%H%M%S] ",
                     std::localtime(&t)))
    exit(1);
  std::cout << mbstr;
}
