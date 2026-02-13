/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:57:53 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/12 12:11:00 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value( 0 )
{
    std::cout << "Default constructor called" << std::endl;
    
}

Fixed::Fixed( const Fixed& other )
{
    std::cout << "Copy constructor called" << std::endl;
    this->_value = other.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& other )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->_value = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return(this->_value);
}

void Fixed::setRawBits( int const raw)
{
    this->_value = raw;
}