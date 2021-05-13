#pragma once
class Gui
{
public:

	void Render();
	void Theme();

	bool IsOpen = false;
private:
	void Line(const char* identifer);
	int Tab = 0;
};
extern Gui Menu;
