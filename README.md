# opengl-boostrap

opengl-bootstrap is an experiment to improve [Glitter](https://github.com/Polytonic/Glitter) template to get started working with OpenGL, outdated 

## Recommended worflow

- IDE: [CLion](https://www.jetbrains.com/fr-fr/clion/)
- AGILE + [Github flow](https://docs.github.com/en/get-started/quickstart/github-flow)

## Getting Started
Glitter has a single dependency: [cmake](http://www.cmake.org/download/), which is used to generate platform-specific makefiles or project files. Start by cloning this repository, making sure to pass the `--recursive` flag to grab all the dependencies. If you forgot, then you can `git submodule update --init` instead.

```bash
git clone https://github.com/napolitain/opengl-boostrap
cd opengl-boostrap
cd your_build_dir
```

Now generate a project file or makefile for your platform. If you want to use a particular IDE, make sure it is installed; don't forget to set the Start-Up Project in Visual Studio or the Target in Xcode.

```bash
# UNIX Makefile
cmake ..

# Mac OSX
cmake -G "Xcode" ..

# Microsoft Windows
cmake -G "Visual Studio 14" ..
cmake -G "Visual Studio 14 Win64" ..
...
```
Functionality           | Library
----------------------- | ------------------------------------------
Mesh Loading            | [assimp](https://github.com/assimp/assimp)
Physics                 | [bullet](https://github.com/bulletphysics/bullet3)
OpenGL Function Loader  | [glad](https://github.com/Dav1dde/glad)
Windowing and Input     | [glfw](https://github.com/glfw/glfw)
OpenGL Mathematics      | [glm](https://github.com/g-truc/glm)
Texture Loading         | [stb](https://github.com/nothings/stb)
Unit Testing            | [Google Tests](https://github.com/google/googletest)
Documentation           | [Doxygen](https://github.com/doxygen/doxygen)
CI/CD                   | [Github Actions](https://docs.github.com/en/actions)
