/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:00:18 by saboulal          #+#    #+#             */
/*   Updated: 2024/03/21 18:02:46 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <exception>

class Form
{
private:
    std::string const _name;
    int _grade;
    bool _signed;
public:
    Form();
    Form(std::string const name, int grade);
    Form(Form const & src);
    ~Form();
    Form & operator=(Form const & src);
    std::string getName() const;
    int getGrade() const;
    bool getSigned() const;
    void beSigned();
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