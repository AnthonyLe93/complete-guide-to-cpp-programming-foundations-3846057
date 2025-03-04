// Complete Guide to C++ Programming Foundations
// Challenge 04_11
// Vector Manipulation, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>

bool IsValid(std::vector<int>& result, int checkPointIndex, size_t vectorLength){
    if (result.size() == 3 && (checkPointIndex > 1 && checkPointIndex < (vectorLength - 1))) {
        return true;
    } 
}

std::vector<int> SelectKeyPoints(std::vector<int> distances, int checkpointIndex){
    std::vector<int> result;
    result.push_back(distances[0]);
    result.push_back(distances[checkpointIndex]);
    result.push_back(distances[distances.size() - 1]);
    
    if(IsValid(result, checkpointIndex, distances.size())){
        return result;
    }
    return {0};
}



int main(){
    std::vector<int> distances = {3, 5, 4, 6, 7, 8};
    int checkpointIndex = 4;

    std::vector<int> learnerResult = SelectKeyPoints(distances, checkpointIndex);
    std::cout << "Your code returned: { ";
    auto vectPtr = learnerResult.begin();
    while (vectPtr != learnerResult.end()){
        std::cout << *vectPtr << " ";
        vectPtr = next(vectPtr, 1);
    }
    std::cout << "}" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
