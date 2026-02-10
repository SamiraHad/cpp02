/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:57:57 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/10 15:00:30 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _fractionalBits;
        
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(cont Fixed& other);
        ~Fixed(void);
        
        int getRawBits( void ) const;
        void setRawBits( int const raw);
        
};

#endif