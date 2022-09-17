//
// gif-h-demo.cpp
// by Charlie Tangora
// Public domain.
// Email me : ctangora -at- gmail -dot- com
//
// Shows an example usage of gif.h
//

#include "gif.hpp"

#include <cmath>
#include <random>
#include <string>

const int width = 128;
const int height = 128;

int main(int argc, const char *argv[]) {
  const std::string filename{"./output.gif"};

  gif::GifWriter writer{filename, width, height, 10};

  for (int frame_number = 0; frame_number < 20; ++frame_number) {
    gif::Frame frame{width, height};
    for (std::size_t i = 0; i < height; ++i) {
      for (std::size_t j = 0; j < height; ++j) {
        frame[{i, j}] = gif::Pixel{
            static_cast<uint8_t>(rand() % 255),
            static_cast<uint8_t>(rand() % 255),
            static_cast<uint8_t>(rand() % 255),
        };
      }
    }
    writer.write_frame(frame);
  }

  return 0;
}
