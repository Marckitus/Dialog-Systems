#include "SceneLogo.h"

#include "Input.h"
#include "Render.h"
#include "Textures.h"

#include "EntityManager.h"

#define LOGO_FADE_SPEED 1.0f

SceneLogo::SceneLogo()
{
    logo = { 640 - 150, 180, 300, 300 };

    state = 0;
    timeCounter = 0.0f;
    logoAlpha = 0.0f;
}

SceneLogo::~SceneLogo()
{
}

bool SceneLogo::Load(Textures* tex)
{
    return false;
}

bool SceneLogo::Update(Input* input, float dt)
{
    if (state == 0)
    {
        state = 1;
    }
    else if (state == 1)
    {
        logoAlpha += (LOGO_FADE_SPEED * dt);

        if (logoAlpha > 1.0f)
        {
            logoAlpha = 1.0f;
            state = 2;
        }
    }
    else if (state == 2)
    {
        // Waiting for 3 seconds
        timeCounter += dt;
        if (timeCounter >= 3.0f) state = 3;
    }
    else if (state == 3)
    {
        logoAlpha -= (LOGO_FADE_SPEED * dt);

        if (logoAlpha < 0.0f)
        {
            logoAlpha = 0.0f;
            TransitionToScene(SceneType::TITLE);
        }
    }

    return false;
}

bool SceneLogo::Draw(Render* render)
{
    render->DrawRectangle({ 0, 0, 1280, 720 }, { 100, 200, 200, 255 });

    render->DrawRectangle(logo, { 255, 0, 0, (uchar)(255.0f * logoAlpha) });

    return false;
}

bool SceneLogo::Unload()
{
    return false;
}
