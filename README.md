# Computer Graphics

## Prerequisites
```shell
sudo apt update
sudo apt install freeglut3-dev mesa-utils libxmu-dev libxi-dev
```

## Compile
```shell
g++ -o sample ./sample/sample.cpp -lglut -lGLU -lGL -lm
```

## Docker
```shell
docker run -it --rm -v $PWD:/app matheusbrib/gcc-opengl sample.cpp
```