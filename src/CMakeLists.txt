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




