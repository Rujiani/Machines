#ifndef AUTOMAT_MEALY_HPP
#define AUTOMAT_MEALY_HPP

#include <algorithm>
#include <vector>

using std::vector;
using std::for_each;

namespace ATM {

class Mealy_Machine{
    private:
    using matrix_cell = std::pair<size_t, size_t>;

    size_t current_state;
    vector<vector<matrix_cell>> machine_matrix;

    void fill_matrix(const vector<matrix_cell> &values);

    public:
    Mealy_Machine(const size_t num_of_states = 0, const size_t num_of_inputs = 0,
                  const vector<matrix_cell> &values = {});
            
    
};

}

#endif