#ifndef METAL_METAL_LAYER_HPP_
#define METAL_METAL_LAYER_HPP_

#include <Metal/Metal.hpp>
#include <CAMetalLayer.hpp>

namespace metal {

class MetalLayer {
 public:
  explicit MetalLayer(CA::MetalLayer* layer, MTL::Device* device);
  ~MetalLayer();
};
}  // namespace metal
#endif  // METAL_METAL_LAYER_HPP_