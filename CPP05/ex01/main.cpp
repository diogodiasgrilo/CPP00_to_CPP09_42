/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 20:35:47 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/01 19:24:47 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat *bureaucrat = new Bureaucrat("Diogo", 10);
    Form *form = new Form("first", 1, 1);

    std::cout << std::endl<< *bureaucrat << std::endl;
    std::cout << *form << std::endl;

    bureaucrat->signForm(*form);
    std::cout << std::endl;
    std::cout << *form << std::endl;
    delete bureaucrat;
    delete form;
    return (0);
}