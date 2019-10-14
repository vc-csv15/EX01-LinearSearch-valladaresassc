//
// Created by vscilab on 10/14/2019.
//

#ifndef EX01_LINEARSEARCH_VALLADARESASSC_LINESEARCH_H
#define EX01_LINEARSEARCH_VALLADARESASSC_LINESEARCH_H

#endif //EX01_LINEARSEARCH_VALLADARESASSC_LINESEARCH_H


#include <cstint>
#include <cstddef>

namespace edu {namespace vcccd { namespace vc { namespace csv15 {
 template <class T>
         int64_t find(const T& value, T array[], size_t size)
                {
                    if (array == nullptr) return -1;
                    for (size_t i = 0; i < size; i++)
                    {
                        if (value == array [i]) return i;
                    }
                    return -1;

}}}}}