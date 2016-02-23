/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ecr/model/ImageFailureCode.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int InvalidImageDigest_HASH = HashingUtils::HashString("InvalidImageDigest");
static const int InvalidImageTag_HASH = HashingUtils::HashString("InvalidImageTag");
static const int ImageTagDoesNotMatchDigest_HASH = HashingUtils::HashString("ImageTagDoesNotMatchDigest");
static const int ImageNotFound_HASH = HashingUtils::HashString("ImageNotFound");
static const int MissingDigestAndTag_HASH = HashingUtils::HashString("MissingDigestAndTag");

namespace Aws
{
namespace ECR
{
namespace Model
{
namespace ImageFailureCodeMapper
{
ImageFailureCode GetImageFailureCodeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == InvalidImageDigest_HASH)
  {
    return ImageFailureCode::InvalidImageDigest;
  }
  else if (hashCode == InvalidImageTag_HASH)
  {
    return ImageFailureCode::InvalidImageTag;
  }
  else if (hashCode == ImageTagDoesNotMatchDigest_HASH)
  {
    return ImageFailureCode::ImageTagDoesNotMatchDigest;
  }
  else if (hashCode == ImageNotFound_HASH)
  {
    return ImageFailureCode::ImageNotFound;
  }
  else if (hashCode == MissingDigestAndTag_HASH)
  {
    return ImageFailureCode::MissingDigestAndTag;
  }

  return ImageFailureCode::NOT_SET;
}

Aws::String GetNameForImageFailureCode(ImageFailureCode value)
{
  switch(value)
  {
  case ImageFailureCode::InvalidImageDigest:
    return "InvalidImageDigest";
  case ImageFailureCode::InvalidImageTag:
    return "InvalidImageTag";
  case ImageFailureCode::ImageTagDoesNotMatchDigest:
    return "ImageTagDoesNotMatchDigest";
  case ImageFailureCode::ImageNotFound:
    return "ImageNotFound";
  case ImageFailureCode::MissingDigestAndTag:
    return "MissingDigestAndTag";
  default:
    return "";
  }
}

} // namespace ImageFailureCodeMapper
} // namespace Model
} // namespace ECR
} // namespace Aws
