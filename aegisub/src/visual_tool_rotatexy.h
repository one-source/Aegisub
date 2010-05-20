// Copyright (c) 2007, Rodrigo Braz Monteiro
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//   * Neither the name of the Aegisub Group nor the names of its contributors
//     may be used to endorse or promote products derived from this software
//     without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
// Aegisub Project http://www.aegisub.org/
//
// $Id$

/// @file visual_tool_rotatexy.h
/// @see visual_tool_rotatexy.cpp
/// @ingroup visual_ts
///

#include "visual_feature.h"
#include "visual_tool.h"

/// DOCME
/// @class VisualToolRotateXY
/// @brief DOCME
class VisualToolRotateXY : public VisualTool<VisualDraggableFeature> {
private:

	/// DOCME

	/// DOCME

	/// DOCME
	float curAngleX,startAngleX,origAngleX;

	/// DOCME

	/// DOCME

	/// DOCME
	float curAngleY,startAngleY,origAngleY;

	/// DOCME

	/// DOCME

	/// DOCME

	/// DOCME
	int orgx,orgy,odx,ody;

	/// DOCME
	float rz;


	/// @brief DOCME
	/// @return 
	///
	bool InitializeHold();
	void UpdateHold();
	void CommitHold();


	/// @brief DOCME
	///
	void PopulateFeatureList();
	void UpdateDrag(VisualDraggableFeature &feature);
	void CommitDrag(VisualDraggableFeature &feature);

	void DoRefresh();

public:
	VisualToolRotateXY(VideoDisplay *parent, VideoState const& video, wxToolBar *);

	void Draw();
};
