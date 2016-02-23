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
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int RSA_2048_HASH = HashingUtils::HashString("RSA_2048");
static const int EC_prime256v1_HASH = HashingUtils::HashString("EC_prime256v1");

namespace Aws
{
namespace ACM
{
namespace Model
{
namespace KeyAlgorithmMapper
{
KeyAlgorithm GetKeyAlgorithmForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == RSA_2048_HASH)
  {
    return KeyAlgorithm::RSA_2048;
  }
  else if (hashCode == EC_prime256v1_HASH)
  {
    return KeyAlgorithm::EC_prime256v1;
  }

  return KeyAlgorithm::NOT_SET;
}

Aws::String GetNameForKeyAlgorithm(KeyAlgorithm value)
{
  switch(value)
  {
  case KeyAlgorithm::RSA_2048:
    return "RSA_2048";
  case KeyAlgorithm::EC_prime256v1:
    return "EC_prime256v1";
  default:
    return "";
  }
}

} // namespace KeyAlgorithmMapper
} // namespace Model
} // namespace ACM
} // namespace Aws
