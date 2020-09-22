#include <iostream>

class BondInstrument {
public:
    BondInstrument() {}
    BondInstrument(double principal, double monthlyPayment);
    ~BondInstrument();
    BondInstrument(const BondInstrument &a);
    BondInstrument &operator =(const BondInstrument &a);

    double getMonthlyPayment();
    double getPrincipal();

    // other methods here...
private:
    double
        m_monthlyPay,
        m_principal;
};

class MortgageInstrument {
public:
    MortgageInstrument() {}
    MortgageInstrument(double monthlyPay, double propertyValue, double downpayment);
    ~MortgageInstrument();
    MortgageInstrument(const MortgageInstrument &a);
    MortgageInstrument &operator =(const MortgageInstrument &a);

    double getMonthlyPayment();
    double getPrincipal();

    // other methods here...
private:
    double
        m_monthlyPay,
        m_propertyValue,
        m_downPayment;
};

class StudentLoanInstrument {
public:
    StudentLoanInstrument() {}
    StudentLoanInstrument(double monthlyPay, double loanValue);
    ~StudentLoanInstrument();
    StudentLoanInstrument(const StudentLoanInstrument &a);
    StudentLoanInstrument &operator =(const StudentLoanInstrument &a);

    double getMonthlyPayment();
    double getPrincipal();

    // other methods here...
private:
    double
        m_monthlyPay,
        m_loanValue;
};

class AutoLoanInstrument {
public:
    AutoLoanInstrument() {}
    AutoLoanInstrument(double monthlyPay, double carValue, double downpayment);
    ~AutoLoanInstrument();
    AutoLoanInstrument(const AutoLoanInstrument &a);
    AutoLoanInstrument &operator =(const AutoLoanInstrument &a);

    double getMonthlyPayment();
    double getPrincipal();

private:
    double
        m_monthlyPay,
        m_carValue,
        m_downPayment;
};
