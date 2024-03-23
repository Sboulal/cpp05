/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:22:49 by saboulal          #+#    #+#             */
/*   Updated: 2024/03/22 21:41:10 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try{
        Bureaucrat a("A", 150);
        a.decrementGrade();
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return(0);
}