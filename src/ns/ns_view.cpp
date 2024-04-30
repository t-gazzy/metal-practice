#include <ns/ns_view.hpp>
namespace ns {
NSView::NSView(NS::Window* window, CA::MetalLayer* layer) {
  view_ = window->contentView();
  view_->setLayer(layer);
  view_->setWantLayer(true);
}

NSView::~NSView() {}
}  // namespace ns