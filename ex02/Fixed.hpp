/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:58:31 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/13 17:29:31 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <cstdlib>


class Fixed
{
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();
    Fixed(const int value1);
    Fixed(const float value2);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed(void);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
    
    bool operator>( const Fixed& other ) const;
    bool operator<( const Fixed& other ) const;
    bool operator>=( const Fixed& other ) const;
    bool operator<=( const Fixed& other ) const;
    bool operator==( const Fixed& other ) const ;
    bool operator!=( const Fixed& other ) const;

    Fixed operator+( const Fixed& other ) const;
    Fixed operator-( const Fixed& other ) const;
    Fixed operator*( const Fixed& other ) const;
    Fixed operator/( const Fixed& other ) const;

    Fixed& operator++();    //pre_increment
    Fixed operator++(int);  //post_increment
    Fixed& operator--();    //pre_decrement
    Fixed operator--(int);  //post_decrement
    
    static Fixed& min(Fixed& nb1, Fixed& nb2);
    static const Fixed& min(const Fixed& nb1, const Fixed& nb2);
    static Fixed& max(Fixed& nb1, Fixed& nb2);
    static const Fixed& max(const Fixed& nb1, const Fixed& nb2);
    
};

std::ostream&   operator<<(std::ostream &o, Fixed const &other);

#endif