#include <metal/metal_layer.hpp>

namespace metal {
MetalLayer::MetalLayer(CA::MetalLayer* layer, MTL::Device* device) {
    layer->init();
    layer->setDevice(device);
    layer->setOpaque(true);
}

MetalLayer::~MetalLayer() {
    
}

}