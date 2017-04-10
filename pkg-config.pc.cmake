Name: ${PROJECT_NAME}
Description: A library to manage sources of surveillance data
Requires:
Version: ${PROJECT_VERSION}
Libs: -L${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} -llog4cplus
Cflags: -I${CMAKE_INSTALL_PREFIX}/include
