/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_ADS_INTERNAL_ML_TRANSFORMATION_LOWERCASE_H_
#define BAT_ADS_INTERNAL_ML_TRANSFORMATION_LOWERCASE_H_

#include <memory>

#include "bat/ads/internal/ml/data/data.h"
#include "bat/ads/internal/ml/transformation/transformation.h"

namespace ads {
namespace ml {
namespace transformation {

class Lowercase : public Transformation {
 public:
  Lowercase();

  ~Lowercase() override;

  std::unique_ptr<data::Data> Apply(
      const std::unique_ptr<data::Data>& input_data) override;
};

}  // namespace transformation
}  // namespace ml
}  // namespace ads

#endif  // BAT_ADS_INTERNAL_ML_TRANSFORMATION_LOWERCASE_H_
