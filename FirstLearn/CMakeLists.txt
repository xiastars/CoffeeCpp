#项目名称
project(FirstLearn)
#代码路径
aux_source_directory(. DIR_TOOT_SRCS)
#debug模式
set (CMAKE_CXX_FLAGS "$(CMAKE_CXX_FLAGS}-g")
#生成可执行的文件
add_executable(FirstLearn ${DIR_TOOT_SRCS})