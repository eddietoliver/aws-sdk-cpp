﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ImageStateChangeReasonCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the reason why the last image state change occurred.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ImageStateChangeReason">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API ImageStateChangeReason
  {
  public:
    ImageStateChangeReason();
    ImageStateChangeReason(Aws::Utils::Json::JsonView jsonValue);
    ImageStateChangeReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state change reason code.</p>
     */
    inline const ImageStateChangeReasonCode& GetCode() const{ return m_code; }

    /**
     * <p>The state change reason code.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state change reason code.</p>
     */
    inline void SetCode(const ImageStateChangeReasonCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state change reason code.</p>
     */
    inline void SetCode(ImageStateChangeReasonCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state change reason code.</p>
     */
    inline ImageStateChangeReason& WithCode(const ImageStateChangeReasonCode& value) { SetCode(value); return *this;}

    /**
     * <p>The state change reason code.</p>
     */
    inline ImageStateChangeReason& WithCode(ImageStateChangeReasonCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The state change reason message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The state change reason message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The state change reason message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The state change reason message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The state change reason message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The state change reason message.</p>
     */
    inline ImageStateChangeReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The state change reason message.</p>
     */
    inline ImageStateChangeReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The state change reason message.</p>
     */
    inline ImageStateChangeReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ImageStateChangeReasonCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
