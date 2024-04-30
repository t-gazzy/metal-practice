#ifndef NS_NS_WINDOW_HPP
#define NS_NS_WINDOW_HPP

#include <NSWindow.hpp>

namespace ns {
class NSWindow {
 public:
  NSWindow(const id& cocoa_window);
  ~NSWindow();

  NS::Window* GetWindow();

 private:
  NS::Window* window_ = nullptr;
};
}  // namespace ns
#endif  // NS_NS_WINDOW_HPP