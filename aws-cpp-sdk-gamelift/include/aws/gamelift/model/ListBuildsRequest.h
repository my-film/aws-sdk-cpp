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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/gamelift/model/BuildStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API ListBuildsRequest : public GameLiftRequest
  {
  public:
    ListBuildsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Build state to filter results on. Use this parameter to retrieve builds in a
     * certain state. To retrieve all builds, leave this parameter empty. Possible
     * build states include: <ul><li>INITIALIZED: A new build has been defined, but no
     * files have been uploaded. You cannot create fleets for builds that are in this
     * state. When a build is successfully created, the build state is set to this
     * value. </li><li>READY: The game build has been successfully uploaded. You can
     * now create new fleets for this build.</li><li>FAILED: The game build upload
     * failed. You cannot create new fleets for this build. </li></ul></p>
     */
    inline const BuildStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Build state to filter results on. Use this parameter to retrieve builds in a
     * certain state. To retrieve all builds, leave this parameter empty. Possible
     * build states include: <ul><li>INITIALIZED: A new build has been defined, but no
     * files have been uploaded. You cannot create fleets for builds that are in this
     * state. When a build is successfully created, the build state is set to this
     * value. </li><li>READY: The game build has been successfully uploaded. You can
     * now create new fleets for this build.</li><li>FAILED: The game build upload
     * failed. You cannot create new fleets for this build. </li></ul></p>
     */
    inline void SetStatus(const BuildStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Build state to filter results on. Use this parameter to retrieve builds in a
     * certain state. To retrieve all builds, leave this parameter empty. Possible
     * build states include: <ul><li>INITIALIZED: A new build has been defined, but no
     * files have been uploaded. You cannot create fleets for builds that are in this
     * state. When a build is successfully created, the build state is set to this
     * value. </li><li>READY: The game build has been successfully uploaded. You can
     * now create new fleets for this build.</li><li>FAILED: The game build upload
     * failed. You cannot create new fleets for this build. </li></ul></p>
     */
    inline void SetStatus(BuildStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Build state to filter results on. Use this parameter to retrieve builds in a
     * certain state. To retrieve all builds, leave this parameter empty. Possible
     * build states include: <ul><li>INITIALIZED: A new build has been defined, but no
     * files have been uploaded. You cannot create fleets for builds that are in this
     * state. When a build is successfully created, the build state is set to this
     * value. </li><li>READY: The game build has been successfully uploaded. You can
     * now create new fleets for this build.</li><li>FAILED: The game build upload
     * failed. You cannot create new fleets for this build. </li></ul></p>
     */
    inline ListBuildsRequest& WithStatus(const BuildStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Build state to filter results on. Use this parameter to retrieve builds in a
     * certain state. To retrieve all builds, leave this parameter empty. Possible
     * build states include: <ul><li>INITIALIZED: A new build has been defined, but no
     * files have been uploaded. You cannot create fleets for builds that are in this
     * state. When a build is successfully created, the build state is set to this
     * value. </li><li>READY: The game build has been successfully uploaded. You can
     * now create new fleets for this build.</li><li>FAILED: The game build upload
     * failed. You cannot create new fleets for this build. </li></ul></p>
     */
    inline ListBuildsRequest& WithStatus(BuildStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>Maximum number of results to return. You can use this parameter with
     * <i>NextToken</i> to get results as a set of sequential pages.</p>
     */
    inline long GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. You can use this parameter with
     * <i>NextToken</i> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. You can use this parameter with
     * <i>NextToken</i> to get results as a set of sequential pages.</p>
     */
    inline ListBuildsRequest& WithLimit(long value) { SetLimit(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline ListBuildsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline ListBuildsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline ListBuildsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    BuildStatus m_status;
    bool m_statusHasBeenSet;
    long m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
