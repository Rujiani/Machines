#include "A_Mealy.hpp"
#include <stdexcept>

namespace ATM {
    void Mealy_Machine::fill_matrix(const vector<matrix_cell> &values){
        size_t counter = 0;
        for_each(machine_matrix.begin(), machine_matrix.end(),
            [&values, &counter](vector<matrix_cell> &rows){
                for_each(rows.begin(), rows.end(),
                    [&values, &counter](matrix_cell &current_cell){
                        current_cell = values[counter++];
                    }
                );
            }
        );
    }

    Mealy_Machine::Mealy_Machine(const size_t num_of_states, const size_t num_of_inputs,
        const vector<matrix_cell> &values){

    if(num_of_inputs * num_of_states != values.size())
        throw std::invalid_argument("Incorrect machine input");

    machine_matrix.resize(num_of_states);
    for_each(machine_matrix.begin(), machine_matrix.end(),
        [num_of_inputs](vector<matrix_cell>&i){
            i.reserve(num_of_inputs);
        }
    );

    fill_matrix(values);

}
}