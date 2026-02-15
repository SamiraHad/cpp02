/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:58:27 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/15 10:01:35 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_value( 0 )
{
    //std::cout << "Default constructor called" << std::endl;
    
}

Fixed::Fixed( const int value1)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_value = value1 * (1<<_fractionalBits);
}

Fixed::Fixed( const float value2)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value2 * (1<<_fractionalBits));
}

Fixed::Fixed( const Fixed& other )
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=( const Fixed& other )
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->_value = other.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
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

bool Fixed::operator>( const Fixed& other) const
{
    return(this->_value > other._value);
}

bool Fixed::operator<( const Fixed& other) const
{
     return(this->_value < other._value);
}

bool Fixed::operator>=( const Fixed& other) const
{
    return(this->_value >= other._value);
}

bool Fixed::operator<=( const Fixed& other) const
{
    return(this->_value <= other._value);
}

bool Fixed::operator==( const Fixed& other) const
{
    return(this->_value == other._value);
}

bool Fixed::operator!=( const Fixed& other) const
{
    return(this->_value != other._value);
}

Fixed Fixed::operator+( const Fixed& other ) const
{
    Fixed result;
    result.setRawBits(this->_value + other._value);
    //result._value = this->_value + other._value;
    return result;
}

Fixed Fixed::operator-( const Fixed& other ) const
{
    Fixed result;
    result.setRawBits(this->_value - other._value);
    return result;
}

Fixed Fixed::operator*( const Fixed& other ) const
{
    Fixed result;
    result.setRawBits((this->_value * other._value) / (1<<_fractionalBits));
    return result;
}

Fixed Fixed::operator/( const Fixed& other ) const
{
    if(other._value == 0)
    {
        std::cerr << "Error: Cannot divide by 0" << std::endl;
        return 0;
    }
    
    Fixed result;
    result.setRawBits((this->_value *(1<<_fractionalBits)) / other._value);
    return result;
}

Fixed& Fixed::operator++()    //pre_increment
{
    this->_value++;
    return(*this);
}

Fixed Fixed::operator++(int)  //post_increment
{
    Fixed tmp(*this);
    this->_value++;
    return(tmp);
}

Fixed& Fixed::operator--()    //pre_decrement
{
    this->_value--;
    return(*this);
}

Fixed Fixed::operator--(int)  //post_decrement
{
    Fixed tmp(*this);
    this->_value--;
    return(tmp);
}

Fixed& Fixed::min(Fixed& nb1, Fixed& nb2)
{
    if(nb1 < nb2)
        return nb1;
    return nb2;    
}

const Fixed& Fixed::min(const Fixed& nb1, const Fixed& nb2)
{
    if(nb1 < nb2)
        return nb1;
    return  nb2;
}

Fixed& Fixed::max(Fixed& nb1, Fixed& nb2)
{
    if(nb1 > nb2)
        return(nb1);
    return(nb2);
}

const Fixed& Fixed::max(const Fixed& nb1, const Fixed& nb2)
{
    if(nb1 > nb2)
        return (nb1);
    return (nb2);
}
