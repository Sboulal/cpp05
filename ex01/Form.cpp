/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:00:01 by saboulal          #+#    #+#             */
/*   Updated: 2024/03/21 18:05:29 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int grade) : _name(name)
{
    if (grade < 1)
        throw Form::GradeTooHighException();
    else if (grade > 150)
        throw Form::GradeTooLowException();
    else
        _grade = grade;
    _signed = false;
}

Form::Form(Form const & src) : _name(src._name)
{
    *this = src;
}

Form::~Form()
{
}

Form & Form::operator=(Form const & src)
{
    _grade = src._grade;
    _signed = src._signed;
    return(*this);
}

std::string Form::getName() const
{
    return(_name);
}

int Form::getGrade() const
{
    return(_grade);
}

bool Form::getSigned() const
{
    return(_signed);
}

void Form::beSigned()
{
    _signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("Grade is too low");
}



