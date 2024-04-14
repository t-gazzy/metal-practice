#include "metal_handler.hpp"

#include <Foundation/Foundation.hpp>
#include <Metal/Metal.hpp>
#include <QuartzCore/QuartzCore.hpp>

namespace metal::handler {
MetalHandler::MetalHandler() {
    auto device = MTL::CreateSystemDefaultDevice();
    auto command_queue = device->newCommandQueue();
    auto render = std::make_unique<MTL::RenderPassDescriptor>();

}
MetalHandler::~MetalHandler() {}
}  // namespace metal::handler
