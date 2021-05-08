#include "ShrubberyCreationForm.hpp"

#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : \
        Form(name, 145, 137) {
    this->_target = target;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : \
        Form(src.getName(), 145, 137) {
    this->_target = src.getTarget();
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
    if (this != &src)
        this->_target = src.getTarget();
    return (*this);
};

void ShrubberyCreationForm::_beExecuted(Bureaucrat const & executor) const {
    Bureaucrat const *tmp = &executor;
    if (tmp == NULL)
        return ;
    if (executor.getGrade() > this->getExecuteGrade())
        return ;
    std::string ofs_name;

    ofs_name = this->_target;
    ofs_name += "_shrubbery";
    
    std::ofstream ofs;
    
    try {
        ofs.open(ofs_name, std::ofstream::trunc);
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    ofs << "............................. ---..........................." << std::endl;
    ofs << ".............................=##%- ........................." << std::endl;
    ofs << "............................-%#%*..........................." << std::endl;
    ofs << ".......................... =#####%:-........................" << std::endl;
    ofs << "........................ -@####%@@+:........................" << std::endl;
    ofs << "........................:##@%*@#####@:......................" << std::endl;
    ofs << "..........................-#####*-.+++%*...................." << std::endl;
    ofs << "....................-=##@@#######%####*....................." << std::endl;
    ofs << "........................-*@#####==*:-......................." << std::endl;
    ofs << "..................:#==+*+=@+%%@@@=#####=@@%@:..............." << std::endl;
    ofs << "..................=++=+##@#######@+@==@###: ................" << std::endl;
    ofs << "............. ... .%########@*@#*=#@###@%%...+-............." << std::endl;
    ofs << "............=#%@@=#@--%#@@############=%####*..............." << std::endl;
    ofs << "..............=######=..%#########@=@@###%:................." << std::endl;
    ofs << "................*#@##@=+##@%@######+:=-:-. ................." << std::endl;
    ofs << "............. -##%=%#################@#####+%+.. . ........." << std::endl;
    ofs << "..........:--*@=@#%=#=%====++@#@###@%%####@@#@#####@@@-....." << std::endl;
    ofs << ".........-+%%###%:..:...@####=#=-=+:.*-.--.-:**:.... ......." << std::endl;
    ofs << "................%@######@@@#%##+.+######+..+*.*@#*.........." << std::endl;
    ofs << ".................--.:-%@=##===###################*.........." << std::endl;
    ofs << ".... ............  :*.*@##=*.*#####=**==+%=%@@+@#+.........." << std::endl;
    ofs << "-=%###@%*.:+.:..:####@%%#@######@++@@=@%-..:: .. ..........." << std::endl;
    ofs << "..--@#@#@%%#########%@######%%########===@:-=@#-....*-: ..+:" << std::endl;
    ofs << ".....+%=#@@#@%=#%+++@#####@=:=#=@############@##@####@@==- ." << std::endl;
    ofs << "........ .....-##@###*-:=#+*###@@##%-. . :@#+:.*#*. ........" << std::endl;
    ofs << "............... .......-.+#####@###: ..... ................." << std::endl;
    ofs << "........... .......... =%:-..=#+.-:+#+ ....................." << std::endl;
    ofs << ".............................%#% ....... ..................." << std::endl;
    ofs << ".............................@#@............................" << std::endl;
    ofs << "........................... -###............................" << std::endl;
    
    ofs.close();
};

std::string ShrubberyCreationForm::getTarget(void) const {
    return (this->_target);
}