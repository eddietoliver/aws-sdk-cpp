﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API BatchGetCustomEntityTypesRequest : public GlueRequest
  {
  public:
    BatchGetCustomEntityTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetCustomEntityTypes"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline BatchGetCustomEntityTypesRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline BatchGetCustomEntityTypesRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline BatchGetCustomEntityTypesRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline BatchGetCustomEntityTypesRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of the custom patterns that you want to retrieve.</p>
     */
    inline BatchGetCustomEntityTypesRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
