/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:32:03 by saboulal          #+#    #+#             */
/*   Updated: 2024/03/23 17:59:35 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
    this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    this->_target = src._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

const char * PresidentialPardonForm::FileNotOpenException::what() const throw()
{
    return ("File not open");
}

PresidentialPardonForm::FileNotOpenException::FileNotOpenException()
{
}

PresidentialPardonForm::FileNotOpenException::~FileNotOpenException() throw()
{
}

PresidentialPardonForm::FileNotOpenException::FileNotOpenException(FileNotOpenException const & src)
{
    *this = src;
}

PresidentialPardonForm::FileNotOpenException & PresidentialPardonForm::FileNotOpenException::operator=(FileNotOpenException const & src)
{
    (void)src;
    return (*this);
}

const char * PresidentialPardonForm::FileNotOpenException::what() const throw()
{
    return ("File not open");
}

std::ostream &operator<<(std::ostream & o, PresidentialPardonForm const & src)
{
    o << src.getName() << " form with grade " << src.getGradeSign() << " to sign and grade " << src.getGradeExec() << " to execute";
    return (o);
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    (void)src;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::ostream &operator<<(std::ostream & o, PresidentialPardonForm const & src)
{
    o << src.getName() << " form with grade " << src.getGradeSign() << " to sign and grade " << src.getGradeExec() << " to execute";
    return (o);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
    this->_target = src._target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    this->_target = src._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Form::execute(executor);
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::ostream &operator<<(std::ostream & o, PresidentialPardonForm const & src)
{
    o << src.getName() << " form with grade " << src.getGradeSign() << " to sign and grade " << src.getGradeExec() << " to execute";
    return (o);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
    this->_target = src._target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{
    this->_target = src._target;
    return (*this);
}