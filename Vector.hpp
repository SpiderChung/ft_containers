//
// Created by Spider Chung on 3/14/23.
//

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>
#include "./iter/Iterator.hpp"
#include "./iter/IteratorRandomAccess.hpp"

namespace ft {
    template <class T, class Allocator = std::allocator<T> >
    class Vector {
    public:
        typedef             T                           value_type;
        typedef             Allocator                   allocator_type;
        typedef typename    Allocator::pointer          pointer;
        typedef typename    Allocator::const_pointer    const_pointer;
        typedef             std::size_t                 size_type;
        typedef typename    Allocator::reference        reference;
        typedef typename    Allocator::const_reference  const_reference;
        typedef             std::ptrdiff_t              difference_type;
        typedef             ft::iterator_traits<>       iterator;
        typedef                                         const_iterator;
        typedef                                         reverse_iterator;
        typedef                                         const_reverse_iterator;
    private:
    };
}

#endif //VECTOR_HPP
