#include "Form.hpp"

#define FORM_MIN_GRADE 150
#define FORM_MAX_GRADE 1

Form::Form() :
_name("Name"),
_gradeToExecute(1),
_gradeToSign(1), 
_isSigned(false){}

Form::Form(const std::string& name, const size_t gradeToSign, const size_t gradeToExecute) : 
_name(name),
_gradeToExecute(gradeToExecute),
_gradeToSign(gradeToSign), 
_isSigned(false)
{
    if (gradeToSign > FORM_MIN_GRADE)
        throw GradeTooLowException();
    if (gradeToSign < FORM_MAX_GRADE)
        throw GradeTooHighException();
}

Form::Form(const Form& src) :
_name(src._name),
_gradeToExecute(src._gradeToExecute),
_gradeToSign(src._gradeToSign),
_isSigned(false) {
    *this = src;
}

Form::~Form(){}

Form& Form::operator=(const Form& src){
    (void)src;
    return *this;
}

bool	Form::getIsSigned() const{
	return this->_isSigned;
}

std::string Form::getName(void) const {
    return this->_name;
}

int Form::getGradeToSign() const{
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const{
	return this->_gradeToExecute;
}

Form::GradeTooHighException::GradeTooHighException(){}

Form::GradeTooHighException::~GradeTooHighException() throw(){}

Form::GradeTooLowException::GradeTooLowException(){}

Form::GradeTooLowException::~GradeTooLowException() throw(){}

void Form::beSigned(const Bureaucrat& src){
    if(src.getGrade() <= this->_gradeToSign)
        this->_isSigned = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw () {
    return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw () {
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
   return os << "Form: " << obj.getName() 
             << "\nSigned: " << (obj.getIsSigned() ? "signed" : "not signed") 
             << "\nGrade to sign: " << obj.getGradeToSign()
             << "\nGrade to execute: " << obj.getGradeToExecute() << std::endl;
}