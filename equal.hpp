#ifndef EQUAL_HPP
#define EQUAL_HPP

template<class IT1, class IT2>
bool ft_equal(IT1 first1, IT1 last1, IT2 first2){
	while (first1 != last1){
		if (!(*first1 == *first2)){
			return false;
		}
		++first1;
		++first2;
	}
	return true;
}
#endif


