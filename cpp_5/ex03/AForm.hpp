/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:25:33 by lide              #+#    #+#             */
/*   Updated: 2023/01/03 17:25:34 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		const std::string _target;
		bool _status;
		const int _sign;
		const int _execute;

	public:
		AForm();
		AForm(const std::string &name, const std::string &target, int sign, int execute);
		AForm(AForm const &src);
		virtual ~AForm();

		AForm &operator=(AForm const &rhs);

		void	beSigned(Bureaucrat const &rhs);
		virtual void execute(Bureaucrat const &executor) const = 0;

		const std::string &getName() const;
		const std::string &getTarget() const;
		bool getStatus() const;
		int getSign() const;
		int getExecute() const;

		class SignGradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};

		class ExecGradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};

		class FormUnsigned : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o ,AForm const &rhs);

#endif
