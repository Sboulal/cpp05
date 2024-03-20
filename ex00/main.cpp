/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:22:49 by saboulal          #+#    #+#             */
/*   Updated: 2024/03/20 10:39:33 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
 Bureaucrat a("A", 1);
    Bureaucrat b("B", 150);
    Bureaucrat c("C", 151);
    Bureaucrat d("D", 0);
    std::cout << a;
    std::cout << b;
    std::cout << c;
    std::cout << d;
    return(0);
}