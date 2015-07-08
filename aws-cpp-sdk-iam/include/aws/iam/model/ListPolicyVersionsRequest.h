/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API ListPolicyVersionsRequest : public IAMRequest
  {
  public:
    ListPolicyVersionsRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }
    
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    
    inline ListPolicyVersionsRequest&  WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    
    inline ListPolicyVersionsRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline ListPolicyVersionsRequest&  WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline ListPolicyVersionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter only when paginating results to indicate the maximum number of policy versions you want in the response. If there are additional policy versions beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>. This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline long GetMaxItems() const{ return m_maxItems; }
    /*
     <p>Use this parameter only when paginating results to indicate the maximum number of policy versions you want in the response. If there are additional policy versions beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>. This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline void SetMaxItems(long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /*
     <p>Use this parameter only when paginating results to indicate the maximum number of policy versions you want in the response. If there are additional policy versions beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>. This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline ListPolicyVersionsRequest&  WithMaxItems(long value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    long m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws