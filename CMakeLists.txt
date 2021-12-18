cmake_minimum_required(VERSION 3.0)#指定cmake最小版本号

project(renderingCore)#指定工程名，这个是随意取的



find_package(MPI REQUIRED)

add_definitions(-DOMPI_SKIP_MPICXX)













include_directories(./GlobalInclude)#添加头文件引用路径
#可以添加多个include_directories(xxx)，其中xxx是相对路径
include_directories("${MPI_CXX_INCLUDE_DIRS}")

#[[
set(SRC 
xxx
)#定义变量
]]

#link_directories(dir1 dir2)#库文件路径，可以在括号内依次添加多个，使用空格隔开
#路径是相对路径（可以是绝对路径吗 ？）
#相当于指定g++编译器的 -L 参数

add_executable(${PROJECT_NAME} #第一个是指定可执行文件的名字 之后参数用分号或者空格进行间隔
./main.cpp
./Source/para_enable.cpp
./Source/scene.cpp
./Source/box.cpp
./Source/camera.cpp
./Source/diffuseLight.cpp
./Source/hitable.cpp
./Source/hitableList.cpp
./Source/Lights.cpp
./Source/material.cpp
./Source/perlin.cpp
./Source/random.cpp
./Source/sphere.cpp
./Source/textures.cpp
./Source/volume.cpp
)#指定生成可执行文件名称






target_link_libraries(${PROJECT_NAME} ${MPI_LIBRARIES})
