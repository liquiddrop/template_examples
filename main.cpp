#include "FinancialInstruments.h"
#include "InterestRateEngine.h"
#include "FactorialTemplate.h"

#include <iostream>

using namespace std;

int main()
{
    InterestRateEngine<BondInstrument> engineA;
    InterestRateEngine<MortgageInstrument> engineB;
    InterestRateEngine<StudentLoanInstrument> engineC;
    InterestRateEngine<AutoLoanInstrument> engineD;

    BondInstrument bond(40000, 250);
    MortgageInstrument mortgage(250, 50000, 5000);
    StudentLoanInstrument studentLoan(400, 110000);
    AutoLoanInstrument autoLoan(250, 35000, 10000);

    engineA.setInstrument(bond);
    engineB.setInstrument(mortgage);
    engineC.setInstrument(studentLoan);
    engineD.setInstrument(autoLoan);

    std::cout << " bond annual int rate: " << engineA.getAnnualIntRate()*100 << "%"<< std::endl;
    std::cout << " mortgage annual int rate: " << engineB.getAnnualIntRate()*100 << "%"<< std::endl;
    std::cout << " student loan annual int rate: " << engineC.getAnnualIntRate()*100 << "%"<< std::endl;
    std::cout << " car loan annual int rate: " << engineD.getAnnualIntRate()*100 << "%"<< std::endl;

    std::cout << "factorial(6) = " << Factorial<6>::result << std::endl;
    std::cout << "choiceNumber(6,2) = " << ChoiceNumber<6,2>::result << std::endl;

    std::cout << "twoPower(6) aka 2^6 = " << TwoPower<6>::val << std::endl;
    std::cout << "twoPower(6!) aka 2^3! = " << TwoPower<Factorial<3>::result>::val << std::endl;
    std::cout << "twoPower(6!) aka 2^4! = " << TwoPower<Factorial<4>::result>::val << std::endl;

    return 0;
}
