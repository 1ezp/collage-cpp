#include <iostream>




template <auto x> constexpr auto constant = x;


template <typename T>
T plus(T n1,T n2){
    return n1+n2;
}

int main(){

    std::cout << plus<int>(1,2);

    auto v1 = constant<5>;      // v1 == 5, decltype(v1) is int
    auto v2 = constant<true>;   // v2 == true, decltype(v2) is bool
    auto v3 = constant<'a'>;    // v3 == 'a', decltype(v3) is char

    std::cout << typeid(v2).name();

    return 0;

}
