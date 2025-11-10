cmake_minimum_required(VERSION 3.16)
project(TodoListApp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Sql)
find_package(MySQL REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

include_directories(${MYSQL_INCLUDE_DIR})

add_executable(TodoListApp
    src/main.cpp
    src/database/DatabaseManager.cpp
    src/models/Task.cpp
    src/models/Category.cpp
    src/gui/MainWindow.cpp
    src/gui/TaskDialog.cpp
)
target_link_libraries(TodoListApp
Qt6::Widgets
Qt6::Sql
${MYSQL_LIBRARIES}
)   