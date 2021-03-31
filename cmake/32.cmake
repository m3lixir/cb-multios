set(CMAKE_SYSTEM_PROCESSOR i686)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

if(WIN32)
    set(CMAKE_ASM_MASM_COMPILER clang)
else(WIN32)    
    set(CMAKE_ASM_COMPILER clang)
endif(WIN32)

set(CMAKE_C_FLAGS_INIT -m32)
set(CMAKE_CXX_FLAGS_INIT -m32)
set(CMAKE_ASM_FLAGS_INIT -m32)

set(CMAKE_EXE_LINKER_FLAGS_INIT -m32)
set(CMAKE_SHARED_LINKER_FLAGS_INIT -m32)
set(CMAKE_MODULE_LINKER_FLAGS_INIT -m32)

add_compile_definitions(X32_COMPILE)