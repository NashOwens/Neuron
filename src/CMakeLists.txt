add_library(Node
${CMAKE_CURRENT_SOURCE_DIR}/Node.cpp
${CMAKE_CURRENT_SOURCE_DIR}/Node.h
)

add_library(LLNode
${CMAKE_CURRENT_SOURCE_DIR}/LLNode.cpp
${CMAKE_CURRENT_SOURCE_DIR}/LLNode.h
)

add_library(Neuron
    ${CMAKE_CURRENT_SOURCE_DIR}/Neuron.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Neuron.h
)

add_library(Edge
    ${CMAKE_CURRENT_SOURCE_DIR}/Edge.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Edge.h
)

add_library(Activation
    ${CMAKE_CURRENT_SOURCE_DIR}/Activation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Activation.h
)

add_library(NeuronLayer
    ${CMAKE_CURRENT_SOURCE_DIR}/NeuronLayer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/NeuronLayer.h
)

add_library(LLNeuron
    ${CMAKE_CURRENT_SOURCE_DIR}/LLNeuron.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/LLNeuron.h
)

add_library(Network
    ${CMAKE_CURRENT_SOURCE_DIR}/Network.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Network.h
)

add_library(LLEdge
    ${CMAKE_CURRENT_SOURCE_DIR}/LLEdge.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/LLEdge.h
)

add_library(EdgeLayer
    ${CMAKE_CURRENT_SOURCE_DIR}/EdgeLayer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/EdgeLayer.h
)

