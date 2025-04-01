//
// Created by Lucas Kenzo Kuroki
//

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::istream;
using std::cerr;

#include <iomanip>
using std::setw;

#include <cstring>
using std::strlen;
using std::strcmp;
using std::strcpy;
using std::strncat;

#include <cstdlib>
using std::exit;


#ifndef STRING_HPP
#define STRING_HPP

class String {
    friend ostream& operator<<(ostream&, const String&);
    friend istream& operator>>(istream&, String&);
    public:
      String(const char * = "");
      ~String();

      const String &operator=(const String &);
      const String &operator=(const char *);
      const String &operator+=(const String &);

      bool operator==(const String &) const;
      bool operator<(const String &) const;
      bool operator!=(const String &) const;
      bool operator>(const String &) const;
      bool operator<=(const String &) const;
      bool operator>=(const String &) const;

      char &operator[](int);

      int getLenth() const;

    private:
      int length;
      char *sPtr;
      int _index;

      void setString(const char *);
};



#endif //STRING_HPP
