# Build

## Dependencies

- \[Git\]\[\]

- C Compiler (gcc, ...)

- \[CMake\]\[\]

- \[SDL2\]\[SDL\] library

- \[SDL2_image\]\[\] library

- \[SDL2_gfx\]\[\] library

**On Debian/Ubuntu based distributions, use the following command:**

```sh
sudo apt install git build-essential pkg-config cmake cmake-data libsdl2-dev libsdl2-image-dev libsdl2-gfx-dev
```

**Optional packages:**

- \[SDL2_ttf\]\[\] library

- \[SDL2_net\]\[\] library

- \[SDL2_mixer\]\[\] library

```sh
sudo apt install libsdl2-ttf-dev libsdl2-net-dev libsdl2-mixer-dev
```

```sh
# Clone this repo
git clone https://gitlab.com/aminosbh/flying-plane-sdl-animation.git
cd flying-plane-sdl-animation

# Create a build folder
mkdir build
cd build

# Build
cmake ..
make

# Run
./flying-plane-sdl-animation
```

\*\*\*Note:\*\*\* To use SDL2\_ttf, SDL2\_net or SDL2_mixer, you should uncomment some instructions in the CMakeLists.txt file and re-execute the `make` command.

### Open the project with an IDE under Linux

See [SDL with an IDE under Linux](https://www.codegrepper.com/code-examples/shell/install+sdl+for+linux) for details.


