/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaqrabaw <eaqrabaw@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:03:46 by eaqrabaw          #+#    #+#             */
/*   Updated: 2025/10/06 14:03:46 by eaqrabaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

    int	Account::getNbAccounts ( void )
    {
        return Account::_nbAccounts;
    }

    int	Account::getTotalAmount ( void )
    {
        return Account::_totalAmount;
    }
    int	Account::getNbDeposits ( void )
    {
        return Account::_totalNbDeposits;
    }
    int	Account::getNbWithdrawals ( void )
    {
        return Account::_totalNbWithdrawals;
    }
    void	Account::displayAccountsInfos ( void )
    {
        Account::_displayTimestamp();
        std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
    }

// 	Account( int initial_deposit );
// 	~Account( void );

// 	void	makeDeposit( int deposit );
// 	bool	makeWithdrawal( int withdrawal );
// 	int		checkAmount( void ) const;
// 	void	displayStatus( void ) const;

// 	static void	_displayTimestamp( void );

// 	int				_accountIndex;
// 	int				_amount;
// 	int				_nbDeposits;
// 	int				_nbWithdrawals;

// 	Account( void );


