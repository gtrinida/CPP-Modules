#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    int               _gradeToExecute;
    int               _gradeToSign;
    bool		      _isSigned;

public:
    Form();
    Form(const std::string& name, const size_t gradeToSign, const size_t gradeToExecute);
    Form(const Form& src);
    virtual ~Form();

    Form& operator=(const Form& src);

    bool          getIsSigned() const;
    int           getGradeToSign() const;
    int           getGradeToExecute() const;
    std::string   getName() const;
    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException();
        virtual ~GradeTooHighException() throw();
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception{
    public:
        GradeTooLowException();
        virtual ~GradeTooLowException() throw();
        virtual const char* what() const throw();
    };

    class IsNotSigned : public std::exception{
    public:
        virtual const char* what() const throw();
    };

    bool    isAllowedToExecute(const Bureaucrat& src) const;
    void beSigned(const Bureaucrat& src);
    virtual void execute(Bureaucrat const& executor) const = 0;
   
};
    
std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif