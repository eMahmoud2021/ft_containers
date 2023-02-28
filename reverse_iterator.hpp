#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "iterator_traits.hpp"
#include <cstddef>
 class iterator_traits;

namespace ft {
	template<class ITer>
		class reverse_iterator {
			protected:
				ITer m_iter;
			public:
				// typedef typename iterator_traits<ITer>::valueType			valueType;
				// typedef typename iterator_traits<ITer>::differenceType		differenceType;
				// typedef typename iterator_traits<ITer>::iteratorCategory	iteratorCategory;
				// typedef typename iterator_traits<ITer>::pointer				pointer;
				// typedef typename iterator_traits<ITer>::reference			reference;
			typedef ITer                                               iterator_type;
			typedef typename iterator_traits<ITer >::iterator_category   iterator_category;
			typedef typename iterator_traits<ITer >::value_type          value_type;
			typedef typename iterator_traits<ITer >::difference_type     differenceType;
			typedef typename iterator_traits<ITer >::pointer             pointer;
			typedef typename iterator_traits<ITer >::reference           reference;

				reverse_iterator(iterator_type iter):m_iter(iter) {};
				ITer base() const {
					return m_iter;
				};
				reverse_iterator& operator=(const reverse_iterator& i){
					m_iter = i.m_iter;
					return (*this);
				}
				reference operator*() const{
					return (*(m_iter));
				}
				pointer operator->() const{
					return (&(operator*()));
				}
				reference operator[](differenceType n) const{
					return (m_iter[-n]);
				}
				reverse_iterator& operator++(){
					return (*this->m_iter++);
				}
				reverse_iterator& operator--(){
					return (*this->m_iter--);
				}
				reverse_iterator& operator++(int){
					reverse_iterator tem ;
					tem = *this;
					this->m_iter++;
					return (tem);
				}
				reverse_iterator& operator--(int){
					reverse_iterator tem ;
					tem = *this;
					this->m_iter--;
					return (tem);
				}
				reverse_iterator& operator+(differenceType n) const{ 
					return (this->m_iter + n.m_iter);
				}
				reverse_iterator& operator-(differenceType n) const{ 
					return (this->m_iter - n.m_iter);
				}
				reverse_iterator& operator+=(differenceType n) { 
					return (this->m_iter += n.m_iter);
				}
				reverse_iterator& operator-=(differenceType n) const{ 
					return (this->m_iter -= n.m_iter);
				}

		};
		
}
#endif
