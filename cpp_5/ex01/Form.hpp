/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:25:33 by lide              #+#    #+#             */
/*   Updated: 2023/01/03 17:25:34 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _status;
		const int _sign;
		const int _execute;

	public:
		Form();
		Form(std::string &name, int sign, int execute);
		Form(Form const &src);
		~Form();

		Form &operator=(Form const &rhs);

		void	beSigned(Bureaucrat const &rhs);

		const std::string &getName() const;
		bool getStatus() const;
		int getSign() const;
		int getExecute() const;

		class GradeTooLowException : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o ,Form const &rhs);

#endif
