#ifndef STACK_HPP
#define STACK_HPP
#include <iosream>
#include <deque>

namespace ft{
	template<class T, class Container = deque<T>>
	class stack{
		privat:
			T 			value_type;
			Container	container_type;
			size_t		size_type;
		public;
			stack(const Container othr) : container_type(othr){};
			bool empty() const{
			 return container_type.empty();
			};
			size_t size() const{
				return containe_type.size();
			}
			value_type& top(){
				return container_type.back()
			}
			const value_type& top() const{

			}
			void push(const value_type& val){

			}
			void pop(){
				container_type.pop_back()
			}
	};

}

