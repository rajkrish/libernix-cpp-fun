project						(libernix-cpp-fun)
cmake_minimum_required		(VERSION 2.6)

set							(project-dir		${PROJECT_SOURCE_DIR})
set							(source-dir			${project-dir}/source)
set							(test-dir			${project-dir}/test)
set							(build-dir			${project-dir}/build)

include_directories			(${source-dir})

add_subdirectory			(${test-dir})


enable_testing()





