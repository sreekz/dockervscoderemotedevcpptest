#include<iostream>
#include<omp.h>

int main(int argc, char** argv){
    #pragma omp parallel
    {
        #pragma omp critical
        std::cout << "Hello World! I'm thread " << omp_get_thread_num()
        << " out of " << omp_get_num_threads() << " threads." << std::endl;
    }
    std::cout << "This is run on a remote Docker container!" << std::endl;
    return 0;
}