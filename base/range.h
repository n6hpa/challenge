#pragma once

namespace jp {
namespace base {

template <class T>
class range {
 private:
  class iter {
   private:
    T at_;

   public:
    iter(T at) : at_(at) {}
    bool operator!=(iter const& other) const { return at_ != other.at_; }
    T const& operator*() const { return at_; }
    iter& operator++() {
      ++at_;
      return *this;
    }
  };

  T begin_val_;
  T end_val_;

 public:
  range(T begin_val, T end_val) : begin_val_(begin_val), end_val_(end_val) {}

  iter begin() { return iter(begin_val_); }
  iter end() { return iter(end_val_); }
};

  
} // namespace base
} // namespace jp