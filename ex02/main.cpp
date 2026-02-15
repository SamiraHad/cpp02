/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 17:58:35 by hsamira           #+#    #+#             */
/*   Updated: 2026/02/15 08:54:30 by hsamira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}


/*#include "Fixed.hpp"

int main(void)
{
    std::cout << "========== COMPARISON OPERATORS ==========\n" << std::endl;

    Fixed a(10);
    Fixed b(200);

    std::cout << "a: " << a << "  et  b: " << b << std::endl;
    std::cout << "a > b  : " << (a > b) << std::endl;
    std::cout << "a < b  : " << (a < b) << std::endl;
    std::cout << "a >= b : " << (a >= b) << std::endl;
    std::cout << "a <= b : " << (a <= b) << std::endl;
    std::cout << "a == b : " << (a == b) << std::endl;
    std::cout << "a != b : " << (a != b) << std::endl;

    

    std::cout << "\n==========  ARITHMETIC OPERATORS ==========\n" << std::endl;

    Fixed c(5);
    Fixed d(2);

    std::cout << "c: " << c << "  et  d: " << d << std::endl;
    std::cout << "c + d = " << c + d << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "c * d = " << c * d << std::endl;
    std::cout << "c / d = " << c / d << std::endl;

    
    

    std::cout << "\n==========  INCREMENT / DECREMENT ==========\n" << std::endl;

    Fixed e;

    std::cout << "Initial e: " << e << std::endl;
    std::cout << "++e: " << ++e << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "e++: " << e++ << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "--e: " << --e << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "e--: " << e-- << std::endl;
    std::cout << "e: " << e << std::endl;

    

    std::cout << "\n==========  MIN / MAX ==========\n" << std::endl;

    Fixed f(42.42f);
    Fixed g(21.21f);

    std::cout << "f: " << f << "  et  g: " << g << std::endl;
    std::cout << "min(f, g): " << Fixed::min(f, g) << std::endl;
    std::cout << "max(f, g): " << Fixed::max(f, g) << std::endl;

    

    std::cout << "\n========= CONST MIN / CONST MAX =========\n" << std::endl;

    const Fixed h(100);
    const Fixed i(200);
    
    std::cout << "h: " << h << "  et  i: " << i << std::endl;
    std::cout << "min(h, i): " << Fixed::min(h, i) << std::endl;
    std::cout << "max(h, i): " << Fixed::max(h, i) << std::endl;

    return 0;
}*/
