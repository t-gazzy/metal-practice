#ifndef METAL_HANDLER_HPP_
#define METAL_HANDLER_HPP_

#include <interface/interface_graphics_handler.hpp>
namespace metal::handler {
class MetalHandler : public interface::InterfaceGraphicsHandler {
 public:
  MetalHandler(/* args */);
  ~MetalHandler();
};
}  // namespace metal::handler

#endif  // METAL_HANDLER_HPP_