/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:58:07 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/12 17:05:30 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value( 0 )
{
    std::cout << "Default constructor called" << std::endl;
    
}

Fixed::Fixed( const int value1)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = value1 * (1<<_fractionalBits);
}

Fixed::Fixed( const float value2)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value2 * (1<<_fractionalBits));
}

Fixed::Fixed( const Fixed& other )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
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
  //std::cout << "getRawBits member function called" << std::endl;
  return(this->_value);
}

void Fixed::setRawBits( int const raw)
{
    this->_value = raw;
}

float Fixed::toFloat(void) const
{
        return(float)this->_value / (1<<_fractionalBits);
}

 int Fixed::toInt(void) const
 {
    return( this->_value / (1<<_fractionalBits));
 }

std::ostream&   operator<<(std::ostream &o, Fixed const &other)
{
    o<<other.toFloat();
    return(o);
}




