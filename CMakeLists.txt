cmake_minimum_required(VERSION 3.15)
project(LightControlPC)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_PREFIX_PATH "/opt/Qt/5.15.2/gcc_64/lib/cmake/")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Quick REQUIRED)

add_executable(LightControlPC MainWindow.cpp aboutMenu.cpp aboutMenu.h MainWindow.h qml.qrc LightControlPC.cpp)

target_link_libraries(LightControlPC Qt5::Core)
target_link_libraries(LightControlPC Qt5::Widgets)
target_link_libraries(LightControlPC Qt5::Quick)