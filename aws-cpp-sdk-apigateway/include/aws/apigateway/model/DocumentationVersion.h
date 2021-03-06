﻿/*
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
#include <aws/core/utils/DateTime.h>

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
   * <p>A snapshot of the documentation of an API.</p> <div
   * class="remarks"><p>Publishing API documentation involves creating a
   * documentation version associated with an API stage and exporting the versioned
   * documentation to an external (e.g., Swagger) file.</p></div> <div
   * class="seeAlso"> <a
   * href="http://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-documenting-api.html">Documenting
   * an API</a>, <a>DocumentationPart</a>, <a>DocumentationVersions</a>
   * </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationVersion">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API DocumentationVersion
  {
  public:
    DocumentationVersion();
    DocumentationVersion(const Aws::Utils::Json::JsonValue& jsonValue);
    DocumentationVersion& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline DocumentationVersion& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline DocumentationVersion& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>The version identifier of the API documentation snapshot.</p>
     */
    inline DocumentationVersion& WithVersion(const char* value) { SetVersion(value); return *this;}

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline DocumentationVersion& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the API documentation snapshot is created.</p>
     */
    inline DocumentationVersion& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline DocumentationVersion& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline DocumentationVersion& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the API documentation snapshot.</p>
     */
    inline DocumentationVersion& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_version;
    bool m_versionHasBeenSet;
    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
