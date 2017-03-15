#include <iostream>
#include <vector>
#include <find_closest_element_in_sorted_array.hpp>

int main()
{
    std::size_t size;
    std::cin >> size;
    if( std::cin && size != 0 ) {
        std::vector<int> a(size);
        for( size_t i = 0; i < size; ++i) {
            std::cin >> a[ i ];
            if ( !std::cin ) {
                return EXIT_FAILURE;
            }
        }

        std::cin >> size;
        if( std::cin && size != 0 ) {        
            std::vector<int> b(size);
            for( size_t i = 0; i < size; ++i) {
                std::cin >> b[ i ];
                if ( !std::cin ) {
                    return EXIT_FAILURE;
                }
            }
            
            for( auto const& element : b ) {
                auto it = find_closest_element_in_sorted_array( element, a.begin(), a.end() );
                std::cout << std::distance( a.begin(), it ) << ' ';
            }
            std::cout << std::flush;
            
            return EXIT_SUCCESS;
        }
    }
    
    return EXIT_FAILURE;
}
