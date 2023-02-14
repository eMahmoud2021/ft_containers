#ifndef LEXICOGRAPHICAL_COMPARE_HPP
#define LEXICOGRAPHICAL_COMPARE_HPP

#include <iostream>

namespace ft{
	template<class InputIt1, class InputIt2>
		bool lexicographical_compare(InputIt1 first1, InputIT1 last1, InputIt2 first2, InputIt2 last2){
			while (first1 != last1)
        {
            // std::cout << "OUTP: " << *first1 << " " << *first2 << std::endl;
            if (first2 == last2 || *first2 < *first1)
                return false;
            else if (*first1 < *first2)
                return true;
            ++first1;
            ++first2;
        }
        return (first2 != last2);
    }
}


}
#endif
