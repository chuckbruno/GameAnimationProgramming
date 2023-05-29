#pragma once

#include "Application.h"
#include "DebugDraw.h"
#include "Track.h"
#include <vector>


class Sample :public Application {
protected:
    std::vector<ScalarTrack> mScalarTracks;
    std::vector<bool> mScalarTracksLooping;
    Shader* mShader;
    Attribute<vec3>* mVertexPositions;
    Attribute<vec3>* mVertexNormals;
    Attribute<vec2>* mVertexTexCoords;
    IndexBuffer* mIndexBuffer;
    Texture* mDisplayTexture;
    float mRotation;
public:
    void Initialize();
    void Update(float inDeltaTime);
    void Render(float inAspectRatio);
    void Shutdown();
};