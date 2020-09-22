#include <vector>

using namespace std;

template <class T>
class InterestRateEngine {
public:
    InterestRateEngine();
    ~InterestRateEngine();
    InterestRateEngine(const InterestRateEngine<T> &a);
    InterestRateEngine<T> &operator =(const InterestRateEngine<T> &a);

    void setInstrument(T &inv);
    double getAnnualIntRate();
private:
    T m_instrument;
};

template <class T>
InterestRateEngine<T>::InterestRateEngine()
{

}

template <class T>
InterestRateEngine<T>::~InterestRateEngine()
{

}

template <class T>
InterestRateEngine<T>::InterestRateEngine(const InterestRateEngine<T> &a)
: m_instrument(a.m_instrument)
{

}

template <class T>
InterestRateEngine<T> &InterestRateEngine<T>::operator =(const InterestRateEngine<T> &a)
{
    if (this != &a)
    {
        m_instrument = a.m_instrument;
    }
    return *this;
}

template <class T>
void InterestRateEngine<T>::setInstrument(T &inv)
{
    m_instrument = inv;
}

template <class T>
double InterestRateEngine<T>::getAnnualIntRate()
{
    double payment = m_instrument.getMonthlyPayment();
    double principal = m_instrument.getPrincipal();
    return (12 *payment) / principal;
}
