#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
	for (int i = 0; i < nSurfs; i++)
	{
		const std::string surfsPath = "kud50px\\upload (" + std::to_string(i) + ").bmp";
		surfs[i].Init(surfsPath);
	}
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	if (wnd.kbd.KeyIsPressed(VK_ESCAPE))
		wnd.Kill();

	const float dtSpeed = dSpeed * ft.Mark();
	if ( int(currFrame + dtSpeed) >= nSurfs - 1 )
		currFrame = 0.f;

	currFrame += dtSpeed;
}

void Game::ComposeFrame()
{
	gfx.DrawSpriteNoChroma(
		wnd.mouse.GetPosX(), 
		wnd.mouse.GetPosY(), 
		{ 0, 50, 0, 50 }, 
		gfx.GetScreenRect(),
		surfs[int(currFrame)]);
}
