#include <find_closest_element_in_sorted_array.hpp>
#include <catch.hpp>
#include <map>

SCENARIO("data1") {
    int a[]{10, 20, 30};
    std::map<int, std::size_t> expected{{9, 0}, {15, 0}, {35, 2}};
    
    for( auto const& element : expected ) {
        auto it = find_closest_element_in_sorted_array( element.first, std::begin(a), std::end(a) );
        auto result = std::distance( std::begin(a), it );
        REQUIRE( result == element.second );
    }
}

SCENARIO("data2") {
    int a[]{10, 20, 30, 40};
    std::map<int, std::size_t> expected{{35, 2}};
    
    for( auto const& element : expected ) {
        auto it = find_closest_element_in_sorted_array( element.first, std::begin(a), std::end(a) );
        auto result = std::distance( std::begin(a), it );
        REQUIRE( result == element.second );
    }
}
