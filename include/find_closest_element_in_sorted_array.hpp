#include <algorithm>
#include <cstdlib>

template <typename T, typename RandomIterator>
RandomIterator find_closest_element_in_sorted_array( T const& element, RandomIterator first, RandomIterator last )
{
    RandomIterator end = last;
    RandomIterator begin = first;
    RandomIterator middle;
    while( first != last ) {
        middle = first + std::distance( first, last )  / 2;
        if( element <= *middle ) {
            last = middle;
        }
        else {
            first = middle + 1;
        }
    }
    
    if( last == end ) {
        return last - 1;
    }
    
    if ( first == begin ) {
        return first;
    }
    --first;
    
    return ( abs( *first - element ) <= abs( *last - element ) ) ? first : last;
}
