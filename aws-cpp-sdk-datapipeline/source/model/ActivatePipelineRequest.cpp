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
#include <aws/datapipeline/model/ActivatePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ActivatePipelineRequest::ActivatePipelineRequest() : 
    m_pipelineIdHasBeenSet(false),
    m_parameterValuesHasBeenSet(false),
    m_startTimestampHasBeenSet(false)
{
}

Aws::String ActivatePipelineRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pipelineIdHasBeenSet)
  {
   payload.WithString("pipelineId", m_pipelineId);

  }

  if(m_parameterValuesHasBeenSet)
  {
   Array<JsonValue> parameterValuesJsonList(m_parameterValues.size());
   for(unsigned parameterValuesIndex = 0; parameterValuesIndex < parameterValuesJsonList.GetLength(); ++parameterValuesIndex)
   {
     parameterValuesJsonList[parameterValuesIndex].AsObject(m_parameterValues[parameterValuesIndex].Jsonize());
   }
   payload.WithArray("parameterValues", std::move(parameterValuesJsonList));

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("startTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ActivatePipelineRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DataPipeline.ActivatePipeline"));
  return headers;

}



