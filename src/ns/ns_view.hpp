#ifndef NS_NS_VIEW_HPP
#define NS_NS_VIEW_HPP

#include <NSView.hpp>

namespace ns {

class NSView {
 public:
  NSView(NS::Window* window, CA::MetalLayer* layer);
  ~NSView();

 private:
  NS::View* view_ = nullptr;
};
};  // namespace ns

#endif  // NS_NS_VIEW_HPP