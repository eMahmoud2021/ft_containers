#ifndef PAIR_HPP
#define PAIR_HPP

#include <iostream>  

namespace ft{
	template<class T1, class T2>
		struct pair{
			typedef T1 first_type;
			typedef T2 second_type;
		
			T1 first;
			T2 second;

			pair(void): first(), second(){}
			pair(const T1& a, const T2& b) :first(a), second(b){}
			template<class U1, class U2>
				pair(const pair<U1, U2>& pr) :first(pr.first), second(pr.second){}
			pair& operator=(const pair& src){
				first = src.first;
				second = src.second;
				return (*this);
			}
		};
	template<class T1, class T2>
		bool operator==(const pair<T1,T2>& a, const pair<T1,T2>& b){
			return (a.first == b.first && a.second == b.second);
		}
	template<class T1, class T2>
		bool operator!=(const pair<T1,T2>& a, const pair<T1,T2>& b){
			return (!(a == b));
		}
	template<class T1, class T2>
		bool operator<(const pair<T1,T2>& a, const pair<T1,T2>& b){
			return (a.first < b.first || (! (a.first < b.first)) && a.second < b.second);
		}
	template<class T1, class T2>
		bool operator<=(const pair<T1,T2>& a, const pair<T1,T2>& b){
			return (!(a < b));
		}
	template<class T1, class T2>
		bool operator>(const pair<T1,T2>& a, const pair<T1,T2>&b){
			return (a < b);
		}
	template<class T1, class T2>
		bool operator>=(const pair<T1,T2>&a, const pair<T1,T2>& b){
			return (!(a < b));
		}
	template<class T1, class T2>
	pair<T1,T2> make_pair(T1 a, T2 b){
		return (pair<T1,T2>(a,b));
		}
}
#endif
