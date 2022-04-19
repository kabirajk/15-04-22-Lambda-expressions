// check the use of lambda capture
//https://en.cppreference.com/w/cpp/language/lambda#Lambda_capture
//https://en.cppreference.com/w/cpp/language/lambda
//check why we need to se auto for stroing the lambda definition
//check calling lambda stored variable in glolbal


#include <iostream>

void func(void (*fun)(int))//get function pointer and assiging to a pointer call
{
    fun(12);//call lamda as normal function call;
}
int main()
{   // mabda == functino pointer its acts a the same a functin pointer acts
    // for stroing purpose its stored with out the call ();
    auto val=[](int a){ std::cout<<a<<std::endl;};
    func(val);
    
    val(234);
    //passing functin pointer

    return 0;
}
