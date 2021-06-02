# Build the Game of Life

set(MODULE_NAME "GoL")

project(${MODULE_NAME})

set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)

set(INCLUDE_DIR_INSTALL ${CMAKE_INSTALL_PREFIX}/include)
set(LIBRARY_DIR_INSTALL ${CMAKE_INSTALL_PREFIX}/lib)
set(EXECUTABLE_DIR_INSTALL ${CMAKE_INSTALL_PREFIX}/bin)


set(HEADER_FILES ${INCLUDE_DIR}/Grid.h
                 ${INCLUDE_DIR}/GridRectangular.h
               )

set(SOURCE_FILES ${SOURCE_DIR}/Grid.cxx
                 ${SORCE_DIR}/GridRectangular.cxx
              )

set(EXECUTABLE_FILE ${SOURCE_DIR}/main.cxx)


set(LIBRARY_NAME ${MODULE_NAME})
set(EXECUTABLE_NAME "run${MODULE_NAME}")



###########################################
include_directories(include/)

add_library(${LIBRARY_NAME} SHARED ${SOURCE_FILES})
target_link_libraries(${LIBRARY_NAME})
target_include_directories(${LIBRARY_NAME} INTERFACE $<INSTALL_INTERFACE:include>)

add_executable(${EXECUTABLE_NAME} ${EXECUTABLE_FILE})
target_link_libraries(${EXECUTABLE_NAME} ${LIBRARY_NAME})

install(FILES ${HEADER_FILES} DESTINATION ${INCLUDE_DIR_INSTALL})
install(TARGETS ${LIBRARY_NAME} DESTINATION ${LIBRARY_DIR_INSTALL})
install(TARGETS ${EXECUTABLE_NAME} DESTINATION ${EXECUTABLE_DIR_INSTALL})
