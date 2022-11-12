/*
 * Copyright (c) 2021 42dot All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AKIT_FAILOVER_FOROS_RAFT_COMMIT_INFO_HPP_
#define AKIT_FAILOVER_FOROS_RAFT_COMMIT_INFO_HPP_

#include <cstdint>

namespace akit {
namespace failover {
namespace foros {
namespace raft {

class CommitInfo {
 public:
  explicit CommitInfo(uint64_t index, uint32_t term)
      : index_(index), term_(term), empty_(true) {}

  uint64_t index_;
  uint32_t term_;
  bool empty_;
};

}  // namespace raft
}  // namespace foros
}  // namespace failover
}  // namespace akit

#endif  // AKIT_FAILOVER_FOROS_RAFT_COMMIT_INFO_HPP_
