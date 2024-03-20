/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:23:13 by saboulal          #+#    #+#             */
/*   Updated: 2024/03/20 11:23:07 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name)
{
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{
    _grade = src._grade;
    return(*this);
}

std::string Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

void Bureaucrat::incrementGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return(o);
}
