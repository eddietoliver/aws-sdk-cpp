﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class AWS_GLUEDATABREW_API ListJobsRequest : public GlueDataBrewRequest
  {
  public:
    ListJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of a dataset. Using this parameter indicates to return only those
     * jobs that act on the specified dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of a dataset. Using this parameter indicates to return only those
     * jobs that act on the specified dataset.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of a dataset. Using this parameter indicates to return only those
     * jobs that act on the specified dataset.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of a dataset. Using this parameter indicates to return only those
     * jobs that act on the specified dataset.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of a dataset. Using this parameter indicates to return only those
     * jobs that act on the specified dataset.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of a dataset. Using this parameter indicates to return only those
     * jobs that act on the specified dataset.</p>
     */
    inline ListJobsRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of a dataset. Using this parameter indicates to return only those
     * jobs that act on the specified dataset.</p>
     */
    inline ListJobsRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of a dataset. Using this parameter indicates to return only those
     * jobs that act on the specified dataset.</p>
     */
    inline ListJobsRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The maximum number of results to return in this request. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this request. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in this request. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this request. </p>
     */
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token generated by DataBrew that specifies where to continue pagination if
     * a previous request was truncated. To get the next set of pages, pass in the
     * NextToken value from the response object of the previous page call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token generated by DataBrew that specifies where to continue pagination if
     * a previous request was truncated. To get the next set of pages, pass in the
     * NextToken value from the response object of the previous page call. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token generated by DataBrew that specifies where to continue pagination if
     * a previous request was truncated. To get the next set of pages, pass in the
     * NextToken value from the response object of the previous page call. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token generated by DataBrew that specifies where to continue pagination if
     * a previous request was truncated. To get the next set of pages, pass in the
     * NextToken value from the response object of the previous page call. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token generated by DataBrew that specifies where to continue pagination if
     * a previous request was truncated. To get the next set of pages, pass in the
     * NextToken value from the response object of the previous page call. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token generated by DataBrew that specifies where to continue pagination if
     * a previous request was truncated. To get the next set of pages, pass in the
     * NextToken value from the response object of the previous page call. </p>
     */
    inline ListJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token generated by DataBrew that specifies where to continue pagination if
     * a previous request was truncated. To get the next set of pages, pass in the
     * NextToken value from the response object of the previous page call. </p>
     */
    inline ListJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token generated by DataBrew that specifies where to continue pagination if
     * a previous request was truncated. To get the next set of pages, pass in the
     * NextToken value from the response object of the previous page call. </p>
     */
    inline ListJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of a project. Using this parameter indicates to return only those
     * jobs that are associated with the specified project.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of a project. Using this parameter indicates to return only those
     * jobs that are associated with the specified project.</p>
     */
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }

    /**
     * <p>The name of a project. Using this parameter indicates to return only those
     * jobs that are associated with the specified project.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of a project. Using this parameter indicates to return only those
     * jobs that are associated with the specified project.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of a project. Using this parameter indicates to return only those
     * jobs that are associated with the specified project.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of a project. Using this parameter indicates to return only those
     * jobs that are associated with the specified project.</p>
     */
    inline ListJobsRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of a project. Using this parameter indicates to return only those
     * jobs that are associated with the specified project.</p>
     */
    inline ListJobsRequest& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of a project. Using this parameter indicates to return only those
     * jobs that are associated with the specified project.</p>
     */
    inline ListJobsRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
