# dockervscoderemotedevcpptest
Test of remote container development in VSCode using Docker for C++ development

The project builds a simple C++ application to print out different threads using OpenMP library.

The Dockerfile sets up a development container based on ubuntu with gcc, libopenmp, and cmake.
VS Code remote container development extension sets up necessary extensions for C++ and CMake and mounts the project volume for optional development on a remote Docker host.

# Requirements
- VS Code >=1.52
- Docker Engine >= 19.03