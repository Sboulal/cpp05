/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 10:23:07 by saboulal          #+#    #+#             */
/*   Updated: 2024/03/22 18:13:18 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>
#include <exception>
#include <string>
class Bureaucrat
{
private:
    std::string const _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const & src);
    Bureaucrat & operator=(Bureaucrat const & src);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};
std::ostream &operator<<(std::ostream & o, Bureaucrat const & src);
