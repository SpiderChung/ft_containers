//
// Created by Spider Chung on 3/16/23.
//

#ifndef ITERATORRANDOMACCESS_HPP
#define ITERATORRANDOMACCESS_HPP

#include "Iterator.hpp"

namespace ft
{
    template <class Iterator>
            class random_access_iterator
            {
            private:
                Iterator            _current;
            public:
                typedef typename    iterator_traits<Iterator>::value_type           value_type;
                typedef typename    iterator_traits<Iterator>::pointer              pointer;
                typedef typename    iterator_traits<Iterator>::reference            reference;
                typedef typename    iterator_traits<Iterator>::iterator_category    iterator_category;
                typedef             std::ptrdiff_t                                  difference_type;
                typedef             pointer                                         iterator_type;

                random_access_iterator(): _current() {}

                explicit random_access_iterator(pointer x): _current(x) {}


            };
};

#endif //ITERATORRANDOMACCESS_HPP
