#pragma once

#include <cstdint>
#include <string>

namespace jp {

class IPv4 {
 public:
  static bool IsValidAddress(const std::string& addr);

  explicit IPv4() = default;
  explicit IPv4(const IPv4&) = default;

  explicit IPv4(const std::string& addr);

  // TODO: assignment operators, 32-bit addresses, strings, byte arrays, spans

  // TODO: stream operators

  // returns string representation
  std::string repr() const;

  const uint32_t address() const;
  void setAddress(uint32_t addr);

 private:
  // this is the only thing we need to store. This way we'll be able to
  // reinterpret_cast other data blobs to retrieve the address.
  //
  // Stored in network byte order by default so that data blobs from network packets
  // can be parsed directly
  uint8_t address_[4];
};

}  // namespace jp