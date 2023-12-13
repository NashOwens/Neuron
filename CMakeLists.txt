cmake_minimum_required(VERSION 3.22)
project(Neuron VERSION 0.1.0)

add_subdirectory(src)

add_executable(run src/main.cpp)

target_link_libraries(run 
PRIVATE
Node
LLNode
Edge
Neuron
Activation
NeuronLayer
LLNeuron
Network
LLEdge
EdgeLayer
)
