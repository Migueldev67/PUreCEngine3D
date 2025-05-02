


#ifndef CONSTANT_H
#define CONSTANT_H

#define _PI (3.14159265358979323846)

template <typename T>
struct PrPi;

template <> struct PrPi<char> { static constexpr char _Value = 3; };
template <> struct PrPi<short> { static constexpr short _Value = 3; };
template <> struct PrPi<int> { static constexpr int _Value = 3; };
template <> struct PrPi<long long> { static constexpr long long _Value = 3; };
template <> struct PrPi<unsigned char> { static constexpr unsigned char _Value = 3; };
template <> struct PrPi<unsigned short> { static constexpr unsigned short _Value = 3; };
template <> struct PrPi<unsigned int> { static constexpr unsigned int _Value = 3; };
template <> struct PrPi<unsigned long long> { static constexpr unsigned long long _Value = 3; };
template <> struct PrPi<float> { static constexpr float _Value = static_cast<float>(_PI); };
template <> struct PrPi<double> { static constexpr double _Value = static_cast<double>(_PI); };

template <typename T>
constexpr T m_pi_v = PrPi<T>::_Value;


#endif
