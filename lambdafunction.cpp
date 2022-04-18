#include <iostream>
int ADD(int x,int y)
{
    x=x+y;
    y=y+x;
    x=x++ + y++;
    return x+y;
}

int main()
{   // assiging lambda function to a variable like function ptr
//here directly asssiging the address of the function body to the variable
    // syntax //auto to make the scope and 
    //[] followed by call parametrs and then function body
    auto add=[](int x,int y)
    {   x=x+y;
        y=y+x;
        x=x++ + y++;
        return x+y;};
    std::cout<<add(1,2)<<std::endl;
    
    //#unassigned lambda function
    //here [] (call parameter){function body}
    // (pass the required args because now its not assigned to a variable)
    std::cout<<[](int x,int y){ x=x+y;y=y+x;x=x++ + y++;return x+y;}(1,2)<<std::endl;
    
    //#function ptr

    //returntype (* ptrname)->this pointer refence to the addres to the function 
    // returntype (* ptrname) (needed calling parametrs)=&ffunction name;
    //call willbe like
    //function pointer name and function call with needed args=> ADDptr(1,2)
    int (*ADDptr)(int x,int y)=&ADD;
    std::cout<<ADDptr(1,2)<<std::endl;

return 0;
}