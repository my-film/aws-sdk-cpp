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
#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/MethodSnapshot.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>An immutable representation of a <a>RestApi</a> resource that can be called
   * by users using <a>Stages</a>. A deployment must be associated with a
   * <a>Stage</a> for it to be callable over the Internet.</p>
   */
  class AWS_APIGATEWAY_API Deployment
  {
  public:
    Deployment();
    Deployment(const Aws::Utils::Json::JsonValue& jsonValue);
    Deployment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline Deployment& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline Deployment& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline Deployment& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline Deployment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline Deployment& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline Deployment& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline double GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline void SetCreatedDate(double value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline Deployment& WithCreatedDate(double value) { SetCreatedDate(value); return *this;}

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& GetApiSummary() const{ return m_apiSummary; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline void SetApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { m_apiSummaryHasBeenSet = true; m_apiSummary = value; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline void SetApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { m_apiSummaryHasBeenSet = true; m_apiSummary = value; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline Deployment& WithApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { SetApiSummary(value); return *this;}

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline Deployment& WithApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { SetApiSummary(value); return *this;}

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline Deployment& AddApiSummary(const Aws::String& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummaryHasBeenSet = true; m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline Deployment& AddApiSummary(Aws::String&& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummaryHasBeenSet = true; m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline Deployment& AddApiSummary(const Aws::String& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummaryHasBeenSet = true; m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline Deployment& AddApiSummary(Aws::String&& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummaryHasBeenSet = true; m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline Deployment& AddApiSummary(const char* key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummaryHasBeenSet = true; m_apiSummary[key] = value; return *this; }

    /**
     * <p>Gets a summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline Deployment& AddApiSummary(const char* key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummaryHasBeenSet = true; m_apiSummary[key] = value; return *this; }

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    double m_createdDate;
    bool m_createdDateHasBeenSet;
    Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>> m_apiSummary;
    bool m_apiSummaryHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
