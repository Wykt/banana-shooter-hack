cmake_minimum_required(VERSION 3.27)
project(banana_shooter_hack)

set(CMAKE_CXX_STANDARD 20)


add_library(banana_shooter_hack SHARED
        dllmain.cpp
        hack.cpp
        hack.h
        gui.cpp
        gui.h

        dependencies/imgui/imgui.h
        dependencies/imgui/imgui.cpp
        dependencies/imgui/imgui_internal.h
        dependencies/imgui/imgui_widgets.cpp
        dependencies/imgui/imgui_demo.cpp
        dependencies/imgui/imgui_draw.cpp
        dependencies/imgui/imgui_impl_win32.cpp
        dependencies/imgui/imgui_impl_win32.h
        dependencies/imgui/imgui_impl_dx11.h
        dependencies/imgui/imgui_impl_dx11.cpp
        dependencies/kiero/kiero.cpp
        dependencies/kiero/kiero.h
        dependencies/kiero/minhook/include/MinHook.h
)

target_link_libraries(banana_shooter_hack PUBLIC ../dependencies/kiero/minhook/minhook)
