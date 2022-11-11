#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>

class Form;

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat
{
private:
    Bureaucrat();
    const std::string   _name;
    int                 _grade;
public:
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat& src);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat& src);
    Bureaucrat& operator++(void);
    Bureaucrat& operator--(void);

    int         getGrade() const;
    void        signForm(Form &form) const;
    std::string getName() const;

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
    void executeForm(Form const& form);
};
 std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif


