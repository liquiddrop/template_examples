template <long N>
class Factorial {
public:
    enum {
        result = Factorial<N-1>::result * N
    };
private:

};

template <>
class Factorial<0> {
public:
    enum {
        result = 1
    };
};


template <int N, int P>
class ChoiceNumber {
public:
    enum {
        result = Factorial<N>::result / (Factorial<P>::result * Factorial<N-P>::result)
    };
};

template<int n> struct TwoPower
{
    enum { val = 2*TwoPower<n-1>::val };
};

template<> struct TwoPower<0>
{
    enum { val = 1 };
};
