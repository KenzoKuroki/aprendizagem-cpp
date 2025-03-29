//
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::istream;

#ifndef STRING_HPP
#define STRING_HPP

class String {
    friend ostream& operator<<(ostream&, const String&);
    friend istream& operator>>(istream&, String&);
    public:

    private:

};



#endif //STRING_HPP
