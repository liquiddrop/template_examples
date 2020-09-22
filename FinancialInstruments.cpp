#include "FinancialInstruments.h"

BondInstrument::BondInstrument(double principal, double monthlyPayment)
: m_principal(principal),
m_monthlyPay(monthlyPayment)
{

}

BondInstrument::~BondInstrument()
{

}

BondInstrument::BondInstrument(const BondInstrument &a)
: m_monthlyPay(a.m_monthlyPay),
m_principal(a.m_principal)
{

}

BondInstrument &BondInstrument::operator =(const BondInstrument &a)
{
    if (this != &a)
    {
        m_principal = a.m_principal;
        m_monthlyPay = a.m_monthlyPay;
    }
    return *this;
}

double BondInstrument::getMonthlyPayment()
{
    return m_monthlyPay;
}

double BondInstrument::getPrincipal()
{
    return m_principal;
}


/////////////

MortgageInstrument::MortgageInstrument(double monthlyPay, double propertyValue, double downpayment)
: m_monthlyPay(monthlyPay),
m_propertyValue(propertyValue),
m_downPayment(downpayment)
{

}

MortgageInstrument::~MortgageInstrument()
{

}

MortgageInstrument::MortgageInstrument(const MortgageInstrument &a)
: m_downPayment(a.m_downPayment),
m_propertyValue(a.m_propertyValue),
m_monthlyPay(a.m_monthlyPay)
{

}

MortgageInstrument &MortgageInstrument::operator =(const MortgageInstrument &a)
{
    if (this != &a)
    {
        m_downPayment = a.m_downPayment;
        m_propertyValue = a.m_propertyValue;
        m_monthlyPay = a.m_monthlyPay;
    }
    return *this;
}

double MortgageInstrument::getMonthlyPayment()
{
    return m_monthlyPay;
}

double MortgageInstrument::getPrincipal()
{
    return m_propertyValue - m_downPayment;
}

/////////////

StudentLoanInstrument::StudentLoanInstrument(double monthlyPay, double loanValue)
: m_monthlyPay(monthlyPay),
m_loanValue(loanValue)
{

}

StudentLoanInstrument::~StudentLoanInstrument()
{

}

StudentLoanInstrument::StudentLoanInstrument(const StudentLoanInstrument &a)
: m_monthlyPay(a.m_monthlyPay),
m_loanValue(a.m_loanValue)
{

}

StudentLoanInstrument &StudentLoanInstrument::operator =(const StudentLoanInstrument &a)
{
    if (this != &a)
    {
        m_loanValue = a.m_loanValue;
        m_monthlyPay = a.m_monthlyPay;
    }
    return *this;
}

double StudentLoanInstrument::getMonthlyPayment()
{
    return m_monthlyPay;
}

double StudentLoanInstrument::getPrincipal()
{
    return m_loanValue;
}

/////////////

AutoLoanInstrument::AutoLoanInstrument(double monthlyPay, double carValue, double downpayment)
: m_monthlyPay(monthlyPay),
m_carValue(carValue),
m_downPayment(downpayment)
{

}

AutoLoanInstrument::~AutoLoanInstrument()
{

}

AutoLoanInstrument::AutoLoanInstrument(const AutoLoanInstrument &a)
: m_downPayment(a.m_downPayment),
m_carValue(a.m_carValue),
m_monthlyPay(a.m_monthlyPay)
{

}

AutoLoanInstrument &AutoLoanInstrument::operator =(const AutoLoanInstrument &a)
{
    if (this != &a)
    {
        m_downPayment = a.m_downPayment;
        m_carValue = a.m_carValue;
        m_monthlyPay = a.m_monthlyPay;
    }
    return *this;
}

double AutoLoanInstrument::getMonthlyPayment()
{
    return m_monthlyPay;
}

double AutoLoanInstrument::getPrincipal()
{
    return m_carValue - m_downPayment;
}
