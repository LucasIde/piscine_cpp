
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", "", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs) : AForm("ShrubberyCreationForm", rhs.getTarget, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &) {
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getExecute())
		throw (AForm::GradeTooLowException());
	if (this->getStatus() != 1)
		throw (AForm::GradeTooLowException());// changer pour une meilleur exception
	else
	{
		std::string name = this->getTarget();
		std::ofstream outfile(name.append("_shrubbery"), std::ofstream::out|std::ofstream::trunc);
		outfile << "........................................................................................................................" << std::endl;
		outfile << "........................................................................................................................" << std::endl;
		outfile << "........................................................................................................................" << std::endl;
		outfile << "........................................................................................................................" << std::endl;
		outfile << "........................................................................................................................" << std::endl;
		outfile << "........................................................................................................................" << std::endl;
		outfile << ".........................................................=...=.........................................................." << std::endl;
		outfile << "......................................................=.====.===.=.=...................................................." << std::endl;
		outfile << "....................................................========.==========................................................." << std::endl;
		outfile << "...............................................===========I================............................................." << std::endl;
		outfile << ".........................................=....========I===II=I=I=III=I======............................................" << std::endl;
		outfile << ".........................................=.=.======I==III=II=III=II==I======............................................" << std::endl;
		outfile << ".......................................=.==========II=IIIIII=I=IIII=I=====I=.===........................................" << std::endl;
		outfile << ".....................................=..========I===IIIIIIII=IIIIII=I=I==II======.==...................................." << std::endl;
		outfile << ".....................................============I=II=IIIIIIIAIIIAI=I====II========.==.................................." << std::endl;
		outfile << "....................................=====I=I===I=.=III=IIIIAAIIIIAI=I==IIII============................................." << std::endl;
		outfile << ".....................................=====II==III==IIAI=IIIAII=AIAIII=IIII===II=======.................................." << std::endl;
		outfile << "...................................==.======II=III==IAIIIIIAII=AAIII=II==I===II=I=====.==.=............................." << std::endl;
		outfile << "....................................========IIIIIII=IIAIIIAAIIIIAIII==I==I==IIIII==I===.===............................." << std::endl;
		outfile << ".............................=....=========IIIIIIIIIIIAIIAAAIIIIAIII=IAIII=IIIIIIII=========..==........................" << std::endl;
		outfile << "..............................===.======I===IIAAAIIIIAAAIAAAAIAIAIIIIIAIIIAIIAAI======.=======.==......................." << std::endl;
		outfile << "............................===I===========IIIIAAAIIIIAAAAAAAIAIAIAI=II=IAAIII===I==============........................" << std::endl;
		outfile << "..............................==I======III==IIIIIIAAI=AAIAAXAAAAIAAIIAAIAAIIIIII=I===IIII======....=...................." << std::endl;
		outfile << "............................=..=IAI===IIIIIIIIIIIAAAAAIAIXIXAAXAIAXAAIIAAAIIAII=IIIIIII=======..===....................." << std::endl;
		outfile << "...........................====..IAII=IIIII=IIIIAIAIAAAAAXAXAAXAIAAAIAAAAIIIAIIIIIIIIII=====.=.===......................" << std::endl;
		outfile << "..................=........=======IIIIIIIIIAIIIIIIIAAXAAAXAAXXXAIXAIAXIAAA=AIIA==I=II=====I=====........................" << std::endl;
		outfile << "..................==......=========IIAIIIAIIIIAAAIIIAAAAAXAXXXXAAXAAAAAAAIAIIII==III=======.=========..................." << std::endl;
		outfile << "...................=I==..=====I======IIIIIAAIAIIIAAAAAXXAXXXXAXAAXAXXIAAIAIIIIIIAII==.==IIII==III===...................." << std::endl;
		outfile << "....................=II===I====IIIIIIIAAAAIAAAAAIIIAXXXXXXXXXXXAAAAAAAXAAAAAAAAIIIIIAAAAIIIIII====......................" << std::endl;
		outfile << "....................==IIIIIIIIIIIIAAAAAAXAAAAIIIAIIIAXXXMXXXMXAAXXIAXAAXAAAAIII=IIII======IIII=I=====..................." << std::endl;
		outfile << "................==..====IIIIAAAIIIIAIAAAAAXAAXAIIIAAAIXAAMXMMMXXAAXXXXXXAIIIIIIAIIIIIIIIIIIIIII========................." << std::endl;
		outfile << "...............=====I====IIAAAAAIII=====IIAXXAXXAAIAAAAXIAMMXMXAAAXMMXAIIAAAI=====IIIIIIIAII========...................." << std::endl;
		outfile << "...................=====IIIIIIAAAAAAAIIIIIIAAAIAAXMMXXXXXXMMXMMXXMMXAIAAAAAIII====IIAAAAIIII====.=.........=............" << std::endl;
		outfile << "...................========IIIIIAXXAAAIIAIIIIIAAAIAXAAAXAXXMMMXXMMMAAIAAAAAAIAIIIIAAAIAIII==========..=====............." << std::endl;
		outfile << "................=======II=========IAAAAXXXXAAAAAXXAAXAAIXMMMMXXMMMAIAAAAIAAXXAAAAAII==II=========..======..............." << std::endl;
		outfile << "..........========.======IIIIIIIIIIIAAAXXXXXXXXAAXXXXXXXAXMMMMMMXXAAAXAAAAAXAAAAAIIIIIIIIIIIIIIIIIII===................." << std::endl;
		outfile << "............===IIIAIIIIIIIIAIAAAAXXXXXXXXXXXXXAXXAXAXXMXXMMMMMMXMXXXXAAAAAAAIIAIIAAAAAAIAAIIIIIII=====.................." << std::endl;
		outfile << "................=======IIIIIIIAAAAAAAAAXAXAAAAXMMMXXAAMXIAMMMMMMMXMXXXXXXXXXXXAAAIIIIIIIIIIIIAII========................" << std::endl;
		outfile << ".................====II==I=IIIIIIIIAIAAXAAAAXXXXXXXMXXXMMAMMMMXIAXXAAXXXXXXXXXXAAAAAAAAAIAAIIIIII=====.................." << std::endl;
		outfile << "...............====================IIIAAAXAXXXXXAXXMMMMMXMMWMMMMXXXXXAAAAAAIAAXXXAAAAAII================................" << std::endl;
		outfile << ".....................==...======IIIAAAXXXAAAAXAXIAAIAXMMAAMWWMXAXAAXXXAXAAXXAXAXXXAIIIIIII====I=======.=................" << std::endl;
		outfile << "..................=====IIIIIIAAAAAAAAAAAI=IAIAAA=IIAXXAXMXMMMXIAAAAXXXXXAXAIAAAAAAAAAAAAIIIII==========................." << std::endl;
		outfile << ".................=====IIIIIIAAAIIIII=I=IIIIAXAAIAAIAXXXAIMMMMXIAIAAXXXAAXXXXXAIIIAAAIAAIAIIIII=====I====................" << std::endl;
		outfile << ".................=======III=I======IIIIIIIAXAAAAIIAAIIIAAAMMMAAAAAIIIAXXXMXXXXAIII==IIIII==IIIII=======................." << std::endl;
		outfile << "................=================II==IIIAAAAAAAIIAI===IIIMMMMXAIIAIIIIIAAXXXXXXXAAII==IIII========.====................." << std::endl;
		outfile << "..................====..=============IIAAAAAIIIIIII===IIIXMMMAIIAIIAIII=IAAAAAXXAAIIAII==============..................." << std::endl;
		outfile << "........................============IAAAIAII===I======I==AMMMAIII=IAI====IIIAAAAAAAAIIIIIII===========.................." << std::endl;
		outfile << "......................======..======III===II============IIMMMIIIIIII=====I===IAAAAIAAI=I========........................" << std::endl;
		outfile << "===================.....==....==============I=============MMMI=================IIAAIIIIIIII========....................." << std::endl;
		outfile << "==========================.....================..=========MMMI===================IIIIII====I==.==......................." << std::endl;
		outfile << "==============================================....========MMMI=.......=================I===I====........................" << std::endl;
		outfile << "================================================..=.======MMMA==......==.=.......===..===.===.==........................" << std::endl;
		outfile << "==========================================================MMMA=================.=========..==.......=========..........." << std::endl;
		outfile << "==========================================================MMMX==========================================================" << std::endl;
		outfile << "=========================================================IMMMX==========================================================" << std::endl;
		outfile << "========II==IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIAAAIIAIIXMMMMAIIIIAAAIIIIIIIIIIIIIII=IIIII=IIIIIIIIIIII================" << std::endl;
		outfile << "XXXXXXXXXXXXXXXXXXXXXXXXXXMXXXXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
		outfile << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXMMM" << std::endl;
		outfile << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		outfile << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWMMWMMMMMWWWWMMWWWWWWWWWWWWMWMWMMWMMWMMMMWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << std::endl;
		outfile.close();
	}
}
