#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
    *this = src;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (grade > MIN_GRADE)
        throw GradeTooLowException();
    if (grade < MAX_GRADE)
        throw GradeTooHighException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src){
    this->_grade = src._grade;
    return *this;
}

std::string Bureaucrat::getName(void) const {
    return this->_name;
}

int Bureaucrat::getGrade(void) const {
    return this->_grade;
}

Bureaucrat& Bureaucrat::operator++(void) {
    if(_grade == MAX_GRADE){
        std::cout << "You can't increase the grade, it's already maxed out!!!" << std::endl;
        return *this;
    }
    --_grade;
    return *this;
}

Bureaucrat& Bureaucrat::operator--(void) {
    if(_grade == MIN_GRADE){
        std::cout << "You can't decrease the grade, it's already the lowest!!!" << std::endl;
        return *this;
    }
    ++_grade;
    return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}

Bureaucrat::GradeTooLowException::GradeTooLowException(){}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

const char* Bureaucrat::GradeTooHighException::what() const throw () {
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
   return os << "Name: " << obj.getName() << std::endl << "Grade: "  << obj.getGrade() << std::endl;
}

void Bureaucrat::signForm(Form& src) const {
    try
    {
        src.beSigned(*this);
        std::cout << this->_name << " signed " << src.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->_name << " couldn't sign form " << src.getName()
        << " because his grade is too low!" << std::endl;
    }
    
}