//
//  main.cpp
//  STLExamples
//
//  Created by Alex Nanor on 4/5/22.
//

#include <iostream>
#include <algorithm>
#include <vector>
//HELPER FUNCTIONS:
bool is_three(int i) { return i == 3; }
void multbyTwo(int a){std::cout << a*2 << " " << std::endl;}
bool myPredicate(int i , int j){return i == j; }
bool comp (char s1, char s2){return tolower(s1)<tolower(s2);}
bool sizecomp(int a, int b){return a < b; }


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    
//   Algorithms:
    
    
//
//   NON_MODIFYING OPERATIONS: Examine every element of a sequence without modifying ORDER(count, count_if, for_each)
//

    std::vector<int> myInts{1,2,3,3,4,5,6,7,7,8,9};
//    COUNT:
    std::cout << std::count(myInts.begin(), myInts.end(), 3) << std::endl;
//
//    COUNT_IF (Takes Predicate)
   std::cout<<  std::count_if(myInts.begin(), myInts.end(), is_three) << std::endl;
//
//    FOR-EACH: Calls Func for each element in the range and returns function
     for_each(myInts.begin(), myInts.end(),multbyTwo);
    
    
    
    
    
    
    
    
    
//    COMPARISON OPERATIONS: These algorithms compare objects or sequences without modifying them (equal,
    std::vector<int> yInts{1,2,3,3,4,5,6,7,7,8,9};
    if(std::equal(myInts.begin(),myInts.end(), yInts.begin())){
        std::cout << "Equality function works! Eureka. " << std::endl;
    }
//    Equal Test with Predicate
    if(std::equal(myInts.begin(), myInts.end(), yInts.begin(), myPredicate)){
        std::cout<< "Equal Test with Predicate works!!" << std::endl;
    }
    
//    Lexigraphical Compare (Dictionary Order) (Less is earlier i.e. a is less than c bc it is first)
    std::string myString = "Alexander";
    std::string yourString = "Ben";
//    Should return false (Asks is Ben less than Alexander) (Is A lexographically less than B?)
    if(std::lexicographical_compare(yourString.begin(), yourString.end(), myString.begin(),myString.end())){
        std::cout << "true";
    }else{
        std::cout << "false" << std::endl;
    }
    
//lexographical compare with comparator
    if(std::lexicographical_compare(yourString.begin(),yourString.end(),myString.begin(),myString.end(), comp)){
        std::cout << "True" << std::endl;
    }else{
        std::cout << "False" << std::endl;
    }
    
// Max
    int a = 7;
    int b = 28;
    
    std::cout << std::max(a, b) << std::endl;
    std::cout << std::max(a, b, sizecomp) << std::endl;
    
//    Note there is a way to compare objects using a custom comparator as a third argument
    
    
//    Min
    std::cout << std::min(a,b) << std::endl;
    std::cout << std::min(a,b, sizecomp) << std::endl;
    


    
    
    
    
    
    
    
    return 0;
}
