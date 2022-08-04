#include <iostream>
#include <SOMETHING/something.h>

#define EASY_LIB 10

int main(int argc, char const *argv[])
{
    std::cout << "test submodule for git/github\n";
    std::cout << "RUN EASY LIB " << EASY_LIB
                        << "(SHAMWOW!)\n";

//     GLFWwindow *window;
//     int width, height;

//     if (!glfwInit())
//     {
//         fprintf(stderr, "Failed to initialize GLFW\n");
//         exit(EXIT_FAILURE);
//     }

//     window = glfwCreateWindow(300, 300, "GOTCHA!", NULL, NULL);
//     if (!window)
//     {
//         fprintf(stderr, "Failed to open GLFW window\n");
//         glfwTerminate();
//         exit(EXIT_FAILURE);
//     }

//     // Main loop
//     while (!glfwWindowShouldClose(window))
//     {
//         // Swap buffers
//         glfwSwapBuffers(window);
//         glfwPollEvents();
//     }

//     // Terminate GLFW
//     glfwTerminate();

    return 0;
}
