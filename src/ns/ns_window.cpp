#include <ns/ns_window.hpp>

namespace ns {
NSWindow::NSWindow(const id& cocoa_window) {
  auto ns_window = NS::Window::bridgingCast(cocoa_window);

}

NSWindow::~NSWindow() {}

NS::Window* NSWindow::GetWindow() {
    return window_;
}
}  // namespace ns