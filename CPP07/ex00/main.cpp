/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 20:46:56 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{

    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;

    // if (argc == 3)
    // {
    //     int a = atoi(argv[1]);
    //     int b = atoi(argv[2]);
    //     std::string c = "fa";
    //     std::string d = "fd";
    //     double e = 42.42;
    //     double f = 21.21;
    //     std::cout << "a = " << a << std::endl;
    //     std::cout << "b = " << b << std::endl;
    //     std::cout << "min(a, b) = " << min(a, b) << std::endl;
    //     std::cout << "max(a, b) = " << max(a, b) << std::endl;
    //     std::cout << "swap(a, b) = " << std::endl;
    //     swap(a, b);
    //     std::cout << "a = " << a << std::endl;
    //     std::cout << "b = " << b << std::endl;

    //     std::cout << "now with strings\n";

    //     std::cout << "c = " << c << std::endl;
    //     std::cout << "d = " << d << std::endl;
    //     std::cout << "min(c, d) = " << min(c, d) << std::endl;
    //     std::cout << "max(c, d) = " << max(c, d) << std::endl;
    //     std::cout << "swap(c, d) = " << std::endl;
    //     swap(c, d);
    //     std::cout << "c = " << c << std::endl;
    //     std::cout << "d = " << d << std::endl;

    //     std::cout << "now with doubles\n";

    //     std::cout << "e = " << e << std::endl;
    //     std::cout << "f = " << f << std::endl;
    //     std::cout << "min(e, f) = " << min(e, f) << std::endl;
    //     std::cout << "max(e, f) = " << max(e, f) << std::endl;
    //     std::cout << "swap(e, f) = " << std::endl;
    //     swap(e, f);
    //     std::cout << "e = " << e << std::endl;
    //     std::cout << "f = " << f << std::endl;
    // }
    // else
    //     std::cout << "Usage: ./a.out <int> <int>" << std::endl;
    // return (0);
}